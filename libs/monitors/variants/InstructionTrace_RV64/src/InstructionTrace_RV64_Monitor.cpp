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

/********************* AUTO GENERATE FILE (create by Trace-Generator) *********************/

#include "InstructionTrace_RV64_Monitor.h"

#include "softwareEval-backends/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>
#include <cstdint>

extern "C"
{
  uint64_t *InstructionTrace_RV64_Monitor_instrCnt;
  uint64_t *InstructionTrace_RV64_Monitor_typeId_buffer;
  int *InstructionTrace_RV64_Monitor_pc_buffer;
  int *InstructionTrace_RV64_Monitor_code_buffer;
  char (*InstructionTrace_RV64_Monitor_assembly_buffer)[50];
  int *InstructionTrace_RV64_Monitor_imm_buffer;
  int *InstructionTrace_RV64_Monitor_rs1_data_buffer;
  int *InstructionTrace_RV64_Monitor_rs2_data_buffer;
  int *InstructionTrace_RV64_Monitor_rd_data_buffer;
  int *InstructionTrace_RV64_Monitor_jump_pc_buffer;
  int *InstructionTrace_RV64_Monitor_csr_buffer;
  int *InstructionTrace_RV64_Monitor_mem_addr_buffer;
}

extern InstructionMonitorSet* InstructionTrace_RV64_InstrMonitorSet;

InstructionTrace_RV64_Monitor::InstructionTrace_RV64_Monitor(): Monitor("InstructionTrace_RV64_Monitor", InstructionTrace_RV64_InstrMonitorSet)
{}

void InstructionTrace_RV64_Monitor::connectChannel(Channel* channel_)
{
  Monitor::connectChannel(channel_);

  InstructionTrace_RV64_Monitor_instrCnt = &(channel_->instrCnt);
  InstructionTrace_RV64_Monitor_typeId_buffer = channel_->typeId;

  InstructionTrace_RV64_Monitor_pc_buffer = static_cast<int*>(channel_->getTraceValueHook("pc"));
  InstructionTrace_RV64_Monitor_code_buffer = static_cast<int*>(channel_->getTraceValueHook("code"));
  InstructionTrace_RV64_Monitor_assembly_buffer = static_cast<char(*)[50]>(channel_->getTraceValueHook("assembly"));
  InstructionTrace_RV64_Monitor_imm_buffer = static_cast<int*>(channel_->getTraceValueHook("imm"));
  InstructionTrace_RV64_Monitor_rs1_data_buffer = static_cast<int*>(channel_->getTraceValueHook("rs1_data"));
  InstructionTrace_RV64_Monitor_rs2_data_buffer = static_cast<int*>(channel_->getTraceValueHook("rs2_data"));
  InstructionTrace_RV64_Monitor_rd_data_buffer = static_cast<int*>(channel_->getTraceValueHook("rd_data"));
  InstructionTrace_RV64_Monitor_jump_pc_buffer = static_cast<int*>(channel_->getTraceValueHook("jump_pc"));
  InstructionTrace_RV64_Monitor_csr_buffer = static_cast<int*>(channel_->getTraceValueHook("csr"));
  InstructionTrace_RV64_Monitor_mem_addr_buffer = static_cast<int*>(channel_->getTraceValueHook("mem_addr"));
}


std::string InstructionTrace_RV64_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
  ret_strs << "#include <string.h>\n";
 
  ret_strs << "extern uint64_t *InstructionTrace_RV64_Monitor_instrCnt;\n";
  ret_strs << "extern uint64_t *InstructionTrace_RV64_Monitor_typeId_buffer;\n";

  ret_strs << "extern int *InstructionTrace_RV64_Monitor_pc_buffer;\n";
  ret_strs << "extern int *InstructionTrace_RV64_Monitor_code_buffer;\n";
  ret_strs << "extern char (*InstructionTrace_RV64_Monitor_assembly_buffer)[50];\n";
  ret_strs << "extern int *InstructionTrace_RV64_Monitor_imm_buffer;\n";
  ret_strs << "extern int *InstructionTrace_RV64_Monitor_rs1_data_buffer;\n";
  ret_strs << "extern int *InstructionTrace_RV64_Monitor_rs2_data_buffer;\n";
  ret_strs << "extern int *InstructionTrace_RV64_Monitor_rd_data_buffer;\n";
  ret_strs << "extern int *InstructionTrace_RV64_Monitor_jump_pc_buffer;\n";
  ret_strs << "extern int *InstructionTrace_RV64_Monitor_csr_buffer;\n";
  ret_strs << "extern int *InstructionTrace_RV64_Monitor_mem_addr_buffer;\n";

  return ret_strs.str();
}
