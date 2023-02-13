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

#include "SimpleRISCV_H_fw_DynBrPred_Model.h"

InstructionModelSet* SimpleRISCV_H_fw_DynBrPred_InstrModelSet = new InstructionModelSet("SimpleRISCV_H_fw_DynBrPred_InstrModelSet");

static InstructionModel *instrModel_add = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "add",
  0,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_sub = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "sub",
  1,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_sll = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "sll",
  2,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_xor = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "xor",
  3,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_or = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "or",
  4,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_and = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "and",
  5,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_cadd = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "cadd",
  6,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_mul = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "mul",
  7,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_rem = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "rem",
  8,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->regModel.setXd(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_addi = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "addi",
  9,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->regModel.setXd(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_1, n_19});
  int n_21;
perfModel->SimplePipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_sltiu = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "sltiu",
  10,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->regModel.setXd(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_1, n_19});
  int n_21;
perfModel->SimplePipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_xori = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "xori",
  11,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->regModel.setXd(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_1, n_19});
  int n_21;
perfModel->SimplePipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_ori = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "ori",
  12,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->regModel.setXd(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_1, n_19});
  int n_21;
perfModel->SimplePipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_andi = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "andi",
  13,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->regModel.setXd(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_1, n_19});
  int n_21;
perfModel->SimplePipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_caddi = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "caddi",
  14,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->regModel.setXd(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_1, n_19});
  int n_21;
perfModel->SimplePipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_cslli = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "cslli",
  15,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->regModel.setXd(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_1, n_19});
  int n_21;
perfModel->SimplePipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_caddi16sp = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "caddi16sp",
  16,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->regModel.setXd(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_1, n_19});
  int n_21;
perfModel->SimplePipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_cmv = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "cmv",
  17,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXb();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->regModel.setXd(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_1, n_19});
  int n_21;
perfModel->SimplePipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_cli = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "cli",
  18,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = std::max({n_2, n_13});
  int n_15;
perfModel->SimplePipeline.setID_stage(n_14);
n_15 = n_14;
  int n_16;
n_16 = n_15 + 1;
  int n_17;
perfModel->regModel.setXd(n_16);
n_17 = n_16;
  int n_18;
n_18 = std::max({n_1, n_17});
  int n_19;
perfModel->SimplePipeline.setEX_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
n_21 = std::max({n_0, n_20});
  int n_22;
perfModel->SimplePipeline.setMEM_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + 1;
  int n_24;
perfModel->SimplePipeline.setWB_stage(n_23);
n_24 = n_23;
  }
);

static InstructionModel *instrModel_sb = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "sb",
  19,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
n_21 = std::max({n_1, n_20});
  int n_22;
perfModel->SimplePipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + perfModel->dMemModel.getDelay();
  int n_24;
n_24 = std::max({n_0, n_23});
  int n_25;
perfModel->SimplePipeline.setMEM_stage(n_24);
n_25 = n_24;
  int n_26;
n_26 = n_25 + 1;
  int n_27;
perfModel->SimplePipeline.setWB_stage(n_26);
n_27 = n_26;
  }
);

static InstructionModel *instrModel_sh = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "sh",
  20,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
n_21 = std::max({n_1, n_20});
  int n_22;
perfModel->SimplePipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + perfModel->dMemModel.getDelay();
  int n_24;
n_24 = std::max({n_0, n_23});
  int n_25;
perfModel->SimplePipeline.setMEM_stage(n_24);
n_25 = n_24;
  int n_26;
n_26 = n_25 + 1;
  int n_27;
perfModel->SimplePipeline.setWB_stage(n_26);
n_27 = n_26;
  }
);

static InstructionModel *instrModel_sw = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "sw",
  21,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
n_21 = std::max({n_1, n_20});
  int n_22;
perfModel->SimplePipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + perfModel->dMemModel.getDelay();
  int n_24;
n_24 = std::max({n_0, n_23});
  int n_25;
perfModel->SimplePipeline.setMEM_stage(n_24);
n_25 = n_24;
  int n_26;
n_26 = n_25 + 1;
  int n_27;
