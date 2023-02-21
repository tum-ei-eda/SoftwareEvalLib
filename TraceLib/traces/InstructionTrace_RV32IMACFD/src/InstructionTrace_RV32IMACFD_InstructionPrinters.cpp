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

#include "Components/Printer.h"
#include "Components/Channel.h"

#include "InstructionTrace_RV32IMACFD_Channel.h"

#include <sstream>
#include <string>
#include <iomanip>

InstructionPrinterSet *InstructionTrace_RV32IMACFD_InstrPrinterSet = new InstructionPrinterSet("InstructionTrace_RV32IMACFD_InstrPrinterSet");

static InstructionPrinter *instrPrinter_Arith_R_Type = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "Arith_R_Type",
  0,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1_data[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2_data[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Arith_I_Type = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "Arith_I_Type",
  1,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Arith_Imm_R_Type = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "Arith_Imm_R_Type",
  2,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Load_I_Type = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "Load_I_Type",
  3,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->mem_addr[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->mem_rdata[instr_] << " ; ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Store_S_Type = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "Store_S_Type",
  4,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1_data[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->mem_addr[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->mem_wdata[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_CSR_I_Type = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "CSR_I_Type",
  5,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->csr_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_CSR_Imm_I_Type = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "CSR_Imm_I_Type",
  6,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->csr_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_Branch_B_Type = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "Branch_B_Type",
  7,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1_data[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->jump_pc[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_RegLoad_U_Type = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "RegLoad_U_Type",
  8,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter__def = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "_def",
  9,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jal = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "jal",
  10,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd_data[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->jump_pc[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jalr = new InstructionPrinter(
  InstructionTrace_RV32IMACFD_InstrPrinterSet,
  "jalr",
  11,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    InstructionTrace_RV32IMACFD_Channel* channel = static_cast<InstructionTrace_RV32IMACFD_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->code[instr_] << " ; ";
    ret_strs << std::setfill(' ') << std::setw(50) << std::left << channel->assembly[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1_data[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd_data[instr_] << " ; ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->jump_pc[instr_] << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " ; ";
    return ret_strs.str();
  }
);
