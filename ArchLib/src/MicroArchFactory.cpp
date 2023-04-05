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

#include "MicroArchFactory.h" 

#include "Components/Model.h"

#include "SimpleRISCV_H_fw_DynBrPred_Model.h"
#include "CV32E40P_Model.h"
#include "CVA6_Model.h"

int MicroArchFactory::getMicroArchHandle(std::string uArch_)
{
    if(uArch_ == "SimpleRISCV_H_fw_DynBrPred")
    {
        return SimpleRISCV_H_fw_DynBrPred;
    }
    if(uArch_ == "CV32E40P")
    {
        return CV32E40P;
    }
    if(uArch_ == "CVA6")
    {
        return CVA6;
    }
    return -1;
}

PerformanceModel* MicroArchFactory::getPerformanceModel(int uArch_)
{
  switch((uArchId_t)uArch_)
  {
    case SimpleRISCV_H_fw_DynBrPred: return new SimpleRISCV_H_fw_DynBrPred_Model();
    case CV32E40P: return new CV32E40P_Model();
    case CVA6: return new CVA6_Model();
    default: return nullptr;
  }
}
