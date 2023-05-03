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

#include "CVA6_Channel.h"

#include <sstream>
#include <string>
#include <iomanip>

InstructionPrinterSet *CVA6_InstrPrinterSet = new InstructionPrinterSet("CVA6_InstrPrinterSet");

static InstructionPrinter *instrPrinter_add = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "add",
  0,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sub = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sub",
  1,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_xor = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "xor",
  2,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_or = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "or",
  3,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_and = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "and",
  4,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slt = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "slt",
  5,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sltu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sltu",
  6,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sll = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sll",
  7,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srl = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "srl",
  8,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sra = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sra",
  9,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_addi = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "addi",
  10,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_xori = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "xori",
  11,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_ori = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "ori",
  12,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_andi = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "andi",
  13,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slti = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "slti",
  14,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sltiu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sltiu",
  15,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slli = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "slli",
  16,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srli = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "srli",
  17,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_srai = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "srai",
  18,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_auipc = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "auipc",
  19,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lui = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lui",
  20,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mul = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "mul",
  21,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulh = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "mulh",
  22,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulhu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "mulhu",
  23,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mulhsu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "mulhsu",
  24,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_div = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "div",
  25,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_divu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "divu",
  26,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_rem = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "rem",
  27,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_remu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "remu",
  28,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrw",
  29,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrs = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrs",
  30,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrc = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrc",
  31,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrwi = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrwi",
  32,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrsi = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrsi",
  33,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csrrci = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "csrrci",
  34,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sb = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sb",
  35,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->memAddr[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sh = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sh",
  36,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->memAddr[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "sw",
  37,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->memAddr[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lw = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lw",
  38,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->memAddr[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lh = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lh",
  39,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->memAddr[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lhu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lhu",
  40,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->memAddr[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lb = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lb",
  41,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->memAddr[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lbu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "lbu",
  42,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->memAddr[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_beq = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "beq",
  43,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bne = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "bne",
  44,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_blt = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "blt",
  45,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bge = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "bge",
  46,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bltu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "bltu",
  47,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bgeu = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "bgeu",
  48,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter__def = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "_def",
  49,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jal = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "jal",
  50,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_jalr = new InstructionPrinter(
  CVA6_InstrPrinterSet,
  "jalr",
  51,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    CVA6_Channel* channel = static_cast<CVA6_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
