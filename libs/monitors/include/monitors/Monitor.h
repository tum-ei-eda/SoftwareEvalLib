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

#ifndef COMPONENT_MONITOR_H
#define COMPONENT_MONITOR_H

#include "etiss/Instruction.h"

#include "softwareEval-backends/Channel.h"

#include <string>
#include <functional>
#include <map>
#include <set>
#include <stdbool.h>

class InstructionMonitorSet;

class Monitor
{
public:
    Monitor(std::string, InstructionMonitorSet*);
    virtual ~Monitor() = default;
  
    const std::string name;
    
  virtual void connectChannel(Channel* channel_) { ch_instrCnt_ptr = &(channel_->instrCnt); };
    inline void resetCounter(void) { *ch_instrCnt_ptr = 0; };
    virtual std::string getBlockDeclarations(void) const = 0;
    std::string getPreInstrCallback(etiss::instr::Instruction &, etiss::instr::BitArray &, etiss::instr::InstructionContext &) const;
    std::string getPostInstrCallback(etiss::instr::Instruction &, etiss::instr::BitArray &, etiss::instr::InstructionContext &) const;
  
private:
    InstructionMonitorSet* const instrMonitorSet;

    enum position_t {PRE, POST};
    std::string getInstrCallback(etiss::instr::Instruction &, etiss::instr::BitArray &, etiss::instr::InstructionContext &, position_t) const;
   
    std::map<std::string, std::map<position_t, std::function<std::string(etiss::instr::BitArray &, etiss::instr::Instruction &, etiss::instr::InstructionContext &)>>> instrMonitorFunc_map;
    std::map<std::string, std::function<std::string(etiss::instr::BitArray &, etiss::instr::Instruction &, etiss::instr::InstructionContext &)>> instrPreMonitorFunc_map;
    std::map<std::string, std::function<std::string(etiss::instr::BitArray &, etiss::instr::Instruction &, etiss::instr::InstructionContext &)>> instrPostMonitorFunc_map;

    int* ch_instrCnt_ptr;
};

class InstructionMonitor;

class InstructionMonitorSet
{
public:
    InstructionMonitorSet(std::string name_) : name(name_) {};
    const std::string name;
    void addInstructionMonitor(InstructionMonitor*);
    void foreach(std::function<void(InstructionMonitor &)>);
private:
    std::set<InstructionMonitor*> instrMonitor_set;
};

class InstructionMonitor
{

public:
  InstructionMonitor(InstructionMonitorSet*,
		     std::string,
		     std::function<std::string(etiss::instr::BitArray &, etiss::instr::Instruction &, etiss::instr::InstructionContext &)>,
		     std::function<std::string(etiss::instr::BitArray &, etiss::instr::Instruction &, etiss::instr::InstructionContext &)>);
  ~InstructionMonitor(); // TODO: Remove unused Destructors (All over the place)
    
  const std::string name;
  const std::function<std::string(etiss::instr::BitArray &, etiss::instr::Instruction &, etiss::instr::InstructionContext &)> preMonitorFunc;
  const std::function<std::string(etiss::instr::BitArray &, etiss::instr::Instruction &, etiss::instr::InstructionContext &)> postMonitorFunc;

private:
    InstructionMonitorSet* const parentSet;
};

#endif //COMPONENT_MONITOR_H
