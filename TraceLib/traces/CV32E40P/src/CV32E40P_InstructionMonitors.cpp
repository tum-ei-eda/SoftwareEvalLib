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

#include "Components/Monitor.h"

#include "etiss/Instruction.h"

#include <sstream>
#include <string>

InstructionMonitorSet *CV32E40P_InstrMonitorSet = new InstructionMonitorSet("CV32E40P_InstrMonitorSet");

static InstructionMonitor *instrMonitor_add = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "add",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 0 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sub = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "sub",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 1 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_xor = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "xor",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 2 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_or = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "or",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 3 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_and = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "and",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 4 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_slt = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "slt",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 5 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sltu = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "sltu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 6 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sll = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "sll",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 7 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_srl = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "srl",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 8 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sra = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "sra",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 9 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_addi = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "addi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 10 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_xori = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "xori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 11 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_ori = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "ori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 12 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_andi = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "andi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 13 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_slti = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "slti",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 14 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sltiu = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "sltiu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 15 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_slli = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "slli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 16 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_srli = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "srli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 17 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_srai = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "srai",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 18 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_auipc = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "auipc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 19 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lui = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "lui",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 20 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_mul = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "mul",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 21 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_mulh = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "mulh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 22 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_mulhu = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "mulhu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 23 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_mulhsu = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "mulhsu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 24 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_div = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "div",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 25 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_divu = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "divu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 26 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_rem = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "rem",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 27 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_remu = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "remu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 28 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrw = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "csrrw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 29 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrs = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "csrrs",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 30 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrc = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "csrrc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 31 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrwi = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "csrrwi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 32 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrsi = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "csrrsi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 33 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrci = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "csrrci",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 34 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sb = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "sb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 35 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sh = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "sh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 36 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sw = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "sw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 37 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lw = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "lw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 38 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lh = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "lh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 39 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lhu = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "lhu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 40 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lb = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "lb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 41 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lbu = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "lbu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 42 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_beq = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "beq",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 43 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    ret_strs << "CV32E40P_Monitor_brTarget_buffer[*CV32E40P_Monitor_instrCnt] = " << std::to_string(ic.current_address_ + (((etiss_int16)(imm << 3)) >> 3)) << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bne = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "bne",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 44 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    ret_strs << "CV32E40P_Monitor_brTarget_buffer[*CV32E40P_Monitor_instrCnt] = " << std::to_string(ic.current_address_ + (((etiss_int16)(imm << 3)) >> 3)) << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_blt = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "blt",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 45 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    ret_strs << "CV32E40P_Monitor_brTarget_buffer[*CV32E40P_Monitor_instrCnt] = " << std::to_string(ic.current_address_ + (((etiss_int16)(imm << 3)) >> 3)) << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bge = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "bge",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 46 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    ret_strs << "CV32E40P_Monitor_brTarget_buffer[*CV32E40P_Monitor_instrCnt] = " << std::to_string(ic.current_address_ + (((etiss_int16)(imm << 3)) >> 3)) << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bltu = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "bltu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 47 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    ret_strs << "CV32E40P_Monitor_brTarget_buffer[*CV32E40P_Monitor_instrCnt] = " << std::to_string(ic.current_address_ + (((etiss_int16)(imm << 3)) >> 3)) << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bgeu = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "bgeu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 48 << ";\n";
    
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1 << ";\n";
    
    int rs2 = 0;
    static etiss::instr::BitArrayRange R_rs2_0(24,20);
    rs2 += R_rs2_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs2_buffer[*CV32E40P_Monitor_instrCnt] = " << rs2 << ";\n";
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    ret_strs << "CV32E40P_Monitor_brTarget_buffer[*CV32E40P_Monitor_instrCnt] = " << std::to_string(ic.current_address_ + (((etiss_int16)(imm << 3)) >> 3)) << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor__def = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "_def",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 49 << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_jal = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "jal",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 50 << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_20(31,31);
    imm += R_imm_20.read(ba) << 20;
    static etiss::instr::BitArrayRange R_imm_12(19,12);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(20,20);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_1(30,21);
    imm += R_imm_1.read(ba) << 1;
    ret_strs << "CV32E40P_Monitor_brTarget_buffer[*CV32E40P_Monitor_instrCnt] = " << std::to_string(ic.current_address_ + (((etiss_int32)(imm << 11)) >> 11)) << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_jalr = new InstructionMonitor(
  CV32E40P_InstrMonitorSet,
  "jalr",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "CV32E40P_Monitor_typeId_buffer[*CV32E40P_Monitor_instrCnt] = " << 51 << ";\n";
    
    int rs1_addr = 0;
    static etiss::instr::BitArrayRange R_rs1_addr_0(19,15);
    rs1_addr += R_rs1_addr_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rs1_buffer[*CV32E40P_Monitor_instrCnt] = " << rs1_addr << ";\n";
    
    int rd = 0;
    static etiss::instr::BitArrayRange R_rd_0(11,7);
    rd += R_rd_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_rd_buffer[*CV32E40P_Monitor_instrCnt] = " << rd << ";\n";
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(11,0);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "CV32E40P_Monitor_brTarget_buffer[*CV32E40P_Monitor_instrCnt] = " << "(*((RV32IMACFD*)cpu)->X[" << rs1_data << "] + " << std::to_string((((etiss_int16)(imm << 4)) >> 4)) << ") & -2U" << ";\n";
    
    ret_strs << "CV32E40P_Monitor_pc_buffer[*CV32E40P_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    ret_strs << "*CV32E40P_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*CV32E40P_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

