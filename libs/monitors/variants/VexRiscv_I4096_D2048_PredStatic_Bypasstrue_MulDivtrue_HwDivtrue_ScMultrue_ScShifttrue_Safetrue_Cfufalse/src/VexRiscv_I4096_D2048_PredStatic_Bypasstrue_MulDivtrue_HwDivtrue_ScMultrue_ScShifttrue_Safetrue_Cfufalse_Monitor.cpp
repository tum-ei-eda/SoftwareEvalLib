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


#include "VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor.h"

#include "softwareEval-backends/Channel.h"

#include <sstream>
#include <string>
#include <stdbool.h>
#include <cstdint>

extern "C"
{
  uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_instrCnt;
  uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_typeId_buffer;
  uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_rs1_buffer;
  uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_rs2_buffer;
  uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_rd_buffer;
  uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_pc_buffer;
  uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_brTarget_buffer;
  uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_branchKind_buffer;
  uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_addr_buffer;
}

extern InstructionMonitorSet* VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_InstrMonitorSet;

VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor::VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor(): Monitor("VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor", VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_InstrMonitorSet)
{}

void VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor::connectChannel(Channel* channel_)
{
  Monitor::connectChannel(channel_);

  VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_instrCnt = &(channel_->instrCnt);
  VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_typeId_buffer = channel_->typeId;

  VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_rs1_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs1"));
  VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_rs2_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rs2"));
  VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_rd_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("rd"));
  VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_pc_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("pc"));
  VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_brTarget_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("brTarget"));
  VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_branchKind_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("branchKind"));
  VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_addr_buffer = static_cast<uint64_t*>(channel_->getTraceValueHook("addr"));
}


std::string VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor::getBlockDeclarations(void) const
{
  std::stringstream ret_strs;
 
  ret_strs << "extern uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_instrCnt;\n";
  ret_strs << "extern uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_typeId_buffer;\n";

  ret_strs << "extern uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_rs1_buffer;\n";
  ret_strs << "extern uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_rs2_buffer;\n";
  ret_strs << "extern uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_rd_buffer;\n";
  ret_strs << "extern uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_pc_buffer;\n";
  ret_strs << "extern uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_brTarget_buffer;\n";
  ret_strs << "extern uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_branchKind_buffer;\n";
  ret_strs << "extern uint64_t *VexRiscv_I4096_D2048_PredStatic_Bypasstrue_MulDivtrue_HwDivtrue_ScMultrue_ScShifttrue_Safetrue_Cfufalse_Monitor_addr_buffer;\n";

  return ret_strs.str();
}
