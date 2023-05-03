/*
 * Copyright 2022 Chair of EDA, Technical University of Munich
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *	 http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "Models/CVA6/DCacheModel.h"
//#pragma once
#include "CVA6_Model.h"

int DCacheModel::getDelay()
{

  // check if there is a store pending to the same address and stall until finished
  int store_block = 0;
  unsigned int addr = addr_ptr[getInstrIndex()];
  addr = (addr >> 4) << 4;
  std::map<int,int>::iterator it; 
  it = blockedAddresses.find(addr);
  if(it != blockedAddresses.end()){
    // TODO: What is going on here? Avoid reading pipeline state!!
    CVA6_Model* perfModel = static_cast<CVA6_Model*>(parentModel);
    //if(perfModel->stageTab[3].cnt < blockedAddresses[addr]){
    //  store_block = blockedAddresses[addr] - perfModel->stageTab[3].cnt;
    //}
    if(perfModel->CVA6_pipeline.getIS_stage() < blockedAddresses[addr]){
      store_block = blockedAddresses[addr] - perfModel->CVA6_pipeline.getIS_stage();
    }
    blockedAddresses.erase(it);
  }

  if(notCachable())
  {
    // if a cache miss occurs the next instruction can not be directly generated
    // the miss signal adds one additional cycle to the genertion stage
    // the miss attribute is only relevant for the I$
    // instrucitons should always be cachable => setting miss here should not 
    // be nessecary
    miss = 1;
    return mem_delay + 3 + store_block;
  } 
  else if(inCache())
  {
    miss = 0;
    return cache_delay + store_block;
  }
  else
  {
    miss = 1;
    return mem_delay + store_block;
  }
}

bool DCacheModel::inCache()
{
  bool hit = false;
  unsigned int addr = addr_ptr[getInstrIndex()];

  // tag calculation tag = addr[55:12]
  // since we only consider 32 bit addresses we can just remove the 12 lower bit
  unsigned int tag = addr >> 12;

  // index calculation index = addr[11:4], 8 bit wide, 256 bytes addressable
  // remove the higher 21 bit, remove the lower 4 bit
  unsigned int index = (addr << (32 - 11)) >> (32 - 11 + 4);

  // search through n-way associativity cache
  for(int i = 0; i < associativity; i++)
  {
    if(tag_cache[i][index] == tag && valid_cache[i][index] == true)
    {
      // cache hit
      hit = true;
      break;
    }
    else
    {
      // cache miss
      hit = false;
    }
  }

  // update cache on miss
  if(hit == false)
  {
    int i = lfsr();
    tag_cache[i][index] = tag;
    valid_cache[i][index] = true;
  }
  
  // return hit/miss information
  return hit;
}

int DCacheModel::getStoreDelay(void){

  unsigned int addr = addr_ptr[getInstrIndex()];
  addr = (addr >> 4) << 4;
  // TODO: What is going on here? Avoid reading pipeline state!!
  CVA6_Model* perfModel = static_cast<CVA6_Model*>(parentModel);
  //blockedAddresses[addr] = perfModel->stageTab[3].cnt + 5;
  blockedAddresses[addr] = perfModel->CVA6_pipeline.getIS_stage() + 5;

  // TODO: Constant retrun value??
  return 2;
}

int DCacheModel::wasMiss(void){
  return miss;
}

bool DCacheModel::notCachable(void)
{
  unsigned int addr = addr_ptr[getInstrIndex()];
  static int accessCounter = 0;
  if((0x80000000 <= addr) && (addr < 0xC0000000))
  {
    return false;
  }
  else
  {
    return true;
  }
}

int DCacheModel::lfsr(void)
{
  static int state = 0xFF; // all 1's reset state
  if(state & 0x1)
  {
    state = (state >> 1) ^ 0xFA; // mask for 8-bit: 0xFA
  }
  else
  {
    state = (state >> 1);
  }
  return state & 0x7; // 3 output bits
}
