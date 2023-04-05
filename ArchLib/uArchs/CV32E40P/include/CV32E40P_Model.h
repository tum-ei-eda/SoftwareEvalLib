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

#ifndef CV32E40P_MODEL_H
#define CV32E40P_MODEL_H

#include <stdbool.h>
#include <string>

#include "Components/Model.h"
#include "Components/Channel.h"

#include "Models/general/StandardRegisterModel.h"
#include "Models/general/StaticBranchPredictModel.h"

class CV32E40P_pipeline_Model
{
public:
  CV32E40P_pipeline_Model(){};

  stage stages[4] = { 
     stage("IF_stage") 
    ,stage("ID_stage")
    ,stage("EX_stage")
    ,stage("WB_stage")
  };

  void setIF_stage(int c) { stages[0].cnt = c; };
  int getIF_stage(void) { return stages[0].cnt; };
  
  void setID_stage(int c) { stages[1].cnt = c; };
  int getID_stage(void) { return stages[1].cnt; };
  
  void setEX_stage(int c) { stages[2].cnt = c; };
  int getEX_stage(void) { return stages[2].cnt; };
  
  void setWB_stage(int c) { stages[3].cnt = c; };
  int getWB_stage(void) { return stages[3].cnt; };

  int getCycleCount(void) { return stages[3].cnt; };
  
};


extern InstructionModelSet* CV32E40P_InstrModelSet;

class CV32E40P_Model : public PerformanceModel
{
public:

  CV32E40P_Model() : PerformanceModel("CV32E40P", CV32E40P_InstrModelSet)
    ,CV32E40P_pipeline()
    ,regModel(this)
    ,staBranchPredModel(this)
  {};

  CV32E40P_pipeline_Model CV32E40P_pipeline;


  StandardRegisterModel regModel;
  StaticBranchPredictModel staBranchPredModel;

  virtual void connectChannel(Channel*);
  virtual int getCycleCount(void){ return CV32E40P_pipeline.getCycleCount(); };
  virtual std::string getPipelineStream(void);

};

#endif // CV32E40P_MODEL_H
