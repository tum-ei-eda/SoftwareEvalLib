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

#include "Models/CVA6/ICacheModel.h"

int ICacheModel::getDelay()
{
  if(notCachable())
  {
    // if a cache miss occurs the next instruction can not be directly generated
    // the miss signal adds one additional cycle to the genertion stage
    // the miss attribute is only relevant for the I$
    // instrucitons should always be cachable => setting miss here should not 
    // be nessecary
    was_miss = true;
    return mem_delay;
  } 
  else if(inCache())
  {
    was_miss = false;
    return cache_delay;
  }
  else
  {
    was_miss = true;
    return mem_delay;
  }
}

bool ICacheModel::inCache()
{
  bool hit = false;
  unsigned int addr = addr_ptr[getInstrIndex()];

  // tag calculation tag = addr[55:12]
  // since we only consider 32 bit addresses (int) we can just remove the 12 lower bit
  unsigned int tag = addr>>12;

  // index calculation index = addr[11:4], 8 bit wide, 256 bytes addressable
  // remove the higher 21 bit, remove the lower 4 bit
  unsigned int index = (addr<<(32-11))>>(32-11+4);

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

int ICacheModel::lfsr() // only for 4 bit and 2 output bits
{
  static int state = 0xF; // all 1's reset state, for 8 bit it would be 0xFF
  if(state & 0x1)
  {
    state = (state >> 1) ^ 0xC; // only for 4 bit, for 8 bit the feed is 0xFA
  }
  else
  {
    state = (state >> 1);
  }
  return state & 0x3; // only for 2 output bits
}

bool ICacheModel::notCachable()
{
  unsigned int addr = addr_ptr[getInstrIndex()];
  if((0x80000000 <= addr) && (addr < 0xC0000000))
  {
    return false;
  }
  else
  {
    return true;
  }
}

//void ICacheModel::setCacheCtrl(int fetch)
//{
//  availability = (was_miss) ? fetch : fetch - 1;
//}

int ICacheModel::wasMiss()
{
  return (was_miss) ? 1 : 0;
}