perfModel->SimplePipeline.setWB_stage(n_26);
n_27 = n_26;
  }
);

static InstructionModel *instrModel_csw = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "csw",
  22,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
n_21 = std::max({n_1, n_20});
  int n_22;
perfModel->SimplePipeline.setEX_stage(n_21);
n_22 = n_21;
  int n_23;
n_23 = n_22 + perfModel->dMemModel.getDelay();
  int n_24;
n_24 = std::max({n_0, n_23});
  int n_25;
perfModel->SimplePipeline.setMEM_stage(n_24);
n_25 = n_24;
  int n_26;
n_26 = n_25 + 1;
  int n_27;
perfModel->SimplePipeline.setWB_stage(n_26);
n_27 = n_26;
  }
);

static InstructionModel *instrModel_lh = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "lh",
  23,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
n_19 = std::max({n_1, n_18});
  int n_20;
perfModel->SimplePipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + perfModel->dMemModel.getDelay();
  int n_22;
perfModel->regModel.setXd(n_21);
n_22 = n_21;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_lw = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "lw",
  24,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
n_19 = std::max({n_1, n_18});
  int n_20;
perfModel->SimplePipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + perfModel->dMemModel.getDelay();
  int n_22;
perfModel->regModel.setXd(n_21);
n_22 = n_21;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_lbu = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "lbu",
  25,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
n_19 = std::max({n_1, n_18});
  int n_20;
perfModel->SimplePipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + perfModel->dMemModel.getDelay();
  int n_22;
perfModel->regModel.setXd(n_21);
n_22 = n_21;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_lhu = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "lhu",
  26,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
n_19 = std::max({n_1, n_18});
  int n_20;
perfModel->SimplePipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + perfModel->dMemModel.getDelay();
  int n_22;
perfModel->regModel.setXd(n_21);
n_22 = n_21;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_clw = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "clw",
  27,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
n_19 = std::max({n_1, n_18});
  int n_20;
perfModel->SimplePipeline.setEX_stage(n_19);
n_20 = n_19;
  int n_21;
n_21 = n_20 + perfModel->dMemModel.getDelay();
  int n_22;
perfModel->regModel.setXd(n_21);
n_22 = n_21;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_beq = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "beq",
  28,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->dynBranchPredModel.setPc_np(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_bne = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "bne",
  29,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->dynBranchPredModel.setPc_np(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_blt = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "blt",
  30,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->dynBranchPredModel.setPc_np(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_bge = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "bge",
  31,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->dynBranchPredModel.setPc_np(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_bltu = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "bltu",
  32,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->dynBranchPredModel.setPc_np(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_bgeu = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "bgeu",
  33,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = perfModel->regModel.getXb();
  int n_17;
n_17 = std::max({n_16, n_12});
  int n_18;
n_18 = std::max({n_2, n_13, n_15, n_17});
  int n_19;
perfModel->SimplePipeline.setID_stage(n_18);
n_19 = n_18;
  int n_20;
n_20 = n_19 + 1;
  int n_21;
perfModel->dynBranchPredModel.setPc_np(n_20);
n_21 = n_20;
  int n_22;
n_22 = std::max({n_1, n_21});
  int n_23;
perfModel->SimplePipeline.setEX_stage(n_22);
n_23 = n_22;
  int n_24;
n_24 = n_23 + 1;
  int n_25;
n_25 = std::max({n_0, n_24});
  int n_26;
perfModel->SimplePipeline.setMEM_stage(n_25);
n_26 = n_25;
  int n_27;
n_27 = n_26 + 1;
  int n_28;
perfModel->SimplePipeline.setWB_stage(n_27);
n_28 = n_27;
  }
);

static InstructionModel *instrModel_cbeqz = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "cbeqz",
  34,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->dynBranchPredModel.setPc_np(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_1, n_19});
  int n_21;
perfModel->SimplePipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel_cbnez = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "cbnez",
  35,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = perfModel->regModel.getXa();
  int n_15;
n_15 = std::max({n_14, n_12});
  int n_16;
n_16 = std::max({n_2, n_13, n_15});
  int n_17;
perfModel->SimplePipeline.setID_stage(n_16);
n_17 = n_16;
  int n_18;
n_18 = n_17 + 1;
  int n_19;
perfModel->dynBranchPredModel.setPc_np(n_18);
n_19 = n_18;
  int n_20;
n_20 = std::max({n_1, n_19});
  int n_21;
perfModel->SimplePipeline.setEX_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
n_23 = std::max({n_0, n_22});
  int n_24;
perfModel->SimplePipeline.setMEM_stage(n_23);
n_24 = n_23;
  int n_25;
n_25 = n_24 + 1;
  int n_26;
perfModel->SimplePipeline.setWB_stage(n_25);
n_26 = n_25;
  }
);

