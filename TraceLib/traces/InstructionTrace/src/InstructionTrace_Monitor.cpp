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

#include "InstructionTrace_Monitor.h"
#include "InstructionTrace_Channel.h"

#include "Components/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>

extern "C"
{
  int *InstructionTrace_Monitor_instrCnt;
  int *InstructionTrace_Monitor_typeId_buffer;
  int *InstructionTrace_Monitor_pc_buffer;
  int *InstructionTrace_Monitor_code_buffer;
  char (*InstructionTrace_Monitor_assembly_buffer)[50];
  int *InstructionTrace_Monitor_rs1_data_buffer;
  int *InstructionTrace_Monitor_rs2_data_buffer;
  int *InstructionTrace_Monitor_rd_data_buffer;
  int *InstructionTrace_Monitor_jump_pc_buffer;
  int *InstructionTrace_Monitor_csr_data_buffer;
  int *InstructionTrace_Monitor_mem_addr_buffer;
  int *InstructionTrace_Monitor_mem_wdata_buffer;
  int *InstructionTrace_Monitor_mem_rdata_buffer;
}

extern InstructionMonitorSet* InstructionTrace_InstrMonitorSet;

InstructionTrace_Monitor::InstructionTrace_Monitor(): Monitor("InstructionTrace_Monitor", InstructionTrace_InstrMonitorSet)
{}

void InstructionTrace_Monitor::connectChannel(Channel* channel_)
{
  Monitor::channel = channel_;

  InstructionTrace_Channel* ch = static_cast<InstructionTrace_Channel*>(channel_);

  InstructionTrace_Monitor_instrCnt = &(ch->instrCnt);
  InstructionTrace_Monitor_typeId_buffer = ch->typeId;

  InstructionTrace_Monitor_pc_buffer = ch->pc;
  InstructionTrace_Monitor_code_buffer = ch->code;
  InstructionTrace_Monitor_assembly_buffer = ch->assembly;
  InstructionTrace_Monitor_rs1_data_buffer = ch->rs1_data;
  InstructionTrace_Monitor_rs2_data_buffer = ch->rs2_data;
  InstructionTrace_Monitor_rd_data_buffer = ch->rd_data;
  InstructionTrace_Monitor_jump_pc_buffer = ch->jump_pc;
  InstructionTrace_Monitor_csr_data_buffer = ch->csr_data;
  InstructionTrace_Monitor_mem_addr_buffer = ch->mem_addr;
  InstructionTrace_Monitor_mem_wdata_buffer = ch->mem_wdata;
  InstructionTrace_Monitor_mem_rdata_buffer = ch->mem_rdata;
}


std::string InstructionTrace_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
  ret_strs << "#include <string.h>\n";
 
  ret_strs << "extern int *InstructionTrace_Monitor_instrCnt;\n";
  ret_strs << "extern int *InstructionTrace_Monitor_typeId_buffer;\n";

  ret_strs << "extern int *InstructionTrace_Monitor_pc_buffer;\n";
  ret_strs << "extern int *InstructionTrace_Monitor_code_buffer;\n";
  ret_strs << "extern char (*InstructionTrace_Monitor_assembly_buffer)[50];\n";
  ret_strs << "extern int *InstructionTrace_Monitor_rs1_data_buffer;\n";
  ret_strs << "extern int *InstructionTrace_Monitor_rs2_data_buffer;\n";
  ret_strs << "extern int *InstructionTrace_Monitor_rd_data_buffer;\n";
  ret_strs << "extern int *InstructionTrace_Monitor_jump_pc_buffer;\n";
  ret_strs << "extern int *InstructionTrace_Monitor_csr_data_buffer;\n";
  ret_strs << "extern int *InstructionTrace_Monitor_mem_addr_buffer;\n";
  ret_strs << "extern int *InstructionTrace_Monitor_mem_wdata_buffer;\n";
  ret_strs << "extern int *InstructionTrace_Monitor_mem_rdata_buffer;\n";

  return ret_strs.str();
}
