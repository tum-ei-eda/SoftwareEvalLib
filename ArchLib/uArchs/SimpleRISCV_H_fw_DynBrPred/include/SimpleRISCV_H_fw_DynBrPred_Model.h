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

#ifndef SIMPLERISCV_H_FW_DYNBRPRED_MODEL_H
#define SIMPLERISCV_H_FW_DYNBRPRED_MODEL_H

#include <stdbool.h>
#include <string>

#include "Components/Model.h"
#include "Components/Channel.h"

#include "DummyMemoryModel.h"
#include "DummyMemoryModel.h"
#include "DynamicBranchPredictModel.h"
#include "StandardRegisterModel.h"

class SimplePipeline_Model
{
public:
  SimplePipeline_Model(){};

  stage stages[5] = { 
     stage("IF_stage") 
    ,stage("ID_stage")
    ,stage("EX_stage")
    ,stage("MEM_stage")
    ,stage("WB_stage")
  };

  void setIF_stage(int c) { stages[0].cnt = c; };
  int getIF_stage(void) { return stages[0].cnt; };
  
  void setID_stage(int c) { stages[1].cnt = c; };
  int getID_stage(void) { return stages[1].cnt; };
  
  void setEX_stage(int c) { stages[2].cnt = c; };
  int getEX_stage(void) { return stages[2].cnt; };
  
  void setMEM_stage(int c) { stages[3].cnt = c; };
  int getMEM_stage(void) { return stages[3].cnt; };
  
  void setWB_stage(int c) { stages[4].cnt = c; };
  int getWB_stage(void) { return stages[4].cnt; };

  int getCycleCount(void) { return stages[4].cnt; };
  
};


extern InstructionModelSet* SimpleRISCV_H_fw_DynBrPred_InstrModelSet;

class SimpleRISCV_H_fw_DynBrPred_Model : public PerformanceModel
{
public:

  SimpleRISCV_H_fw_DynBrPred_Model() : PerformanceModel("SimpleRISCV_H_fw_DynBrPred", SimpleRISCV_H_fw_DynBrPred_InstrModelSet)
    ,SimplePipeline()
    ,iMemModel(this)
    ,dMemModel(this)
    ,dynBranchPredModel(this)
    ,regModel(this)
  {};

  SimplePipeline_Model SimplePipeline;

  DummyMemoryModel iMemModel;
  DummyMemoryModel dMemModel;

  DynamicBranchPredictModel dynBranchPredModel;
  StandardRegisterModel regModel;

  virtual void connectChannel(Channel*);
  virtual int getCycleCount(void){ return SimplePipeline.getCycleCount(); };
  virtual std::string getPipelineStream(void);

};

#endif // SIMPLERISCV_H_FW_DYNBRPRED_MODEL_H