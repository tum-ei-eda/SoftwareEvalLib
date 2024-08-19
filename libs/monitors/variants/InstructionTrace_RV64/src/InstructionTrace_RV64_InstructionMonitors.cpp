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

InstructionMonitorSet *InstructionTrace_RV64_InstrMonitorSet = new InstructionMonitorSet("InstructionTrace_RV64_InstrMonitorSet");

static InstructionMonitor *instrMonitor_add = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "add",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sub = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sub",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sll = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sll",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_slt = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "slt",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sltu = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sltu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_xor = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "xor",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_srl = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "srl",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sra = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sra",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_or = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "or",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_and = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "and",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_addw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "addw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_subw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "subw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sllw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sllw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_srlw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "srlw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sraw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sraw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_mul = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "mul",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_mulh = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "mulh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_mulhsu = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "mulhsu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_mulhu = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "mulhu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_div = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "div",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_divu = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "divu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_rem = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "rem",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_remu = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "remu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_mulw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "mulw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_divw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "divw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_divuw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "divuw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_remw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "remw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_remuw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "remuw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_addi = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "addi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_slti = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "slti",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sltiu = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sltiu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_xori = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "xori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_ori = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "ori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_andi = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "andi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_slli = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "slli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(25,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(25,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_srli = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "srli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(25,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(25,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_srai = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "srai",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(25,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(25,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_slliw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "slliw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(24,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(24,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_srliw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "srliw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(24,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(24,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sraiw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sraiw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(24,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(24,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lb = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "lb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_mem_addr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1  << "ULL] + " << imm_addr << "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lh = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "lh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_mem_addr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1  << "ULL] + " << imm_addr << "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "lw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_mem_addr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1  << "ULL] + " << imm_addr << "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lbu = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "lbu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_mem_addr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1  << "ULL] + " << imm_addr << "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lhu = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "lhu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_mem_addr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1  << "ULL] + " << imm_addr << "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lwu = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "lwu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_mem_addr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1  << "ULL] + " << imm_addr << "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_ld = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "ld",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_mem_addr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1  << "ULL] + " << imm_addr << "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sb = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_mem_addr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1  << "ULL] + " << imm_addr << "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sh = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_mem_addr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1  << "ULL] + " << imm_addr << "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_mem_addr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1  << "ULL] + " << imm_addr << "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sd = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "sd",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_mem_addr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1  << "ULL] + " << imm_addr << "LL" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_5(31,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_0(11,7);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    int rs1 = 0;
    static etiss::instr::BitArrayRange R_rs1_0(19,15);
    rs1 += R_rs1_0.read(ba) << 0;
    int imm_addr = 0;
    static etiss::instr::BitArrayRange R_imm_addr_5(31,25);
    imm_addr += R_imm_addr_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_addr_0(11,7);
    imm_addr += R_imm_addr_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrw = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "csrrw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 6 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_csr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << csr << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrs = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "csrrs",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 6 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_csr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << csr << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrc = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "csrrc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 6 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_csr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << csr << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrwi = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "csrrwi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(19,15);
    imm += R_imm_0.read(ba) << 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_csr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << csr << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(19,15);
    imm += R_imm_0.read(ba) << 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrsi = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "csrrsi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(19,15);
    imm += R_imm_0.read(ba) << 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_csr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << csr << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(19,15);
    imm += R_imm_0.read(ba) << 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrci = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "csrrci",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(19,15);
    imm += R_imm_0.read(ba) << 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_csr_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << csr << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(19,15);
    imm += R_imm_0.read(ba) << 0;
    int csr = 0;
    static etiss::instr::BitArrayRange R_csr_0(31,20);
    csr += R_csr_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_beq = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "beq",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_jump_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bne = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "bne",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_jump_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_blt = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "blt",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_jump_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bge = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "bge",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_jump_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bltu = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "bltu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_jump_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bgeu = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "bgeu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs2_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,31);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(7,7);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_5(30,25);
    imm += R_imm_5.read(ba) << 5;
    static etiss::instr::BitArrayRange R_imm_1(11,8);
    imm += R_imm_1.read(ba) << 1;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_jump_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lui = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "lui",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,12);
    imm += R_imm_12.read(ba) << 12;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 9 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,12);
    imm += R_imm_12.read(ba) << 12;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_auipc = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "auipc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,12);
    imm += R_imm_12.read(ba) << 12;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 9 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_12(31,12);
    imm += R_imm_12.read(ba) << 12;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor__def = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "_def",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 10 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_jal = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "jal",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_20(31,31);
    imm += R_imm_20.read(ba) << 20;
    static etiss::instr::BitArrayRange R_imm_12(12,19);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(20,20);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_1(30,21);
    imm += R_imm_1.read(ba) << 1;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 11 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_20(31,31);
    imm += R_imm_20.read(ba) << 20;
    static etiss::instr::BitArrayRange R_imm_12(12,19);
    imm += R_imm_12.read(ba) << 12;
    static etiss::instr::BitArrayRange R_imm_11(20,20);
    imm += R_imm_11.read(ba) << 11;
    static etiss::instr::BitArrayRange R_imm_1(30,21);
    imm += R_imm_1.read(ba) << 1;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_jump_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_jalr = new InstructionMonitor(
  InstructionTrace_RV64_InstrMonitorSet,
  "jalr",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV64_Monitor_typeId_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << 12 << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_code_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV64_Monitor_assembly_buffer[*InstructionTrace_RV64_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_imm_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << imm << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_rs1_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV64_Monitor_rd_data_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "*((RV64IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV64_Monitor_jump_pc_buffer[*InstructionTrace_RV64_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV64_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

