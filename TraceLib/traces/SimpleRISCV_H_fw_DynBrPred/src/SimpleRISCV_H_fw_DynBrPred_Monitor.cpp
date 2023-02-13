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

#include "SimpleRISCV_H_fw_DynBrPred_Monitor.h"
#include "SimpleRISCV_H_fw_DynBrPred_Channel.h"

#include "Components/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>

extern "C"
{
  int *SimpleRISCV_H_fw_DynBrPred_Monitor_instrCnt;
  int *SimpleRISCV_H_fw_DynBrPred_Monitor_typeId_buffer;
  int *SimpleRISCV_H_fw_DynBrPred_Monitor_pc_buffer;
  int *SimpleRISCV_H_fw_DynBrPred_Monitor_brTarget_buffer;
  int *SimpleRISCV_H_fw_DynBrPred_Monitor_rs1_buffer;
  int *SimpleRISCV_H_fw_DynBrPred_Monitor_rs2_buffer;
  int *SimpleRISCV_H_fw_DynBrPred_Monitor_rd_buffer;
}

extern InstructionMonitorSet* SimpleRISCV_H_fw_DynBrPred_InstrMonitorSet;

SimpleRISCV_H_fw_DynBrPred_Monitor::SimpleRISCV_H_fw_DynBrPred_Monitor(): Monitor("SimpleRISCV_H_fw_DynBrPred_Monitor", SimpleRISCV_H_fw_DynBrPred_InstrMonitorSet)
{}

void SimpleRISCV_H_fw_DynBrPred_Monitor::connectChannel(Channel* channel_)
{
  Monitor::channel = channel_;

  SimpleRISCV_H_fw_DynBrPred_Channel* ch = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);

  SimpleRISCV_H_fw_DynBrPred_Monitor_instrCnt = &(ch->instrCnt);
  SimpleRISCV_H_fw_DynBrPred_Monitor_typeId_buffer = ch->typeId;

  SimpleRISCV_H_fw_DynBrPred_Monitor_pc_buffer = ch->pc;
  SimpleRISCV_H_fw_DynBrPred_Monitor_brTarget_buffer = ch->brTarget;
  SimpleRISCV_H_fw_DynBrPred_Monitor_rs1_buffer = ch->rs1;
  SimpleRISCV_H_fw_DynBrPred_Monitor_rs2_buffer = ch->rs2;
  SimpleRISCV_H_fw_DynBrPred_Monitor_rd_buffer = ch->rd;
}


std::string SimpleRISCV_H_fw_DynBrPred_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
 
  ret_strs << "extern int *SimpleRISCV_H_fw_DynBrPred_Monitor_instrCnt;\n";
  ret_strs << "extern int *SimpleRISCV_H_fw_DynBrPred_Monitor_typeId_buffer;\n";

  ret_strs << "extern int *SimpleRISCV_H_fw_DynBrPred_Monitor_pc_buffer;\n";
  ret_strs << "extern int *SimpleRISCV_H_fw_DynBrPred_Monitor_brTarget_buffer;\n";
  ret_strs << "extern int *SimpleRISCV_H_fw_DynBrPred_Monitor_rs1_buffer;\n";
  ret_strs << "extern int *SimpleRISCV_H_fw_DynBrPred_Monitor_rs2_buffer;\n";
  ret_strs << "extern int *SimpleRISCV_H_fw_DynBrPred_Monitor_rd_buffer;\n";

  return ret_strs.str();
}
