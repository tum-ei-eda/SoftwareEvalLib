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

/********************* HAND-WRITTEN TRY-OUT *********************/

#include <algorithm>

#include "Components/Model.h"

#include "CVA6_Model.h"

#define PE_TIMEFUNC_CALL [](PerformanceModel* perfModel_)

#define PE_TIMEFUNC_INIT CVA6_Model* perfModel = static_cast<CVA6_Model*>(perfModel_);

// -- PCGEN-Stage

// TODO: n_pcgen_1 = max(st_pcgen, PC)
#define PE_TIMEFUNC_PCGEN int st_pcgen, n_pcgen_1, n_pcgen_2, f_pcgen;\
  st_pcgen = perfModel->CVA6_pipeline.getPCGEN_stage();\
  n_pcgen_1 = st_pcgen;\
  n_pcgen_2 = std::max({st_pcgen, perfModel->iCCtrlModel.getIC_c()}) + 1;\
  f_pcgen = std::max({n_pcgen_1, n_pcgen_2, perfModel->CVA6_pipeline.getIF_cache_stage()});\
  perfModel->CVA6_pipeline.setPCGEN_stage(f_pcgen);

// -- IF-stage

// TODO: PC_p2 = n_if_2
#define PE_TIMEFUNC_IF int st_if, n_if_1, if_cache, n_if_2, f_if;\
  st_if = f_pcgen;\
  n_if_1 = st_if + perfModel->iCModel.getDelay();\
  perfModel->iCCtrlModel.setIC_b(n_if_1);\
  if_cache = std::max({n_if_1, perfModel->CVA6_pipeline.getIF_scan_stage()});\
  perfModel->CVA6_pipeline.setIF_cache_stage(if_cache);\
  n_if_2 = if_cache + 1;\
  f_if = std::max({n_if_2, perfModel->CVA6_pipeline.getID_stage()});\
  perfModel->CVA6_pipeline.setIF_scan_stage(f_if);

// -- ID-stage

#define PE_TIMEFUNC_ID int st_id, n_id_1, f_id;\
  st_id = f_if;\
  n_id_1 = st_id + 1;\
  f_id = std::max({n_id_1, perfModel->CVA6_pipeline.getIS_stage()});\
  perfModel->CVA6_pipeline.setID_stage(f_id);

// -- IS-stage

#define PE_TIMEFUNC_IS_COMMON_START int st_is, n_is_1, f_is;\
  st_is = f_id;\
  n_is_1 = st_is + 1;

#define PE_TIMEFUNC_IS_COMMON_END perfModel->CVA6_pipeline.setIS_stage(f_is);

// TODO: Add Mul_c, Div_c connector!
#define PE_TIMEFUNC_IS_DEF PE_TIMEFUNC_IS_COMMON_START\
  f_is = std::max({n_is_1, perfModel->CVA6_pipeline.getEX_ALU_stage()});\
  PE_TIMEFUNC_IS_COMMON_END

// TODO: Add Mul_c, Div_c & R_d_c connector!
#define PE_TIMEFUNC_IS_ARITH_0 PE_TIMEFUNC_IS_COMMON_START\
  f_is = std::max({n_is_1, perfModel->CVA6_pipeline.getEX_ALU_stage()});\
  PE_TIMEFUNC_IS_COMMON_END

// TODO: Add Mul_c, Div_c & R_d_c connector!
#define PE_TIMEFUNC_IS_ARITH_S1 PE_TIMEFUNC_IS_COMMON_START\
  f_is = std::max({n_is_1, perfModel->CVA6_pipeline.getEX_ALU_stage(), perfModel->regModel.getXa()});\
  PE_TIMEFUNC_IS_COMMON_END

//// TODO: Add Mul_c, Div_c & R_d_c connector!
//#define PE_TIMEFUNC_IS_ARITH_S2 PE_TIMEFUNC_IS_COMMON_START\
//  f_is = std::max({n_is_1, perfModel->CVA6_pipeline.getEX_ALU_stage(), perfModel->regModel.getXb()});\
//  PE_TIMEFUNC_IS_COMMON_END

