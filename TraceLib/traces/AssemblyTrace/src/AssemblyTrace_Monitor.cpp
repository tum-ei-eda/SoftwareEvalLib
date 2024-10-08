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

#include "AssemblyTrace_Monitor.h"
#include "AssemblyTrace_Channel.h"

#include "Components/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>

extern "C"
{
  int *AssemblyTrace_Monitor_instrCnt;
  int *AssemblyTrace_Monitor_typeId_buffer;
  int *AssemblyTrace_Monitor_pc_buffer;
  char (*AssemblyTrace_Monitor_assembly_buffer)[50];
}

extern InstructionMonitorSet* AssemblyTrace_InstrMonitorSet;

AssemblyTrace_Monitor::AssemblyTrace_Monitor(): Monitor("AssemblyTrace_Monitor", AssemblyTrace_InstrMonitorSet)
{}

void AssemblyTrace_Monitor::connectChannel(Channel* channel_)
{
  Monitor::channel = channel_;

  AssemblyTrace_Channel* ch = static_cast<AssemblyTrace_Channel*>(channel_);

  AssemblyTrace_Monitor_instrCnt = &(ch->instrCnt);
  AssemblyTrace_Monitor_typeId_buffer = ch->typeId;

  AssemblyTrace_Monitor_pc_buffer = ch->pc;
  AssemblyTrace_Monitor_assembly_buffer = ch->assembly;
}


std::string AssemblyTrace_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
  ret_strs << "#include <string.h>\n";
 
  ret_strs << "extern int *AssemblyTrace_Monitor_instrCnt;\n";
  ret_strs << "extern int *AssemblyTrace_Monitor_typeId_buffer;\n";

  ret_strs << "extern int *AssemblyTrace_Monitor_pc_buffer;\n";
  ret_strs << "extern char (*AssemblyTrace_Monitor_assembly_buffer)[50];\n";

  return ret_strs.str();
}
