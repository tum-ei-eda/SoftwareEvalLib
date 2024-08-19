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

#ifndef SWEVAL_MONITOR_INSTRUCTIONTRACE_RV64_MONITOR_H
#define SWEVAL_MONITOR_INSTRUCTIONTRACE_RV64_MONITOR_H

#include "Monitor.h"
#include "softwareEval-backends/Channel.h"

#include <string>

class InstructionTrace_RV64_Monitor : public Monitor
{
public:

  InstructionTrace_RV64_Monitor();

  virtual void connectChannel(Channel*);
  virtual std::string getBlockDeclarations(void) const;
};

#endif // SWEVAL_MONITOR_INSTRUCTIONTRACE_RV64_MONITOR_H