// TODO: Add Mul_c, Div_c & R_d_c connector!
#define PE_TIMEFUNC_IS_ARITH_2 PE_TIMEFUNC_IS_COMMON_START\
  f_is = std::max({n_is_1, perfModel->CVA6_pipeline.getEX_ALU_stage(), perfModel->regModel.getXa(), perfModel->regModel.getXb()});\
  PE_TIMEFUNC_IS_COMMON_END

// TODO: Add Mul_c, Div_c & R_d_c connector!
#define PE_TIMEFUNC_IS_BRANCH PE_TIMEFUNC_IS_COMMON_START\
  f_is = std::max({n_is_1, perfModel->CVA6_pipeline.getEX_BU_stage(), perfModel->regModel.getXa(), perfModel->regModel.getXb()});\
  PE_TIMEFUNC_IS_COMMON_END

// TODO: Add Div_c & R_d_c connector!
#define PE_TIMEFUNC_IS_MUL PE_TIMEFUNC_IS_COMMON_START\
  f_is = std::max({n_is_1, perfModel->CVA6_pipeline.getEX_MUL_I_stage(), perfModel->regModel.getXa(), perfModel->regModel.getXb()});\
  PE_TIMEFUNC_IS_COMMON_END

// TODO: Add R_d_c connector!
#define PE_TIMEFUNC_IS_DIV PE_TIMEFUNC_IS_COMMON_START\
  f_is = std::max({n_is_1, perfModel->CVA6_pipeline.getEX_DIV_stage(), perfModel->regModel.getXa(), perfModel->regModel.getXb()});\
  PE_TIMEFUNC_IS_COMMON_END

// TODO: LSU_b connector is set inconsistently with Robert's model
// TODO: Add R_d_c connector!
#define PE_TIMEFUNC_IS_LOAD PE_TIMEFUNC_IS_COMMON_START\
  perfModel->dCCtrlModel.setLSU_b(n_is_1);\
  f_is = std::max({n_is_1, perfModel->CVA6_pipeline.getEX_LU_ctrl_stage(), perfModel->dCCtrlModel.getLSU_c(), perfModel->regModel.getXa()}); \
  PE_TIMEFUNC_IS_COMMON_END

// TODO: LSU_b connector is set inconsistently with Robert's model
#define PE_TIMEFUNC_IS_STORE PE_TIMEFUNC_IS_COMMON_START\
  perfModel->dCCtrlModel.setLSU_b(n_is_1);\
  f_is = std::max({n_is_1, perfModel->CVA6_pipeline.getEX_SU_ctrl_stage(), perfModel->dCCtrlModel.getLSU_c(), perfModel->regModel.getXa(), perfModel->regModel.getXb()});\
  PE_TIMEFUNC_IS_COMMON_END

// -- EX-stage

#define PE_TIMEFUNC_EX_COMMON int st_ex, n_ex_1, f_ex;\
  st_ex = f_is;\
  n_ex_1 = st_ex + 1;\

#define PE_TIMEFUNC_EX_DEF PE_TIMEFUNC_EX_COMMON\
  f_ex = std::max({n_ex_1, perfModel->CVA6_pipeline.getCOM_stage()});\
  perfModel->CVA6_pipeline.setEX_ALU_stage(f_ex);

#define PE_TIMEFUNC_EX_ALU PE_TIMEFUNC_EX_COMMON\
  perfModel->regModel.setXd(n_ex_1);\
  f_ex = std::max({n_ex_1, perfModel->CVA6_pipeline.getCOM_stage()});\
  perfModel->CVA6_pipeline.setEX_ALU_stage(f_ex);

// TODO: PC_np = n_ex_1
#define PE_TIMEFUNC_EX_BRANCH PE_TIMEFUNC_EX_COMMON\
  f_ex = std::max({n_ex_1, perfModel->CVA6_pipeline.getCOM_stage()});\
  perfModel->CVA6_pipeline.setEX_BU_stage(f_ex);

