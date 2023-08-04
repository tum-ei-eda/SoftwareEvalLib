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

/********************* AUTO GENERATE FILE (create by M2-ISA-R-Perf) *********************/

#include "Monitor.h"

#include "etiss/Instruction.h"

#include <sstream>
#include <string>

InstructionMonitorSet *AssemblyTrace_InstrMonitorSet = new InstructionMonitorSet("AssemblyTrace_InstrMonitorSet");

static InstructionMonitor *instrMonitor__def = new InstructionMonitor(
  AssemblyTrace_InstrMonitorSet,
  "_def",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    ret_strs << "AssemblyTrace_Monitor_typeId_buffer[*AssemblyTrace_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "AssemblyTrace_Monitor_pc_buffer[*AssemblyTrace_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(AssemblyTrace_Monitor_assembly_buffer[*AssemblyTrace_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    ret_strs << "*AssemblyTrace_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    ret_strs << "*AssemblyTrace_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*AssemblyTrace_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

