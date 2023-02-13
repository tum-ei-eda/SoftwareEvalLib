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

#ifndef TRACE_FACTORY_H
#define TRACE_FACTORY_H


#include "Components/Monitor.h"
#include "Components/Channel.h"
#include "Components/Printer.h"

#include <string>

class TraceFactory
{
private:
  enum traceId_t {InstructionTrace, AssemblyTrace, SimpleRISCV_H_fw_DynBrPred, CV32E40P};
public:
    int getTraceHandle(std::string);
    Monitor* getMonitor(int);
    Channel* getChannel(int);
    Printer* getPrinter(int);
};
  
#endif //TRACE_FACTORY_H
