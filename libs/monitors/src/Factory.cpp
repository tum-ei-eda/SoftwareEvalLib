
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

#include "Factory.h" 

#include "Monitor.h"

#include "CV32E40P_Monitor.h"
#include "AssemblyTrace_RV64_Monitor.h"
#include "Vicuna_Monitor.h"
#include "CVA6_Monitor.h"
#include "InstructionTrace_RV64_Monitor.h"
#include "AssemblyTrace_Monitor.h"
#include "Vicuna_zvl64b_Monitor.h"

namespace SwEvalMonitors
{

int Factory::getVariantHandle(std::string varName_)
{
    	if(varName_ == "CV32E40P"){ return CV32E40P; }
	if(varName_ == "AssemblyTrace_RV64"){ return AssemblyTrace_RV64; }
	if(varName_ == "VICUNA"){ return Vicuna; }
	if(varName_ == "CVA6"){ return CVA6; }
	if(varName_ == "InstructionTrace_RV64"){ return InstructionTrace_RV64; }
	if(varName_ == "AssemblyTrace"){ return AssemblyTrace; }
	if(varName_ == "VICUNA_ZVL64B"){ return Vicuna_zvl64b; }

    return -1;
}

Monitor* Factory::getMonitor(int var_)
{
  switch((var_t)var_)
  {
    	case CV32E40P: return new CV32E40P_Monitor();
	case AssemblyTrace_RV64: return new AssemblyTrace_RV64_Monitor();
	case Vicuna: return new Vicuna_Monitor();
	case CVA6: return new CVA6_Monitor();
	case InstructionTrace_RV64: return new InstructionTrace_RV64_Monitor();
	case AssemblyTrace: return new AssemblyTrace_Monitor();
	case Vicuna_zvl64b: return new Vicuna_zvl64b_Monitor();
 
    default: return nullptr;
  }
}

} //namespace: SwEvalMonitors
