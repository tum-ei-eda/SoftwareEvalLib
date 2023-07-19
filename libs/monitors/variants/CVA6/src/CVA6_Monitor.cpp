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

// TODO: Hand-written as a proof-of-concept

#include "CVA6_Monitor.h"

#include "softwareEval-backends/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>

extern "C"
{
  int *CVA6_Monitor_instrCnt;
  int *CVA6_Monitor_typeId_buffer;
  int *CVA6_Monitor_rs1_buffer;
  int *CVA6_Monitor_rs2_buffer;
  int *CVA6_Monitor_rd_buffer;
  int *CVA6_Monitor_pc_buffer;
  int *CVA6_Monitor_brTarget_buffer;
  int *CVA6_Monitor_memAddr_buffer;
}

extern InstructionMonitorSet* CVA6_InstrMonitorSet;

CVA6_Monitor::CVA6_Monitor(): Monitor("CVA6_Monitor", CVA6_InstrMonitorSet)
{}

void CVA6_Monitor::connectChannel(Channel* channel_)
{
  Monitor::connectChannel(channel_);

  CVA6_Monitor_instrCnt = &(channel_->instrCnt);
  CVA6_Monitor_typeId_buffer = channel_->typeId;

  CVA6_Monitor_rs1_buffer = static_cast<int*>(channel_->getTraceValueHook("rs1"));
  CVA6_Monitor_rs2_buffer = static_cast<int*>(channel_->getTraceValueHook("rs2"));
  CVA6_Monitor_rd_buffer = static_cast<int*>(channel_->getTraceValueHook("rd"));
  CVA6_Monitor_pc_buffer = static_cast<int*>(channel_->getTraceValueHook("pc"));
  CVA6_Monitor_brTarget_buffer = static_cast<int*>(channel_->getTraceValueHook("brTarget"));
  CVA6_Monitor_memAddr_buffer = static_cast<int*>(channel_->getTraceValueHook("memAddr"));
}


std::string CVA6_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
 
  ret_strs << "extern int *CVA6_Monitor_instrCnt;\n";
  ret_strs << "extern int *CVA6_Monitor_typeId_buffer;\n";

  ret_strs << "extern int *CVA6_Monitor_rs1_buffer;\n";
  ret_strs << "extern int *CVA6_Monitor_rs2_buffer;\n";
  ret_strs << "extern int *CVA6_Monitor_rd_buffer;\n";
  ret_strs << "extern int *CVA6_Monitor_pc_buffer;\n";
  ret_strs << "extern int *CVA6_Monitor_brTarget_buffer;\n";
  ret_strs << "extern int *CVA6_Monitor_memAddr_buffer;\n";

  return ret_strs.str();
}
