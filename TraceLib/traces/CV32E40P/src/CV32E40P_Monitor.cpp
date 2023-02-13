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

#include "CV32E40P_Monitor.h"
#include "CV32E40P_Channel.h"

#include "Components/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>

extern "C"
{
  int *CV32E40P_Monitor_instrCnt;
  int *CV32E40P_Monitor_typeId_buffer;
  int *CV32E40P_Monitor_rs1_buffer;
  int *CV32E40P_Monitor_rs2_buffer;
  int *CV32E40P_Monitor_rd_buffer;
  int *CV32E40P_Monitor_pc_buffer;
  int *CV32E40P_Monitor_brTarget_buffer;
}

extern InstructionMonitorSet* CV32E40P_InstrMonitorSet;

CV32E40P_Monitor::CV32E40P_Monitor(): Monitor("CV32E40P_Monitor", CV32E40P_InstrMonitorSet)
{}

void CV32E40P_Monitor::connectChannel(Channel* channel_)
{
  Monitor::channel = channel_;

  CV32E40P_Channel* ch = static_cast<CV32E40P_Channel*>(channel_);

  CV32E40P_Monitor_instrCnt = &(ch->instrCnt);
  CV32E40P_Monitor_typeId_buffer = ch->typeId;

  CV32E40P_Monitor_rs1_buffer = ch->rs1;
  CV32E40P_Monitor_rs2_buffer = ch->rs2;
  CV32E40P_Monitor_rd_buffer = ch->rd;
  CV32E40P_Monitor_pc_buffer = ch->pc;
  CV32E40P_Monitor_brTarget_buffer = ch->brTarget;
}


std::string CV32E40P_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
 
  ret_strs << "extern int *CV32E40P_Monitor_instrCnt;\n";
  ret_strs << "extern int *CV32E40P_Monitor_typeId_buffer;\n";

  ret_strs << "extern int *CV32E40P_Monitor_rs1_buffer;\n";
  ret_strs << "extern int *CV32E40P_Monitor_rs2_buffer;\n";
  ret_strs << "extern int *CV32E40P_Monitor_rd_buffer;\n";
  ret_strs << "extern int *CV32E40P_Monitor_pc_buffer;\n";
  ret_strs << "extern int *CV32E40P_Monitor_brTarget_buffer;\n";

  return ret_strs.str();
}
