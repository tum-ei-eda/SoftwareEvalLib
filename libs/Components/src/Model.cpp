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

#include "Model.h"

#include <string>
#include <set>
#include <map>
#include <list>
#include <functional>
#include <iostream> // Used for info prints in constructor. Replace with common print handling?
#include <sstream> // Used for info prints in constructor. Replace with common print handling?
#include <iomanip> // Used for info prints in constructor. Replace with common print handling?

PerformanceModel::PerformanceModel(std::string name_, InstructionModelSet* instrModelSet_) : name(name_), instrModelSet(instrModelSet_)
{
    std::cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
    std::cout << "Creating performance model: " << name << "\n";
    std::cout << " - Creating time-function map:\n";

    instrModelSet->foreach([this](InstructionModel &instr)
    {
        std::stringstream instrInfo_strs;
        instrInfo_strs << instr.name << "[Type-ID: " << instr.typeId << "]";
        
        auto typeId_it = instrTimeFunc_map.find(instr.typeId);
        if(typeId_it != instrTimeFunc_map.end())
        {
	  std::cout << "\tERROR: Cannot add " << instrInfo_strs.str() << " to time-function map. Type-ID already assigned.\n";
	  return;
        }

        instrTimeFunc_map[instr.typeId] = instr.timeFunc;
        std::cout << "\tAdding " << instrInfo_strs.str() << " to time-function map.\n";

    });

    std::cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
}

void PerformanceModel::callInstrTimeFunc(int typeId_)
{

  instrTimeFunc_map[typeId_](this);
  //// TODO: Get rid of this check! Should be unnecessary after code-gen replaces default-instr. with real instructions
  //if(instrTimeFunc_map[typeId_]) 
  //{
  //    instrTimeFunc_map[opc_][mask_](this);
  //}
  //else
  //{
  //    instrTimeFunc_map[0xffffffff][0x00000000](this);
  //}
}

void InstructionModelSet::addInstructionModel(InstructionModel* instrModel)
{
    instrModel_set.insert(instrModel);
}

void InstructionModelSet::foreach(std::function<void(InstructionModel &)> func)
{
    for(auto it = instrModel_set.begin(); it != instrModel_set.end(); it++)
    {
        func(**it);
    }
}

InstructionModel::InstructionModel(InstructionModelSet* parent_, std::string name_, int typeId_, std::function<void(PerformanceModel*)> timeFunc_) : 
    typeId(typeId_),
    name(name_),
    parentSet(parent_),
    timeFunc(timeFunc_)
{
    parentSet->addInstructionModel(this);
}

int SharedResourceModel::getDelay(int prev_cycle)
{

  int start = prev_cycle + 1;
  int additionalResDelay = getDelayFromResource() - 1; // Delay -1 since first cycle is already "part of" start
  
  if(blockList.size() == 0)
  {
    blockList.push_back(new ResourceBlockEntry(start, start + additionalResDelay, "init"));
    return (additionalResDelay + 1);
  }

  for(auto entry_it=blockList.begin(); entry_it != blockList.end(); entry_it++)
  {

    // Entry blocks the requested resource. Check next entry
    if((start >= (*entry_it)->start) && (start <= (*entry_it)->end))
    {
      start = (*entry_it)->end + 1; 
      if(isLastEntry(entry_it))
      {
	blockList.push_back(new ResourceBlockEntry(start, start + additionalResDelay, "Blocked"));
	break;
      }
      else
      {
	continue;
      }
    }

    // Entry has released the resource at the point of request. Check if there is another entry blocking the resource or claim it.
    if(start >= (*entry_it)->end)
    {
      if(isLastEntry(entry_it))
      {
	// Create a new entry at the end
	blockList.push_back(new ResourceBlockEntry(start, start + additionalResDelay, "Later"));
	break;
      }
      else
      {
	continue;
      }
    }

    // At the point of request, the entry has not yet blocked the resource. Resource claimed by current request
    if(start < (*entry_it)->start)
    {

      int dummy = (*entry_it)->start;
      
      // Create new entry
      blockList.insert(entry_it, new ResourceBlockEntry(start, start + additionalResDelay, "Earlier"));

      // TODO: Find a method to solve conflicts
      //// Check for conflict
      //if((start + additionalResDelay) >= dummy)
      //{
      //	
      //}

      break;
    }
    
  }
  
  // TODO: Find a reasonable buffer size here!!!
  if(blockList.size() > 10)
  {
    delete blockList.front();
    blockList.pop_front();
  }
  
  return (start - prev_cycle) + additionalResDelay;
}

bool SharedResourceModel::isLastEntry(std::list<ResourceBlockEntry*>::iterator it)
{
  auto temp = it;
  ++it;
  return ((temp != blockList.end()) && (it == blockList.end()));
}
