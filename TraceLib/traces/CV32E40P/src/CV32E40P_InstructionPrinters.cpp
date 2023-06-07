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

#include "CV32E40P_Channel.h"

#include <sstream>
#include <string>
#include <iomanip>

InstructionPrinterSet *CV32E40P_InstrPrinterSet = new InstructionPrinterSet("CV32E40P_InstrPrinterSet");

static InstructionPrinter *instrPrinter_add = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "add",
  0,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sub = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "sub",
  1,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_xor = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "xor",
  2,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_or = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "or",
  3,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_and = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "and",
  4,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slt = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "slt",
  5,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sltu = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "sltu",
  6,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sll = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "sll",
  7,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srl = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "srl",
  8,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sra = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "sra",
  9,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_addi = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "addi",
  10,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_xori = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "xori",
  11,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_ori = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "ori",
  12,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_andi = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "andi",
  13,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slti = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "slti",
  14,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sltiu = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "sltiu",
  15,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slli = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "slli",
  16,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srli = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "srli",
  17,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srai = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "srai",
  18,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_auipc = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "auipc",
  19,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lui = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "lui",
  20,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mul = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "mul",
  21,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulh = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "mulh",
  22,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulhu = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "mulhu",
  23,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulhsu = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "mulhsu",
  24,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_div = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "div",
  25,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_divu = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "divu",
  26,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_rem = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "rem",
  27,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_remu = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "remu",
  28,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrw = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "csrrw",
  29,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrs = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "csrrs",
  30,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrc = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "csrrc",
  31,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrwi = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "csrrwi",
  32,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrsi = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "csrrsi",
  33,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrci = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "csrrci",
  34,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sb = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "sb",
  35,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sh = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "sh",
  36,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sw = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "sw",
  37,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lw = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "lw",
  38,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lh = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "lh",
  39,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lhu = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "lhu",
  40,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lb = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "lb",
  41,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lbu = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "lbu",
  42,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_beq = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "beq",
  43,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bne = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "bne",
  44,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_blt = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "blt",
  45,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bge = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "bge",
  46,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bltu = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "bltu",
  47,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bgeu = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "bgeu",
  48,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter__def = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "_def",
  49,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jal = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "jal",
  50,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jalr = new InstructionPrinter(
  CV32E40P_InstrPrinterSet,
  "jalr",
  51,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CV32E40P_Channel* channel = static_cast<CV32E40P_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    return ret_strs.str();
  }
);
