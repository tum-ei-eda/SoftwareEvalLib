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

#include "SimpleRISCV_H_fw_DynBrPred_Channel.h"

#include <sstream>
#include <string>
#include <iomanip>

InstructionPrinterSet *SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet = new InstructionPrinterSet("SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet");

static InstructionPrinter *instrPrinter_add = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "add",
  0,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sub = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "sub",
  1,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sll = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "sll",
  2,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_xor = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "xor",
  3,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_or = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "or",
  4,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_and = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "and",
  5,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cadd = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "cadd",
  6,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_mul = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "mul",
  7,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_rem = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "rem",
  8,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_addi = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "addi",
  9,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sltiu = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "sltiu",
  10,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_xori = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "xori",
  11,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_ori = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "ori",
  12,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_andi = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "andi",
  13,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_caddi = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "caddi",
  14,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cslli = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "cslli",
  15,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_caddi16sp = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "caddi16sp",
  16,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cmv = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "cmv",
  17,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cli = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "cli",
  18,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sb = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "sb",
  19,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sh = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "sh",
  20,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_sw = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "sw",
  21,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_csw = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "csw",
  22,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lh = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "lh",
  23,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lw = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "lw",
  24,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lbu = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "lbu",
  25,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lhu = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "lhu",
  26,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_clw = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "clw",
  27,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_beq = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "beq",
  28,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bne = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "bne",
  29,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_blt = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "blt",
  30,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bge = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "bge",
  31,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bltu = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "bltu",
  32,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_bgeu = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "bgeu",
  33,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs2[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cbeqz = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "cbeqz",
  34,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_cbnez = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "cbnez",
  35,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->brTarget[instr_] << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter__def = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "_def",
  36,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_lb = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "lb",
  37,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
static InstructionPrinter *instrPrinter_slti = new InstructionPrinter(
  SimpleRISCV_H_fw_DynBrPred_InstrPrinterSet,
  "slti",
  38,
  [](Channel* channel_, int instr_){
    std::stringstream ret_strs;
    SimpleRISCV_H_fw_DynBrPred_Channel* channel = static_cast<SimpleRISCV_H_fw_DynBrPred_Channel*>(channel_);
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->pc[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rs1[instr_] << " | ";
    ret_strs << std::setfill('-') << std::setw(10) << "" << " | ";
    ret_strs << "0x" << std::setfill('0') << std::setw(8) << std::right << std::hex << channel->rd[instr_] << " | ";
    return ret_strs.str();
  }
);
