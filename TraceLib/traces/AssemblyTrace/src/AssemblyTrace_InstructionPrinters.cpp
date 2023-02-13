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

#include "Components/Printer.h"
#include "Components/Channel.h"

#include "AssemblyTrace_Channel.h"

#include <sstream>
#include <string>
#include <iomanip>

InstructionPrinterSet *AssemblyTrace_InstrPrinterSet = new InstructionPrinterSet("AssemblyTrace_InstrPrinterSet");

static InstructionPrinter *instrPrinter__def = new InstructionPrinter(
  AssemblyTrace_InstrPrinterSet,
  "_def",
  0,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    AssemblyTrace_Channel* channel = static_cast<AssemblyTrace_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    return ret_strs.str();
  }
);