// TODO: Mul_b = n_ex_2
#define PE_TIMEFUNC_EX_MUL PE_TIMEFUNC_EX_COMMON\
  int ex_mul_i;\
  ex_mul_i = std::max({n_ex_1, perfModel->CVA6_pipeline.getEX_MUL_O_stage()});\
  perfModel->CVA6_pipeline.setEX_MUL_I_stage(ex_mul_i);\
  int n_ex_2;\
  n_ex_2 = ex_mul_i + 1;\
  perfModel->regModel.setXd(n_ex_2);\
  f_ex = std::max({n_ex_2, perfModel->CVA6_pipeline.getCOM_stage()});\
  perfModel->CVA6_pipeline.setEX_MUL_O_stage(f_ex);

// TODO: Div_b = n_ex_1
#define PE_TIMEFUNC_EX_DIV int st_ex, n_ex_1, f_ex;\
  st_ex = f_is;\
  n_ex_1 = st_ex + 5;\
  perfModel->regModel.setXd(n_ex_1);\
  f_ex = std::max({n_ex_1, perfModel->CVA6_pipeline.getCOM_stage()});\
  perfModel->CVA6_pipeline.setEX_DIV_stage(f_ex);

// TODO: LU_b connector is set inconsistently with Robert's model
// TODO: R_d = n_ex_3
#define PE_TIMEFUNC_EX_LOAD PE_TIMEFUNC_EX_COMMON\
  int ex_lu_ctrl;\
  ex_lu_ctrl = std::max({n_ex_1, perfModel->CVA6_pipeline.getEX_LU_cache_stage()});\
  perfModel->CVA6_pipeline.setEX_LU_ctrl_stage(ex_lu_ctrl);\
  int n_ex_2;\
  n_ex_2 = ex_lu_ctrl + perfModel->dCModel.getDelay();\
  perfModel->dCCtrlModel.setLU_b(n_ex_2);\
  int ex_lu_cache;							\
  ex_lu_cache = std::max({n_ex_2, perfModel->CVA6_pipeline.getEX_LU_unit_stage()});\
  perfModel->CVA6_pipeline.setEX_LU_cache_stage(ex_lu_cache);\
  int n_ex_3;\
  n_ex_3 = ex_lu_cache + 1;\
  f_ex = std::max({n_ex_3, perfModel->CVA6_pipeline.getCOM_stage()});\
  perfModel->CVA6_pipeline.setEX_LU_unit_stage(f_ex);

// TODO: SU_b connector is set inconsistently with Robert's model
#define PE_TIMEFUNC_EX_STORE PE_TIMEFUNC_EX_COMMON\
  int ex_su_ctrl;\
  ex_su_ctrl = std::max({n_ex_1, perfModel->CVA6_pipeline.getEX_SU_unit_stage()});\
  perfModel->CVA6_pipeline.setEX_SU_ctrl_stage(ex_su_ctrl);\
  int n_ex_2;\
  n_ex_2 = ex_su_ctrl + 1;\
  perfModel->dCCtrlModel.setSU_b(n_ex_2);\
  f_ex = std::max({n_ex_2, perfModel->CVA6_pipeline.getCOM_stage()});\
  perfModel->CVA6_pipeline.setEX_SU_unit_stage(f_ex);

// -- COM-stage

// TODO: R_d_c = n_com_1 (for COM_reg)
#define PE_TIMEFUNC_COM int st_com, n_com_1, f_com;\
  st_com = f_ex;\
  n_com_1 = st_com + 1;\
  f_com = n_com_1;\
  perfModel->CVA6_pipeline.setCOM_stage(f_com);

// -- Functions

#define PE_TIMEFUNC_ARITH_0 PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN\
  PE_TIMEFUNC_IF\
  PE_TIMEFUNC_ID\
  PE_TIMEFUNC_IS_ARITH_0\
  PE_TIMEFUNC_EX_ALU\
  PE_TIMEFUNC_COM\
}

#define PE_TIMEFUNC_ARITH_S1 PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN\
  PE_TIMEFUNC_IF\
  PE_TIMEFUNC_ID\
  PE_TIMEFUNC_IS_ARITH_S1\
  PE_TIMEFUNC_EX_ALU\
  PE_TIMEFUNC_COM\
}

