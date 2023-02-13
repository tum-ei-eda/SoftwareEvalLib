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

/********************* AUTO GENERATE FILE (create by M2-ISA-R-Perf) *********************/

#include "SimpleRISCV_H_fw_DynBrPred_Model.h"

#include <stdbool.h>
#include <string>
#include <sstream>

#include "Components/Channel.h"

#include "SimpleRISCV_H_fw_DynBrPred_Channel.h"

#include "DummyMemoryModel.h"
#include "DummyMemoryModel.h"
#include "DynamicBranchPredictModel.h"
#include "StandardRegisterModel.h"

void SimpleRISCV_H_fw_DynBrPred_Model::connectChannel(Channel* channel_)
{
  SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);	

  
  
  dynBranchPredModel.pc_ptr = channel->pc;
  dynBranchPredModel.brTarget_ptr = channel->brTarget;
  
  regModel.rs1_ptr = channel->rs1;
  regModel.rs2_ptr = channel->rs2;
  regModel.rd_ptr = channel->rd;
  
}

std::string SimpleRISCV_H_fw_DynBrPred_Model::getPipelineStream(void)
{
  std::stringstream ret_strs;
  
  ret_strs << SimplePipeline.getIF_stage(); 
  ret_strs << "," << SimplePipeline.getID_stage();
  ret_strs << "," << SimplePipeline.getEX_stage();
  ret_strs << "," << SimplePipeline.getMEM_stage();
  ret_strs << "," << SimplePipeline.getWB_stage();
  return ret_strs.str();
}