static InstructionModel *instrModel__def = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "_def",
  36,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = std::max({n_2, n_13});
  int n_15;
perfModel->SimplePipeline.setID_stage(n_14);
n_15 = n_14;
  int n_16;
n_16 = n_15 + 1;
  int n_17;
n_17 = std::max({n_1, n_16});
  int n_18;
perfModel->SimplePipeline.setEX_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
n_20 = std::max({n_0, n_19});
  int n_21;
perfModel->SimplePipeline.setMEM_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
perfModel->SimplePipeline.setWB_stage(n_22);
n_23 = n_22;
  }
);

static InstructionModel *instrModel_lb = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "lb",
  37,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = std::max({n_2, n_13});
  int n_15;
perfModel->SimplePipeline.setID_stage(n_14);
n_15 = n_14;
  int n_16;
n_16 = n_15 + 1;
  int n_17;
n_17 = std::max({n_1, n_16});
  int n_18;
perfModel->SimplePipeline.setEX_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
n_20 = std::max({n_0, n_19});
  int n_21;
perfModel->SimplePipeline.setMEM_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
perfModel->SimplePipeline.setWB_stage(n_22);
n_23 = n_22;
  }
);

static InstructionModel *instrModel_slti = new InstructionModel(
  SimpleRISCV_H_fw_DynBrPred_InstrModelSet,
  "slti",
  38,
  [](PerformanceModel* perfModel_){
  SimpleRISCV_H_fw_DynBrPred_Model* perfModel = static_cast<SimpleRISCV_H_fw_DynBrPred_Model*>(perfModel_);
  int n_0;
n_0 = perfModel->SimplePipeline.getWB_stage();
  int n_1;
n_1 = perfModel->SimplePipeline.getMEM_stage();
  int n_2;
n_2 = perfModel->SimplePipeline.getEX_stage();
  int n_3;
n_3 = perfModel->SimplePipeline.getID_stage();
  int n_4;
n_4 = perfModel->dynBranchPredModel.getPc();
  int n_5;
n_5 = perfModel->SimplePipeline.getIF_stage();
  int n_6;
n_6 = std::max({n_4, n_5});
  int n_7;
n_7 = n_6 + perfModel->iMemModel.getDelay();
  int n_8;
n_8 = std::max({n_4, n_5});
  int n_9;
n_9 = n_8 + 1;
  int n_10;
perfModel->dynBranchPredModel.setPc_p(n_9);
n_10 = n_9;
  int n_11;
n_11 = std::max({n_3, n_7, n_10});
  int n_12;
perfModel->SimplePipeline.setIF_stage(n_11);
n_12 = n_11;
  int n_13;
n_13 = n_12 + 1;
  int n_14;
n_14 = std::max({n_2, n_13});
  int n_15;
perfModel->SimplePipeline.setID_stage(n_14);
n_15 = n_14;
  int n_16;
n_16 = n_15 + 1;
  int n_17;
n_17 = std::max({n_1, n_16});
  int n_18;
perfModel->SimplePipeline.setEX_stage(n_17);
n_18 = n_17;
  int n_19;
n_19 = n_18 + 1;
  int n_20;
n_20 = std::max({n_0, n_19});
  int n_21;
perfModel->SimplePipeline.setMEM_stage(n_20);
n_21 = n_20;
  int n_22;
n_22 = n_21 + 1;
  int n_23;
perfModel->SimplePipeline.setWB_stage(n_22);
n_23 = n_22;
  }
);

