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

#ifndef CVA6_MODEL_H
#define CVA6_MODEL_H

#include <stdbool.h>
#include <string>

#include "Components/Model.h"
#include "Components/Channel.h"

#include "StandardRegisterModel.h"
#include "StaticBranchPredictModel.h"

class CVA6_pipeline_Model
{
public:
  CVA6_pipeline_Model(){};

  stage stages[16] = { 
     stage("PCGEN_stage") 
    ,stage("IF_cache_stage")
    ,stage("IF_scan_stage")
    ,stage("ID_stage")
    ,stage("IS_stage")
    ,stage("EX_ALU_stage")
    ,stage("EX_BU_stage")
    ,stage("EX_MUL_I_stage")
    ,stage("EX_MUL_O_stage")
    ,stage("EX_DIV_stage")
    ,stage("EX_LU_ctrl_stage")
    ,stage("EX_LU_cache_stage")
    ,stage("EX_LU_unit_stage")
    ,stage("EX_SU_ctrl_stage")
    ,stage("EX_SU_unit_stage")
    ,stage("EX_COM_stage")
  };

  void setPCGEN_stage(int c) { stages[0].cnt = c; };
  int getPCGEN_stage(void) { return stages[0].cnt; };
  
  void setIF_cache_stage(int c) { stages[1].cnt = c; };
  int getIF_cache_stage(void) { return stages[1].cnt; };
  
  void setIF_scan_stage(int c) { stages[2].cnt = c; };
  int getIF_scan_stage(void) { return stages[2].cnt; };
  
  void setID_stage(int c) { stages[3].cnt = c; };
  int getID_stage(void) { return stages[3].cnt; };

  void setIS_stage(int c) { stages[4].cnt = c; };
  int getIS_stage(void) { return stages[4].cnt; };

  void setEX_ALU_stage(int c) { stages[5].cnt = c; };
  int getEX_ALU_stage(void) { return stages[5].cnt; };

  void setEX_BU_stage(int c) { stages[6].cnt = c; };
  int getEX_BU_stage(void) { return stages[6].cnt; };

  void setEX_MUL_I_stage(int c) { stages[7].cnt = c; };
  int getEX_MUL_I_stage(void) { return stages[7].cnt; };

  void setEX_MUL_O_stage(int c) { stages[8].cnt = c; };
  int getEX_MUL_O_stage(void) { return stages[8].cnt; };

  void setEX_DIV_stage(int c) { stages[9].cnt = c; };
  int getEX_DIV_stage(void) { return stages[9].cnt; };

  void setEX_LU_ctrl_stage(int c) { stages[10].cnt = c; };
  int getEX_LU_ctrl_stage(void) { return stages[10].cnt; };

  void setEX_LU_cache_stage(int c) { stages[11].cnt = c; };
  int getEX_LU_cache_stage(void) { return stages[11].cnt; };

  void setEX_LU_unit_stage(int c) { stages[12].cnt = c; };
  int getEX_LU_unit_stage(void) { return stages[12].cnt; };

  void setEX_SU_ctrl_stage(int c) { stages[13].cnt = c; };
  int getEX_SU_ctrl_stage(void) { return stages[13].cnt; };

  void setEX_SU_unit_stage(int c) { stages[14].cnt = c; };
  int getEX_SU_unit_stage(void) { return stages[14].cnt; };

  void setCOM_stage(int c) { stages[15].cnt = c; };
  int getCOM_stage(void) { return stages[15].cnt; };
  
  int getCycleCount(void) { return stages[15].cnt; };
  
};


extern InstructionModelSet* CVA6_InstrModelSet;

class CVA6_Model : public PerformanceModel
{
public:

  CVA6_Model() : PerformanceModel("CVA6", CVA6_InstrModelSet)
    ,CVA6_pipeline()
    ,regModel(this)
    ,staBranchPredModel(this)
  {};

  CVA6_pipeline_Model CVA6_pipeline;


  StandardRegisterModel regModel;
  StaticBranchPredictModel staBranchPredModel;

  virtual void connectChannel(Channel*);
  virtual int getCycleCount(void){ return CVA6_pipeline.getCycleCount(); };
  virtual std::string getPipelineStream(void);

};

#endif // CVA6_MODEL_H
