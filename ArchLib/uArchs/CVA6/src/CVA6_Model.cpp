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

#include "CVA6_Model.h"

#include <stdbool.h>
#include <string>
#include <sstream>

#include "Components/Channel.h"

#include "CVA6_Channel.h"

#include "Models/general/StandardRegisterModel.h"
#include "Models/general/StaticBranchPredictModel.h"

void CVA6_Model::connectChannel(Channel* channel_)
{
  CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);	

  regModel.rs1_ptr = channel->rs1;
  regModel.rs2_ptr = channel->rs2;
  regModel.rd_ptr = channel->rd;
  
  staBranchPredModel.pc_ptr = channel->pc;
  staBranchPredModel.brTarget_ptr = channel->brTarget;
  
}

std::string CVA6_Model::getPipelineStream(void)
{
  std::stringstream ret_strs;

  ret_strs << CVA6_pipeline.getPCGEN_stage();
  ret_strs << "," << CVA6_pipeline.getIF_cache_stage();
  ret_strs << "," << CVA6_pipeline.getIF_scan_stage();
  ret_strs << "," << CVA6_pipeline.getID_stage();
  ret_strs << "," << CVA6_pipeline.getIS_stage();
  ret_strs << "," << CVA6_pipeline.getEX_ALU_stage();
  ret_strs << "," << CVA6_pipeline.getEX_BU_stage();
  ret_strs << "," << CVA6_pipeline.getEX_MUL_I_stage();
  ret_strs << "," << CVA6_pipeline.getEX_MUL_O_stage();
  ret_strs << "," << CVA6_pipeline.getEX_DIV_stage();
  ret_strs << "," << CVA6_pipeline.getEX_LU_ctrl_stage();
  ret_strs << "," << CVA6_pipeline.getEX_LU_cache_stage();
  ret_strs << "," << CVA6_pipeline.getEX_LU_unit_stage();
  ret_strs << "," << CVA6_pipeline.getEX_SU_ctrl_stage();
  ret_strs << "," << CVA6_pipeline.getEX_SU_unit_stage();
  ret_strs << "," << CVA6_pipeline.getCOM_stage();

  return ret_strs.str();
}