//#define PE_TIMEFUNC_ARITH_S2 PE_TIMEFUNC_CALL {\
//  PE_TIMEFUNC_INIT\
//  PE_TIMEFUNC_PCGEN\
//  PE_TIMEFUNC_IF\
//  PE_TIMEFUNC_ID\
//  PE_TIMEFUNC_IS_ARITH_S2\
//  PE_TIMEFUNC_EX_ALU\
//  PE_TIMEFUNC_COM\
//}

#define PE_TIMEFUNC_ARITH_2 PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN\
  PE_TIMEFUNC_IF\
  PE_TIMEFUNC_ID\
  PE_TIMEFUNC_IS_ARITH_2\
  PE_TIMEFUNC_EX_ALU\
  PE_TIMEFUNC_COM\
}

#define PE_TIMEFUNC_BRANCH PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN\
  PE_TIMEFUNC_IF\
  PE_TIMEFUNC_ID\
  PE_TIMEFUNC_IS_BRANCH\
  PE_TIMEFUNC_EX_BRANCH\
  PE_TIMEFUNC_COM\
}

#define PE_TIMEFUNC_MUL PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN\
  PE_TIMEFUNC_IF\
  PE_TIMEFUNC_ID\
  PE_TIMEFUNC_IS_MUL\
  PE_TIMEFUNC_EX_MUL\
  PE_TIMEFUNC_COM\
}

#define PE_TIMEFUNC_DIV PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN\
  PE_TIMEFUNC_IF\
  PE_TIMEFUNC_ID\
  PE_TIMEFUNC_IS_DIV\
  PE_TIMEFUNC_EX_DIV\
  PE_TIMEFUNC_COM\
}

#define PE_TIMEFUNC_LOAD PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN\
  PE_TIMEFUNC_IF\
  PE_TIMEFUNC_ID\
  PE_TIMEFUNC_IS_LOAD\
  PE_TIMEFUNC_EX_LOAD\
  PE_TIMEFUNC_COM\
}

#define PE_TIMEFUNC_STORE PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN\
  PE_TIMEFUNC_IF\
  PE_TIMEFUNC_ID\
  PE_TIMEFUNC_IS_STORE\
  PE_TIMEFUNC_EX_STORE\
  PE_TIMEFUNC_COM\
}

#define PE_TIMEFUNC_DEF PE_TIMEFUNC_CALL {\
  PE_TIMEFUNC_INIT\
  PE_TIMEFUNC_PCGEN\
  PE_TIMEFUNC_IF\
  PE_TIMEFUNC_ID\
  PE_TIMEFUNC_IS_DEF\
  PE_TIMEFUNC_EX_DEF\
  PE_TIMEFUNC_COM\
}


InstructionModelSet* CVA6_InstrModelSet = new InstructionModelSet("CVA6_InstrModelSet");

// -- ARITH_2 --

static InstructionModel *instrModel_add = new InstructionModel(
  CVA6_InstrModelSet,
  "add",
  0,
  PE_TIMEFUNC_ARITH_2
);

static InstructionModel *instrModel_sub = new InstructionModel(
  CVA6_InstrModelSet,
  "sub",
  1,
  PE_TIMEFUNC_ARITH_2
);

static InstructionModel *instrModel_xor = new InstructionModel(
  CVA6_InstrModelSet,
  "xor",
  2,
  PE_TIMEFUNC_ARITH_2
);

static InstructionModel *instrModel_or = new InstructionModel(
  CVA6_InstrModelSet,
  "or",
  3,
  PE_TIMEFUNC_ARITH_2
);

static InstructionModel *instrModel_and = new InstructionModel(
  CVA6_InstrModelSet,
  "and",
  4,
  PE_TIMEFUNC_ARITH_2
);

static InstructionModel *instrModel_slt = new InstructionModel(
  CVA6_InstrModelSet,
  "slt",
  5,
  PE_TIMEFUNC_ARITH_2
);

