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

#include "Monitor.h"

#include "etiss/Instruction.h"

#include <string>
#include <set>
#include <functional>
#include <iostream> // TODO: For debugging / info prints
#include <sstream>
#include <stdbool.h>

Monitor::Monitor(std::string name_, InstructionMonitorSet* instrMonitorSet_) : name(name_), instrMonitorSet(instrMonitorSet_)
{
    //std::cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
    //std::cout << "Creating monitor: " << name << "\n";
    //std::cout << " - Creating monitor-function map:\n";

    instrMonitorSet->foreach([this](InstructionMonitor &instr)
    {
        //std::stringstream instrInfo_strs;
        //instrInfo_strs << instr.name;

        auto it = instrMonitorFunc_map.find(instr.name);
        if(it != instrMonitorFunc_map.end())
        {
	  //std::cout << "\tERROR: Cannot add" << instrInfo_strs.str() << ". Name already registered.\n";
	  return;
        }
        instrMonitorFunc_map[instr.name][PRE] = instr.preMonitorFunc;
        instrMonitorFunc_map[instr.name][POST] = instr.postMonitorFunc;

	//std::cout << "\tAdding " << instrInfo_strs.str() << " to monitor-function map\n";

    });
    //std::cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
}

std::string Monitor::getInstrCallback(etiss::instr::Instruction &instr, etiss::instr::BitArray &ba, etiss::instr::InstructionContext &ic, position_t pos) const
{
    std::stringstream ret_strs;
    
    auto it = instrMonitorFunc_map.find(instr.name_);
    if(it == instrMonitorFunc_map.end())
    {
        it = instrMonitorFunc_map.find("_def");
    }

    ret_strs << ((it->second).find(pos))->second(ba, instr, ic);

    return ret_strs.str();
}

  
std::string Monitor::getPreInstrCallback(etiss::instr::Instruction &instr, etiss::instr::BitArray &ba, etiss::instr::InstructionContext &ic) const
{
    return getInstrCallback(instr, ba, ic, PRE);
}

std::string Monitor::getPostInstrCallback(etiss::instr::Instruction &instr, etiss::instr::BitArray &ba, etiss::instr::InstructionContext &ic) const
{
    return getInstrCallback(instr, ba, ic, POST);
}

void InstructionMonitorSet::addInstructionMonitor(InstructionMonitor* instrMonitor)
{
  instrMonitor_set.insert(instrMonitor);    
}

void InstructionMonitorSet::foreach(std::function<void(InstructionMonitor &)> func)
{
   for(auto it = instrMonitor_set.begin(); it != instrMonitor_set.end(); it++)
    {
       func(**it);
    }
}

InstructionMonitor::InstructionMonitor(InstructionMonitorSet* parent_,
				       std::string name_,
				       std::function<std::string(etiss::instr::BitArray &, etiss::instr::Instruction &, etiss::instr::InstructionContext &)> preMonitorFunc_,
				       std::function<std::string(etiss::instr::BitArray &, etiss::instr::Instruction &, etiss::instr::InstructionContext &)> postMonitorFunc_) :
    parentSet(parent_),
    name(name_),
    preMonitorFunc(preMonitorFunc_),
    postMonitorFunc(postMonitorFunc_)
{
    parentSet->addInstructionMonitor(this);
}

