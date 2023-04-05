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

#include "Models/general/StaticBranchPredictModel.h"

void StaticBranchPredictModel::setPc_p(int pc_p_)
{
  pc_p = pc_p_;
}

void StaticBranchPredictModel::setPc_np(int pc_np_)
{
  pc_np = pc_np_;
  branchInstr = true;
  branchTarget = brTarget_ptr[getInstrIndex()];
}

int StaticBranchPredictModel::getPc(void)
{
  if(!branchInstr)
  {
    return pc_p;
  }
  else
  {
    branchInstr = false;
    // Always predict branch-not-taken
    if(pc_ptr[getInstrIndex()] == branchTarget)
    {
      return pc_np;
    }
    else
    {
      return pc_p;
    }
  }
}