static InstructionModel *instrModel_sltu = new InstructionModel(
  CVA6_InstrModelSet,
  "sltu",
  6,
  PE_TIMEFUNC_ARITH_2
);

static InstructionModel *instrModel_sll = new InstructionModel(
  CVA6_InstrModelSet,
  "sll",
  7,
  PE_TIMEFUNC_ARITH_2
);

static InstructionModel *instrModel_srl = new InstructionModel(
  CVA6_InstrModelSet,
  "srl",
  8,
  PE_TIMEFUNC_ARITH_2
);

static InstructionModel *instrModel_sra = new InstructionModel(
  CVA6_InstrModelSet,
  "sra",
  9,
  PE_TIMEFUNC_ARITH_2
);

// -- ARITH_S1 --

static InstructionModel *instrModel_addi = new InstructionModel(
  CVA6_InstrModelSet,
  "addi",
  10,
  PE_TIMEFUNC_ARITH_S1
);

static InstructionModel *instrModel_xori = new InstructionModel(
  CVA6_InstrModelSet,
  "xori",
  11,
  PE_TIMEFUNC_ARITH_S1
);

static InstructionModel *instrModel_ori = new InstructionModel(
  CVA6_InstrModelSet,
  "ori",
  12,
  PE_TIMEFUNC_ARITH_S1
);

static InstructionModel *instrModel_andi = new InstructionModel(
  CVA6_InstrModelSet,
  "andi",
  13,
  PE_TIMEFUNC_ARITH_S1
);

static InstructionModel *instrModel_slti = new InstructionModel(
  CVA6_InstrModelSet,
  "slti",
  14,
  PE_TIMEFUNC_ARITH_S1
);

static InstructionModel *instrModel_sltiu = new InstructionModel(
  CVA6_InstrModelSet,
  "sltiu",
  15,
  PE_TIMEFUNC_ARITH_S1
);

static InstructionModel *instrModel_slli = new InstructionModel(
  CVA6_InstrModelSet,
  "slli",
  16,
  PE_TIMEFUNC_ARITH_S1
);

static InstructionModel *instrModel_srli = new InstructionModel(
  CVA6_InstrModelSet,
  "srli",
  17,
  PE_TIMEFUNC_ARITH_S1
);

static InstructionModel *instrModel_srai = new InstructionModel(
  CVA6_InstrModelSet,
  "srai",
  18,
  PE_TIMEFUNC_ARITH_S1
);

// -- ARITH_0 --

static InstructionModel *instrModel_auipc = new InstructionModel(
  CVA6_InstrModelSet,
  "auipc",
  19,
  PE_TIMEFUNC_ARITH_0
);

static InstructionModel *instrModel_lui = new InstructionModel(
  CVA6_InstrModelSet,
  "lui",
  20,
  PE_TIMEFUNC_ARITH_0
);

// -- MUL --

static InstructionModel *instrModel_mul = new InstructionModel(
  CVA6_InstrModelSet,
  "mul",
  21,
  PE_TIMEFUNC_MUL
);

static InstructionModel *instrModel_mulh = new InstructionModel(
  CVA6_InstrModelSet,
  "mulh",
  22,
  PE_TIMEFUNC_MUL
);

static InstructionModel *instrModel_mulhu = new InstructionModel(
  CVA6_InstrModelSet,
  "mulhu",
  23,
  PE_TIMEFUNC_MUL
);

static InstructionModel *instrModel_mulhsu = new InstructionModel(
  CVA6_InstrModelSet,
  "mulhsu",
  24,
  PE_TIMEFUNC_MUL
);

// -- DIV --

static InstructionModel *instrModel_div = new InstructionModel(
  CVA6_InstrModelSet,
  "div",
  25,
  PE_TIMEFUNC_DIV
);

static InstructionModel *instrModel_divu = new InstructionModel(
  CVA6_InstrModelSet,
  "divu",
  26,
  PE_TIMEFUNC_DIV
);

static InstructionModel *instrModel_rem = new InstructionModel(
  CVA6_InstrModelSet,
  "rem",
  27,
  PE_TIMEFUNC_DIV
);

