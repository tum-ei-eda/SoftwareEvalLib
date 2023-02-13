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

#include <algorithm>

#include "Components/Model.h"

#include "CV32E40P_Model.h"

InstructionModelSet* CV32E40P_InstrModelSet = new InstructionModelSet("CV32E40P_InstrModelSet");

static InstructionModel *instrModel_add = new InstructionModel(
  CV32E40P_InstrModelSet,
  "add",
  0,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_sub = new InstructionModel(
  CV32E40P_InstrModelSet,
  "sub",
  1,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_xor = new InstructionModel(
  CV32E40P_InstrModelSet,
  "xor",
  2,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_or = new InstructionModel(
  CV32E40P_InstrModelSet,
  "or",
  3,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_and = new InstructionModel(
  CV32E40P_InstrModelSet,
  "and",
  4,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_slt = new InstructionModel(
  CV32E40P_InstrModelSet,
  "slt",
  5,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_sltu = new InstructionModel(
  CV32E40P_InstrModelSet,
  "sltu",
  6,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_sll = new InstructionModel(
  CV32E40P_InstrModelSet,
  "sll",
  7,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_srl = new InstructionModel(
  CV32E40P_InstrModelSet,
  "srl",
  8,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_sra = new InstructionModel(
  CV32E40P_InstrModelSet,
  "sra",
  9,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_addi = new InstructionModel(
  CV32E40P_InstrModelSet,
  "addi",
  10,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_xori = new InstructionModel(
  CV32E40P_InstrModelSet,
  "xori",
  11,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_ori = new InstructionModel(
  CV32E40P_InstrModelSet,
  "ori",
  12,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_andi = new InstructionModel(
  CV32E40P_InstrModelSet,
  "andi",
  13,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_slti = new InstructionModel(
  CV32E40P_InstrModelSet,
  "slti",
  14,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_sltiu = new InstructionModel(
  CV32E40P_InstrModelSet,
  "sltiu",
  15,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_slli = new InstructionModel(
  CV32E40P_InstrModelSet,
  "slli",
  16,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_srli = new InstructionModel(
  CV32E40P_InstrModelSet,
  "srli",
  17,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_srai = new InstructionModel(
  CV32E40P_InstrModelSet,
  "srai",
  18,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_auipc = new InstructionModel(
  CV32E40P_InstrModelSet,
  "auipc",
  19,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = std::max({n_1, n_12});
  int n_14;
perfModel->CV32E40P_pipeline.setID_stage(n_13);
n_14 = n_13;
  int n_15;
n_15 = n_14 + 1;
  int n_16;
perfModel->regModel.setXd(n_15);
n_16 = n_15;
  int n_17;
n_17 = std::max({n_0, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setEX_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->CV32E40P_pipeline.setWB_stage(n_19);
n_20 = n_19;
  }
);

static InstructionModel *instrModel_lui = new InstructionModel(
  CV32E40P_InstrModelSet,
  "lui",
  20,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = std::max({n_1, n_12});
  int n_14;
perfModel->CV32E40P_pipeline.setID_stage(n_13);
n_14 = n_13;
  int n_15;
n_15 = n_14 + 1;
  int n_16;
perfModel->regModel.setXd(n_15);
n_16 = n_15;
  int n_17;
n_17 = std::max({n_0, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setEX_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->CV32E40P_pipeline.setWB_stage(n_19);
n_20 = n_19;
  }
);

static InstructionModel *instrModel_mul = new InstructionModel(
  CV32E40P_InstrModelSet,
  "mul",
  21,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_mulh = new InstructionModel(
  CV32E40P_InstrModelSet,
  "mulh",
  22,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 5;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_mulhu = new InstructionModel(
  CV32E40P_InstrModelSet,
  "mulhu",
  23,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 5;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_mulhsu = new InstructionModel(
  CV32E40P_InstrModelSet,
  "mulhsu",
  24,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 5;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_div = new InstructionModel(
  CV32E40P_InstrModelSet,
  "div",
  25,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 10;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_divu = new InstructionModel(
  CV32E40P_InstrModelSet,
  "divu",
  26,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 10;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_rem = new InstructionModel(
  CV32E40P_InstrModelSet,
  "rem",
  27,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 10;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_remu = new InstructionModel(
  CV32E40P_InstrModelSet,
  "remu",
  28,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 10;
  int n_20;
perfModel->regModel.setXd(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_csrrw = new InstructionModel(
  CV32E40P_InstrModelSet,
  "csrrw",
  29,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_csrrs = new InstructionModel(
  CV32E40P_InstrModelSet,
  "csrrs",
  30,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_csrrc = new InstructionModel(
  CV32E40P_InstrModelSet,
  "csrrc",
  31,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
perfModel->regModel.setXd(n_17);
n_18 = n_17;
  int n_19;
n_19 = std::max({n_0, n_18});
  int n_20;
perfModel->CV32E40P_pipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + 1;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_csrrwi = new InstructionModel(
  CV32E40P_InstrModelSet,
  "csrrwi",
  32,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = std::max({n_1, n_12});
  int n_14;
perfModel->CV32E40P_pipeline.setID_stage(n_13);
n_14 = n_13;
  int n_15;
n_15 = n_14 + 1;
  int n_16;
perfModel->regModel.setXd(n_15);
n_16 = n_15;
  int n_17;
n_17 = std::max({n_0, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setEX_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->CV32E40P_pipeline.setWB_stage(n_19);
n_20 = n_19;
  }
);

static InstructionModel *instrModel_csrrsi = new InstructionModel(
  CV32E40P_InstrModelSet,
  "csrrsi",
  33,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = std::max({n_1, n_12});
  int n_14;
perfModel->CV32E40P_pipeline.setID_stage(n_13);
n_14 = n_13;
  int n_15;
n_15 = n_14 + 1;
  int n_16;
perfModel->regModel.setXd(n_15);
n_16 = n_15;
  int n_17;
n_17 = std::max({n_0, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setEX_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->CV32E40P_pipeline.setWB_stage(n_19);
n_20 = n_19;
  }
);

static InstructionModel *instrModel_csrrci = new InstructionModel(
  CV32E40P_InstrModelSet,
  "csrrci",
  34,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = std::max({n_1, n_12});
  int n_14;
perfModel->CV32E40P_pipeline.setID_stage(n_13);
n_14 = n_13;
  int n_15;
n_15 = n_14 + 1;
  int n_16;
perfModel->regModel.setXd(n_15);
n_16 = n_15;
  int n_17;
n_17 = std::max({n_0, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setEX_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->CV32E40P_pipeline.setWB_stage(n_19);
n_20 = n_19;
  }
);

static InstructionModel *instrModel_sb = new InstructionModel(
  CV32E40P_InstrModelSet,
  "sb",
  35,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
n_20 = std::max({n_0, n_19});
  int n_21;
perfModel->CV32E40P_pipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
perfModel->CV32E40P_pipeline.setWB_stage(n_22);
n_23 = n_22;
  }
);

static InstructionModel *instrModel_sh = new InstructionModel(
  CV32E40P_InstrModelSet,
  "sh",
  36,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
n_20 = std::max({n_0, n_19});
  int n_21;
perfModel->CV32E40P_pipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
perfModel->CV32E40P_pipeline.setWB_stage(n_22);
n_23 = n_22;
  }
);

static InstructionModel *instrModel_sw = new InstructionModel(
  CV32E40P_InstrModelSet,
  "sw",
  37,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
n_20 = std::max({n_0, n_19});
  int n_21;
perfModel->CV32E40P_pipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
perfModel->CV32E40P_pipeline.setWB_stage(n_22);
n_23 = n_22;
  }
);

static InstructionModel *instrModel_lw = new InstructionModel(
  CV32E40P_InstrModelSet,
  "lw",
  38,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
n_18 = std::max({n_0, n_17});
  int n_19;
perfModel->CV32E40P_pipeline.setEX_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_lh = new InstructionModel(
  CV32E40P_InstrModelSet,
  "lh",
  39,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
n_18 = std::max({n_0, n_17});
  int n_19;
perfModel->CV32E40P_pipeline.setEX_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_lhu = new InstructionModel(
  CV32E40P_InstrModelSet,
  "lhu",
  40,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
n_18 = std::max({n_0, n_17});
  int n_19;
perfModel->CV32E40P_pipeline.setEX_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_lb = new InstructionModel(
  CV32E40P_InstrModelSet,
  "lb",
  41,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
n_18 = std::max({n_0, n_17});
  int n_19;
perfModel->CV32E40P_pipeline.setEX_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_lbu = new InstructionModel(
  CV32E40P_InstrModelSet,
  "lbu",
  42,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = std::max({n_1, n_12, n_14});
  int n_16;
perfModel->CV32E40P_pipeline.setID_stage(n_15);
n_16 = n_15;
  int n_17;
n_17 = n_16 + 1;
  int n_18;
n_18 = std::max({n_0, n_17});
  int n_19;
perfModel->CV32E40P_pipeline.setEX_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
perfModel->CV32E40P_pipeline.setWB_stage(n_21);
n_22 = n_21;
  }
);

static InstructionModel *instrModel_beq = new InstructionModel(
  CV32E40P_InstrModelSet,
  "beq",
  43,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->staBranchPredModel.setPc_np(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_bne = new InstructionModel(
  CV32E40P_InstrModelSet,
  "bne",
  44,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->staBranchPredModel.setPc_np(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_blt = new InstructionModel(
  CV32E40P_InstrModelSet,
  "blt",
  45,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->staBranchPredModel.setPc_np(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_bge = new InstructionModel(
  CV32E40P_InstrModelSet,
  "bge",
  46,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->staBranchPredModel.setPc_np(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_bltu = new InstructionModel(
  CV32E40P_InstrModelSet,
  "bltu",
  47,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->staBranchPredModel.setPc_np(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_bgeu = new InstructionModel(
  CV32E40P_InstrModelSet,
  "bgeu",
  48,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = perfModel->regModel.getXa();
  int n_14;
n_14 = std::max({n_13, n_11});
  int n_15;
n_15 = perfModel->regModel.getXb();
  int n_16;
n_16 = std::max({n_15, n_11});
  int n_17;
n_17 = std::max({n_1, n_12, n_14, n_16});
  int n_18;
perfModel->CV32E40P_pipeline.setID_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
perfModel->staBranchPredModel.setPc_np(n_19);
n_20 = n_19;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->CV32E40P_pipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->CV32E40P_pipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel__def = new InstructionModel(
  CV32E40P_InstrModelSet,
  "_def",
  49,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 1;
  int n_13;
n_13 = std::max({n_1, n_12});
  int n_14;
perfModel->CV32E40P_pipeline.setID_stage(n_13);
n_14 = n_13;
  int n_15;
n_15 = n_14 + 1;
  int n_16;
n_16 = std::max({n_0, n_15});
  int n_17;
perfModel->CV32E40P_pipeline.setEX_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->CV32E40P_pipeline.setWB_stage(n_18);
n_19 = n_18;
  }
);

static InstructionModel *instrModel_jal = new InstructionModel(
  CV32E40P_InstrModelSet,
  "jal",
  50,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_3;
n_3 = perfModel->staBranchPredModel.getPc();
  int n_4;
n_4 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_5;
n_5 = std::max({n_3, n_4});
  int n_6;
n_6 = n_5 + 1;
  int n_7;
n_7 = std::max({n_3, n_4});
  int n_8;
n_8 = n_7 + 1;
  int n_9;
perfModel->staBranchPredModel.setPc_p(n_8);
n_9 = n_8;
  int n_10;
n_10 = std::max({n_2, n_6, n_9});
  int n_11;
perfModel->CV32E40P_pipeline.setIF_stage(n_10);
n_11 = n_10;
  int n_12;
n_12 = n_11 + 2;
  int n_13;
perfModel->staBranchPredModel.setPc_np(n_12);
n_13 = n_12;
  int n_14;
n_14 = std::max({n_1, n_13});
  int n_15;
perfModel->CV32E40P_pipeline.setID_stage(n_14);
n_15 = n_14;
  int n_16;
n_16 = n_15 + 1;
  int n_17;
perfModel->regModel.setXd(n_16);
n_17 = n_16;
  int n_18;
n_18 = std::max({n_0, n_17});
  int n_19;
perfModel->CV32E40P_pipeline.setEX_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->CV32E40P_pipeline.setWB_stage(n_20);
n_21 = n_20;
  }
);

static InstructionModel *instrModel_jalr = new InstructionModel(
  CV32E40P_InstrModelSet,
  "jalr",
  51,
  [](PerformanceModel* perfModel_){
  CV32E40P_Model* perfModel = static_cast<CV32E40P_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->CV32E40P_pipeline.getWB_stage();
  int n_1;
n_1 = perfModel->CV32E40P_pipeline.getEX_stage();
  int n_2;
n_2 = perfModel->regModel.getXa();
  int n_3;
n_3 = perfModel->CV32E40P_pipeline.getID_stage();
  int n_4;
n_4 = perfModel->staBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->CV32E40P_pipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + 1;
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->staBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->CV32E40P_pipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = std::max({n_2, n_12});
  int n_14;
n_14 = n_13 + 2;
  int n_15;
perfModel->staBranchPredModel.setPc_np(n_14);
n_15 = n_14;
  int n_16;
n_16 = std::max({n_1, n_15});
  int n_17;
perfModel->CV32E40P_pipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->regModel.setXd(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_0, n_19});
  int n_21;
perfModel->CV32E40P_pipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
perfModel->CV32E40P_pipeline.setWB_stage(n_22);
n_23 = n_22;
  }
);

