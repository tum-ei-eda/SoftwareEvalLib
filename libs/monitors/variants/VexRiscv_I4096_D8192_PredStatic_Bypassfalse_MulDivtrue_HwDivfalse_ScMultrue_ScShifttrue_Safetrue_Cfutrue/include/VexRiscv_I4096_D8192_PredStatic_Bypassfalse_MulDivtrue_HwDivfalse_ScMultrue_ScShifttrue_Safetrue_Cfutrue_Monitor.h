/*
* Copyright 2026 Chair of EDA, Technical University of Munich
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

/********************* AUTO GENERATE FILE (create by M2-ISA-R::Trace-Generator) *********************/


#ifndef SWEVAL_MONITOR_VEXRISCV_I4096_D8192_PREDSTATIC_BYPASSFALSE_MULDIVTRUE_HWDIVFALSE_SCMULTRUE_SCSHIFTTRUE_SAFETRUE_CFUTRUE_MONITOR_H
#define SWEVAL_MONITOR_VEXRISCV_I4096_D8192_PREDSTATIC_BYPASSFALSE_MULDIVTRUE_HWDIVFALSE_SCMULTRUE_SCSHIFTTRUE_SAFETRUE_CFUTRUE_MONITOR_H

#include "Monitor.h"
#include "softwareEval-backends/Channel.h"

#include <string>

class VexRiscv_I4096_D8192_PredStatic_Bypassfalse_MulDivtrue_HwDivfalse_ScMultrue_ScShifttrue_Safetrue_Cfutrue_Monitor : public Monitor
{
public:

  VexRiscv_I4096_D8192_PredStatic_Bypassfalse_MulDivtrue_HwDivfalse_ScMultrue_ScShifttrue_Safetrue_Cfutrue_Monitor();

  virtual void connectChannel(Channel*);
  virtual std::string getBlockDeclarations(void) const;
};

#endif // SWEVAL_MONITOR_VEXRISCV_I4096_D8192_PREDSTATIC_BYPASSFALSE_MULDIVTRUE_HWDIVFALSE_SCMULTRUE_SCSHIFTTRUE_SAFETRUE_CFUTRUE_MONITOR_H