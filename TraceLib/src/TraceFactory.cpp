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

#include "TraceFactory.h" 

#include "Components/Monitor.h"
#include "Components/Channel.h"
#include "Components/Printer.h"

#include "InstructionTrace_Monitor.h"
#include "InstructionTrace_Channel.h"
#include "InstructionTrace_Printer.h"

#include "AssemblyTrace_Monitor.h"
#include "AssemblyTrace_Channel.h"
#include "AssemblyTrace_Printer.h"

#include "SimpleRISCV_H_fw_DynBrPred_Monitor.h"
#include "SimpleRISCV_H_fw_DynBrPred_Channel.h"
#include "SimpleRISCV_H_fw_DynBrPred_Printer.h"

#include "CV32E40P_Monitor.h"
#include "CV32E40P_Channel.h"
#include "CV32E40P_Printer.h"

int TraceFactory::getTraceHandle(std::string traceName_)
{
    if(traceName_ == "InstructionTrace")
    {
        return InstructionTrace;
    }
    if(traceName_ == "AssemblyTrace")
    {
        return AssemblyTrace;
    }
    if(traceName_ == "SimpleRISCV_H_fw_DynBrPred")
    {
        return SimpleRISCV_H_fw_DynBrPred;
    }
    if(traceName_ == "CV32E40P")
    {
        return CV32E40P;
    }
    return -1;
}

Monitor* TraceFactory::getMonitor(int trace_)
{
  switch((traceId_t)trace_)
  {
    case InstructionTrace: return new InstructionTrace_Monitor();
    case AssemblyTrace: return new AssemblyTrace_Monitor();
    case SimpleRISCV_H_fw_DynBrPred: return new SimpleRISCV_H_fw_DynBrPred_Monitor();
    case CV32E40P: return new CV32E40P_Monitor();
    default: return nullptr;
  }
}

Channel* TraceFactory::getChannel(int trace_)
{
  switch((traceId_t)trace_)
  {
    case InstructionTrace: return new InstructionTrace_Channel();
    case AssemblyTrace: return new AssemblyTrace_Channel();
    case SimpleRISCV_H_fw_DynBrPred: return new SimpleRISCV_H_fw_DynBrPred_Channel();
    case CV32E40P: return new CV32E40P_Channel();
    default: return nullptr;
  }
}

Printer* TraceFactory::getPrinter(int trace_)
{
  switch((traceId_t)trace_)
  {
    case InstructionTrace: return new InstructionTrace_Printer();
    case AssemblyTrace: return new AssemblyTrace_Printer();
    case SimpleRISCV_H_fw_DynBrPred: return new SimpleRISCV_H_fw_DynBrPred_Printer();
    case CV32E40P: return new CV32E40P_Printer();
    default: return nullptr;
  }
}
