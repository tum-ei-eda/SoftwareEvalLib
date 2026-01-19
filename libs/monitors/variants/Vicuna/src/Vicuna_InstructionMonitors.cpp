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

/********************* AUTO GENERATE FILE (create by TraceGenerator) *********************/

#include "Monitor.h"

#include "etiss/Instruction.h"

#include <sstream>
#include <string>

InstructionMonitorSet *Vicuna_InstrMonitorSet = new InstructionMonitorSet("Vicuna_InstrMonitorSet");

static InstructionMonitor *instrMonitor_add = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "add",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sub = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "sub",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_xor = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "xor",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_or = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "or",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_and = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "and",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_slt = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "slt",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sltu = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "sltu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 6 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sll = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "sll",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_srl = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "srl",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sra = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "sra",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 9 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_addi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "addi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 10 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_xori = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "xori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 11 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_ori = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "ori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 12 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_andi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "andi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 13 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_slti = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "slti",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 14 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sltiu = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "sltiu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 15 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_slli = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "slli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 16 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_srli = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "srli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 17 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_srai = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "srai",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 18 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_auipc = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "auipc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 19 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lui = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "lui",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 20 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_mul = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "mul",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 21 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_mulh = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "mulh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 22 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_mulhu = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "mulhu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 23 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_mulhsu = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "mulhsu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 24 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_div = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "div",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 25 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_data_buffer[*Vicuna_Monitor_instrCnt] = " << "*((RV32IMACFDV_zvl64b*)cpu)->X["<< rs2  << "]" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_rem = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "rem",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 26 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_data_buffer[*Vicuna_Monitor_instrCnt] = " << "*((RV32IMACFDV_zvl64b*)cpu)->X["<< rs2  << "]" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_divu = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "divu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 27 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_data_buffer[*Vicuna_Monitor_instrCnt] = " << "*((RV32IMACFDV_zvl64b*)cpu)->X["<< rs2  << "]" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_remu = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "remu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 28 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_data_buffer[*Vicuna_Monitor_instrCnt] = " << "*((RV32IMACFDV_zvl64b*)cpu)->X["<< rs2  << "]" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrw = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "csrrw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 29 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrs = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "csrrs",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 30 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrc = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "csrrc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 31 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrwi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "csrrwi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 32 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrsi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "csrrsi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 33 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_csrrci = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "csrrci",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 34 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sb = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "sb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 35 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sh = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "sh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 36 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_sw = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "sw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 37 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lw = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "lw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 38 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lh = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "lh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 39 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lhu = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "lhu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 40 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lb = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "lb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 41 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_lbu = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "lbu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 42 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_beq = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "beq",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 43 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_brTarget_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer"<< " + (((int16_t)("<< imm << " << 3)) >> 3)" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bne = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "bne",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 44 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_brTarget_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer"<< " + (((int16_t)("<< imm << " << 3)) >> 3)" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_blt = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "blt",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 45 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_brTarget_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer"<< " + (((int16_t)("<< imm << " << 3)) >> 3)" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bge = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "bge",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 46 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_brTarget_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer"<< " + (((int16_t)("<< imm << " << 3)) >> 3)" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bltu = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "bltu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 47 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_brTarget_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer"<< " + (((int16_t)("<< imm << " << 3)) >> 3)" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_bgeu = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "bgeu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 48 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_brTarget_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer"<< " + (((int16_t)("<< imm << " << 3)) >> 3)" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vle32_v = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vle32_v",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 49 << ";\n";
    
    ret_strs << "Vicuna_Monitor_lsWidth_buffer[*Vicuna_Monitor_instrCnt] = " << "32" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vl_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC20" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vle16_v = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vle16_v",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 50 << ";\n";
    
    ret_strs << "Vicuna_Monitor_lsWidth_buffer[*Vicuna_Monitor_instrCnt] = " << "16" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vl_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC20" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vle8_v = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vle8_v",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 51 << ";\n";
    
    ret_strs << "Vicuna_Monitor_lsWidth_buffer[*Vicuna_Monitor_instrCnt] = " << "8" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vl_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC20" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vse32_u = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vse32_u",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs3 = 0;
    static etiss::instr::BitArrayRange R_vs3_0(11,7);
    vs3 += R_vs3_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 52 << ";\n";
    
    ret_strs << "Vicuna_Monitor_lsWidth_buffer[*Vicuna_Monitor_instrCnt] = " << "32" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs3_buffer[*Vicuna_Monitor_instrCnt] = " << vs3  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vl_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC20" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vse16_u = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vse16_u",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs3 = 0;
    static etiss::instr::BitArrayRange R_vs3_0(11,7);
    vs3 += R_vs3_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 53 << ";\n";
    
    ret_strs << "Vicuna_Monitor_lsWidth_buffer[*Vicuna_Monitor_instrCnt] = " << "16" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs3_buffer[*Vicuna_Monitor_instrCnt] = " << vs3  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vl_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC20" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vse8_u = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vse8_u",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs3 = 0;
    static etiss::instr::BitArrayRange R_vs3_0(11,7);
    vs3 += R_vs3_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 54 << ";\n";
    
    ret_strs << "Vicuna_Monitor_lsWidth_buffer[*Vicuna_Monitor_instrCnt] = " << "8" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs3_buffer[*Vicuna_Monitor_instrCnt] = " << vs3  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_vl_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC20" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vdiv_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vdiv_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 55 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vdivu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vdivu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 56 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vremu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vremu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 57 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vrem_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vrem_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 58 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vdiv_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vdiv_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 59 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vdivu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vdivu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 60 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vremu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vremu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 61 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vrem_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vrem_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 62 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vzext_vf2 = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vzext_vf2",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 63 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsext_vf2 = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsext_vf2",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 64 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vzext_vf4 = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vzext_vf4",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 65 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsext_vf4 = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsext_vf4",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 66 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vzext_vf8 = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vzext_vf8",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 67 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsext_vf8 = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsext_vf8",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 68 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmv_v_i = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmv_v_i",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 69 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vcompress_vm = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vcompress_vm",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 70 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vadd_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vadd_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 71 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsub_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsub_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 72 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vadc_vvm = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vadc_vvm",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 73 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmadc_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmadc_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 74 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsbc_vvm = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsbc_vvm",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 75 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsbc_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsbc_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 76 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vand_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vand_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 77 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vor_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vor_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 78 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vxor_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vxor_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 79 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsll_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsll_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 80 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsrl_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsrl_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 81 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsra_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsra_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 82 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmseq_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmseq_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 83 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsne_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsne_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 84 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsltu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsltu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 85 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmslt_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmslt_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 86 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsleu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsleu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 87 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsle_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsle_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 88 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vminu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vminu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 89 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmin_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmin_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 90 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmaxu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmaxu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 91 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmax_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmax_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 92 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmul_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmul_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 93 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmulh_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmulh_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 94 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmulhu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmulhu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 95 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmulhsu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmulhsu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 96 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmul_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmul_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 97 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmulu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmulu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 98 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmulsu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmulsu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 99 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmacc_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmacc_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 100 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vnmsac_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vnmsac_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 101 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmadd_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmadd_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 102 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vnmsub_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vnmsub_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 103 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmaccu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmaccu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 104 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmacc_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmacc_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 105 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmaccsu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmaccsu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 106 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmerge_vvm = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmerge_vvm",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 107 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsaddu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsaddu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 108 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsadd_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsadd_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 109 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vssubu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vssubu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 110 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vssub_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vssub_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 111 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vaaddu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vaaddu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 112 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vaadd_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vaadd_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 113 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vasubu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vasubu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 114 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vasub_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vasub_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 115 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsmul_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsmul_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 116 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vssrl_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vssrl_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 117 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vssra_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vssra_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 118 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vrgather_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vrgather_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 119 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vrgatherei16_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vrgatherei16_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 120 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwaddu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwaddu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 121 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwsubu_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwsubu_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 122 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwadd_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwadd_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 123 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwsub_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwsub_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 124 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwaddu_w_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwaddu_w_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 125 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwsubu_w_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwsubu_w_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 126 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwadd_w_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwadd_w_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 127 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwsub_w_vv = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwsub_w_vv",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs1 = 0;
    static etiss::instr::BitArrayRange R_vs1_0(19,15);
    vs1 += R_vs1_0.read(ba) << 0;
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 128 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs1_buffer[*Vicuna_Monitor_instrCnt] = " << vs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vadd_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vadd_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 129 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsub_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsub_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 130 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vrsub_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vrsub_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 131 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vadc_vxm = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vadc_vxm",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 132 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmadc_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmadc_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 133 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsbc_vxm = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsbc_vxm",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 134 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsbc_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsbc_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 135 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vand_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vand_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 136 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vor_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vor_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 137 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vxor_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vxor_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 138 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsll_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsll_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 139 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsrl_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsrl_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 140 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsra_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsra_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 141 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmseq_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmseq_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 142 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsne_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsne_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 143 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsltu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsltu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 144 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmslt_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmslt_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 145 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsleu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsleu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 146 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsle_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsle_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 147 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsgtu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsgtu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 148 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsgt_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsgt_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 149 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vminu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vminu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 150 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmin_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmin_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 151 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmaxu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmaxu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 152 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmax_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmax_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 153 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmul_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmul_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 154 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmulh_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmulh_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 155 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmulhu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmulhu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 156 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmulhsu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmulhsu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 157 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmul_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmul_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 158 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmulu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmulu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 159 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmulsu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmulsu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 160 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmacc_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmacc_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 161 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vnmsac_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vnmsac_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 162 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmadd_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmadd_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 163 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vnmsub_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vnmsub_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 164 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmaccu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmaccu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 165 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmacc_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmacc_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 166 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmaccsu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmaccsu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 167 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwmaccus_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwmaccus_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 168 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmerge_vxm = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmerge_vxm",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 169 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsaddu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsaddu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 170 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsadd_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsadd_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 171 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vssubu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vssubu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 172 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vssub_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vssub_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 173 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vaaddu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vaaddu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 174 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vaadd_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vaadd_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 175 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vasubu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vasubu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 176 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vasub_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vasub_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 177 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsmul_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsmul_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 178 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vssrl_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vssrl_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 179 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vssra_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vssra_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 180 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vslideup_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vslideup_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 181 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vslidedown_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vslidedown_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 182 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vslide1up_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vslide1up_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 183 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vslide1down_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vslide1down_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 184 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwaddu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwaddu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 185 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwsubu_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwsubu_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 186 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwadd_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwadd_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 187 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwsub_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwsub_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 188 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwaddu_w_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwaddu_w_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 189 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwsubu_w_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwsubu_w_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 190 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwadd_w_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwadd_w_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 191 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vwsub_w_vx = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vwsub_w_vx",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 192 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "1" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vadd_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vadd_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 193 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vrsub_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vrsub_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 194 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vadc_vim = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vadc_vim",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 195 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmadc_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmadc_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 196 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vand_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vand_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 197 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vor_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vor_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 198 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vxor_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vxor_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 199 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsll_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsll_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 200 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsrl_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsrl_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 201 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsra_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsra_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 202 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmseq_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmseq_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 203 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsne_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsne_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 204 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsleu_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsleu_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 205 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsle_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsle_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 206 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsgtu_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsgtu_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 207 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmsgt_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmsgt_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 208 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vmerge_vim = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vmerge_vim",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 209 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsaddu_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsaddu_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 210 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsadd_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsadd_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 211 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vssrl_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vssrl_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 212 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vssra_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vssra_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 213 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vslideup_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vslideup_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 214 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vslidedown_vi = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vslidedown_vi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int vs2 = 0;
    static etiss::instr::BitArrayRange R_vs2_0(24,20);
    vs2 += R_vs2_0.read(ba) << 0;
    int vd = 0;
    static etiss::instr::BitArrayRange R_vd_0(11,7);
    vd += R_vd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 215 << ";\n";
    
    ret_strs << "Vicuna_Monitor_vs2_buffer[*Vicuna_Monitor_instrCnt] = " << vs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vd_buffer[*Vicuna_Monitor_instrCnt] = " << vd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_vtype_buffer[*Vicuna_Monitor_instrCnt] = " << "RV32IMACFDV_zvl64b_csr_read(cpu, system, plugin_pointers, "<< "0xC21" << ")" << ";\n";
    
    ret_strs << "Vicuna_Monitor_isWidening_buffer[*Vicuna_Monitor_instrCnt] = " << "0" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsetivli = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsetivli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 216 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsetvli = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsetvli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 217 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_vsetvl = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "vsetvl",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 218 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs2_buffer[*Vicuna_Monitor_instrCnt] = " << rs2  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor__def = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "_def",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 219 << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_jal = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "jal",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_20(31,31);
    imm += R_imm_20.read(ba) << 20;
    static etiss::instr::BitArrayRange R_imm_1(30,21);
    imm += R_imm_1.read(ba) << 1;
    static etiss::instr::BitArrayRange R_imm_11(20,20);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_12(19,12);
    imm += R_imm_12.read(ba) << 12;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 220 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_brTarget_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer"<< " + (((int32_t)("<< imm << " << 11)) >> 11)" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
static InstructionMonitor *instrMonitor_jalr = new InstructionMonitor(
  Vicuna_InstrMonitorSet,
  "jalr",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "Vicuna_Monitor_typeId_buffer[*Vicuna_Monitor_instrCnt] = " << 221 << ";\n";
    
    ret_strs << "Vicuna_Monitor_rs1_buffer[*Vicuna_Monitor_instrCnt] = " << rs1  << ";\n";
    
    ret_strs << "Vicuna_Monitor_rd_buffer[*Vicuna_Monitor_instrCnt] = " << rd  << ";\n";
    
    ret_strs << "Vicuna_Monitor_brTarget_buffer[*Vicuna_Monitor_instrCnt] = " << "("<< "*((RV32IMACFDV_zvl64b*)cpu)->X["<< rs1  << "]"<< " + (((int16_t)("<< imm << " << 4)) >> 4)) & -2U" << ";\n";
    
    ret_strs << "Vicuna_Monitor_pc_buffer[*Vicuna_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*Vicuna_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    return ret_strs.str();
  }
);