static InstructionModel *instrModel_remu = new InstructionModel(
  CVA6_InstrModelSet,
  "remu",
  28,
  PE_TIMEFUNC_DIV
);

// -- DEFAULT --

static InstructionModel *instrModel_csrrw = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrw",
  29,
  PE_TIMEFUNC_DEF
);

static InstructionModel *instrModel_csrrs = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrs",
  30,
  PE_TIMEFUNC_DEF
);

static InstructionModel *instrModel_csrrc = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrc",
  31,
  PE_TIMEFUNC_DEF
);

static InstructionModel *instrModel_csrrwi = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrwi",
  32,
  PE_TIMEFUNC_DEF
);

static InstructionModel *instrModel_csrrsi = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrsi",
  33,
  PE_TIMEFUNC_DEF
);

static InstructionModel *instrModel_csrrci = new InstructionModel(
  CVA6_InstrModelSet,
  "csrrci",
  34,
  PE_TIMEFUNC_DEF
);

// -- STORE --

static InstructionModel *instrModel_sb = new InstructionModel(
  CVA6_InstrModelSet,
  "sb",
  35,
  PE_TIMEFUNC_STORE
);

static InstructionModel *instrModel_sh = new InstructionModel(
  CVA6_InstrModelSet,
  "sh",
  36,
  PE_TIMEFUNC_STORE
);

static InstructionModel *instrModel_sw = new InstructionModel(
  CVA6_InstrModelSet,
  "sw",
  37,
  PE_TIMEFUNC_STORE
);

// -- LOAD --

static InstructionModel *instrModel_lw = new InstructionModel(
  CVA6_InstrModelSet,
  "lw",
  38,
  PE_TIMEFUNC_LOAD
);

static InstructionModel *instrModel_lh = new InstructionModel(
  CVA6_InstrModelSet,
  "lh",
  39,
  PE_TIMEFUNC_LOAD
);

static InstructionModel *instrModel_lhu = new InstructionModel(
  CVA6_InstrModelSet,
  "lhu",
  40,
  PE_TIMEFUNC_LOAD
);

static InstructionModel *instrModel_lb = new InstructionModel(
  CVA6_InstrModelSet,
  "lb",
  41,
  PE_TIMEFUNC_LOAD
);

static InstructionModel *instrModel_lbu = new InstructionModel(
  CVA6_InstrModelSet,
  "lbu",
  42,
  PE_TIMEFUNC_LOAD
);

// -- BRANCH --

static InstructionModel *instrModel_beq = new InstructionModel(
  CVA6_InstrModelSet,
  "beq",
  43,
  PE_TIMEFUNC_BRANCH
);

static InstructionModel *instrModel_bne = new InstructionModel(
  CVA6_InstrModelSet,
  "bne",
  44,
  PE_TIMEFUNC_BRANCH
);

static InstructionModel *instrModel_blt = new InstructionModel(
  CVA6_InstrModelSet,
  "blt",
  45,
  PE_TIMEFUNC_BRANCH
);

static InstructionModel *instrModel_bge = new InstructionModel(
  CVA6_InstrModelSet,
  "bge",
  46,
  PE_TIMEFUNC_BRANCH
);

static InstructionModel *instrModel_bltu = new InstructionModel(
  CVA6_InstrModelSet,
  "bltu",
  47,
  PE_TIMEFUNC_BRANCH
);

static InstructionModel *instrModel_bgeu = new InstructionModel(
  CVA6_InstrModelSet,
  "bgeu",
  48,
  PE_TIMEFUNC_BRANCH
);

// -- DEFAULT --

static InstructionModel *instrModel__def = new InstructionModel(
  CVA6_InstrModelSet,
  "_def",
  49,
  PE_TIMEFUNC_DEF
);

static InstructionModel *instrModel_jal = new InstructionModel(
  CVA6_InstrModelSet,
  "jal",
  50,
  PE_TIMEFUNC_DEF
);

static InstructionModel *instrModel_jalr = new InstructionModel(
  CVA6_InstrModelSet,
  "jalr",
  51,
  PE_TIMEFUNC_DEF
);

