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

#include "Vicuna_Monitor.h"

#include "softwareEval-backends/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>
#include <cstdint>

extern "C"
{
  uint64_t *Vicuna_Monitor_instrCnt;
  uint64_t *Vicuna_Monitor_typeId_buffer;
  uint64_t *Vicuna_Monitor_rs1_buffer;
  uint64_t *Vicuna_Monitor_rs2_buffer;
  uint64_t *Vicuna_Monitor_rd_buffer;
  uint64_t *Vicuna_Monitor_vs1_buffer;
  uint64_t *Vicuna_Monitor_vs2_buffer;
  uint64_t *Vicuna_Monitor_vs3_buffer;
  uint64_t *Vicuna_Monitor_vd_buffer;
  uint64_t *Vicuna_Monitor_vm_buffer;
  uint64_t *Vicuna_Monitor_vtype_buffer;
  uint64_t *Vicuna_Monitor_lsWidth_buffer;
  uint64_t *Vicuna_Monitor_isWidening_buffer;
  uint64_t *Vicuna_Monitor_pc_buffer;
  uint64_t *Vicuna_Monitor_brTarget_buffer;
  uint64_t *Vicuna_Monitor_vl_buffer;
  uint64_t *Vicuna_Monitor_rs2_data_buffer;
}

extern InstructionMonitorSet* Vicuna_InstrMonitorSet;

Vicuna_Monitor::Vicuna_Monitor(): Monitor("Vicuna_Monitor", Vicuna_InstrMonitorSet)
{}

void Vicuna_Monitor::connectChannel(Channel* channel_)
{
  Monitor::connectChannel(channel_);

  Vicuna_Monitor_instrCnt = &(channel_->instrCnt);
  Vicuna_Monitor_typeId_buffer = channel_->typeId;

  Vicuna_Monitor_rs1_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs1"));
  Vicuna_Monitor_rs2_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs2"));
  Vicuna_Monitor_rd_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rd"));
  Vicuna_Monitor_vs1_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("vs1"));
  Vicuna_Monitor_vs2_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("vs2"));
  Vicuna_Monitor_vs3_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("vs3"));
  Vicuna_Monitor_vd_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("vd"));
  Vicuna_Monitor_vm_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("vm"));
  Vicuna_Monitor_vtype_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("vtype"));
  Vicuna_Monitor_lsWidth_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("lsWidth"));
  Vicuna_Monitor_isWidening_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("isWidening"));
  Vicuna_Monitor_pc_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("pc"));
  Vicuna_Monitor_brTarget_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("brTarget"));
  Vicuna_Monitor_vl_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("vl"));
  Vicuna_Monitor_rs2_data_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs2_data"));
}


std::string Vicuna_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
 
  ret_strs << "extern uint64_t *Vicuna_Monitor_instrCnt;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_typeId_buffer;\n";

  ret_strs << "extern uint64_t *Vicuna_Monitor_rs1_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_rs2_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_rd_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_vs1_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_vs2_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_vs3_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_vd_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_vm_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_vtype_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_lsWidth_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_isWidening_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_pc_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_brTarget_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_vl_buffer;\n";
  ret_strs << "extern uint64_t *Vicuna_Monitor_rs2_data_buffer;\n";

  return ret_strs.str();
}
