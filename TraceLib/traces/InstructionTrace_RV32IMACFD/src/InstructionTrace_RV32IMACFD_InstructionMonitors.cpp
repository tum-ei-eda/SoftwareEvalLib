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

InstructionMonitorSet *InstructionTrace_RV32IMACFD_InstrMonitorSet = new InstructionMonitorSet("InstructionTrace_RV32IMACFD_InstrMonitorSet");

static InstructionMonitor *instrMonitor_add = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
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
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sub = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
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
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sll = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
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
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_xor = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
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
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_or = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
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
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_and = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
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
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_mul = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
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
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_rem = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
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
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 0 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_addi = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "addi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_slti = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "slti",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sltiu = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "sltiu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_xori = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "xori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_ori = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "ori",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_andi = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "andi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 1 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_slli = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "slli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_srli = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "srli",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_srai = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "srai",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 2 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lb = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "lb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_addr_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "load_address" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_rdata_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "res" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lh = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "lh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_addr_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "load_address" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_rdata_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "res" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lw = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "lw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_addr_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "load_address" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_rdata_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "res" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lbu = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "lbu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_addr_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "load_address" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_rdata_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "res" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lhu = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "lhu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 3 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_addr_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "load_address" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_rdata_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "res" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sb = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "sb",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_addr_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "store_address" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_wdata_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "mem_val_0" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sh = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "sh",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_addr_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "store_address" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_wdata_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "mem_val_0" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_sw = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "sw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 4 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_addr_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "store_address" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_mem_wdata_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "mem_val_0" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrw = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "csrrw",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_csr_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "csr_read(cpu, system, plugin_pointers, " << imm << ")" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrs = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "csrrs",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_csr_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "csr_read(cpu, system, plugin_pointers, " << imm << ")" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrc = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "csrrc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 5 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_csr_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "csr_read(cpu, system, plugin_pointers, " << imm << ")" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrwi = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "csrrwi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 6 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_csr_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "csr_read(cpu, system, plugin_pointers, " << imm << ")" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrsi = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "csrrsi",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 6 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_csr_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "csr_read(cpu, system, plugin_pointers, " << imm << ")" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_csrrci = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "csrrci",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 6 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    int imm = 0;
    static etiss::instr::BitArrayRange R_imm_0(31,20);
    imm += R_imm_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_csr_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "csr_read(cpu, system, plugin_pointers, " << imm << ")" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_beq = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "beq",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_jump_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bne = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "bne",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_jump_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_blt = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "blt",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_jump_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bge = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "bge",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_jump_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bltu = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "bltu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_jump_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_bgeu = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "bgeu",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rs2_data = 0;
    static etiss::instr::BitArrayRange R_rs2_data_0(24,20);
    rs2_data += R_rs2_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 7 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs2_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs2_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
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
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_jump_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_lui = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "lui",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_auipc = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "auipc",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 8 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor__def = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "_def",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 9 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_jal = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "jal",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 10 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_jump_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

static InstructionMonitor *instrMonitor_jalr = new InstructionMonitor(
  InstructionTrace_RV32IMACFD_InstrMonitorSet,
  "jalr",
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_typeId_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << 11 << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_code_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ba << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << ic.current_address_ << ";\n";
    
    ret_strs << "strcpy(InstructionTrace_RV32IMACFD_Monitor_assembly_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt],\"" << instr.printASM(ba) << "\");\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rs1_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rs1_data  << "]" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n"; // TODO: InstrCnt should be set in the post-print-function (see below). Currently set here, to makes sure that it is set, even if instruction triggers a return
    return ret_strs.str();
  },
  [](etiss::instr::BitArray &ba, etiss::instr::Instruction &instr, etiss::instr::InstructionContext &ic){
    std::stringstream ret_strs;
    
    int rs1_data = 0;
    static etiss::instr::BitArrayRange R_rs1_data_0(19,15);
    rs1_data += R_rs1_data_0.read(ba) << 0;
    int rd_data = 0;
    static etiss::instr::BitArrayRange R_rd_data_0(11,7);
    rd_data += R_rd_data_0.read(ba) << 0;
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt -= 1;\n"; // TODO: Hack! Needed as long as instrCnt is set by pre-print-function (see above)
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_rd_data_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "*((RV32IMACFD*)cpu)->X[" <<  rd_data  << "]" << ";\n";
    
    ret_strs << "InstructionTrace_RV32IMACFD_Monitor_jump_pc_buffer[*InstructionTrace_RV32IMACFD_Monitor_instrCnt] = " << "cpu->instructionPointer" << ";\n";
    ret_strs << "*InstructionTrace_RV32IMACFD_Monitor_instrCnt += 1;\n";
    return ret_strs.str();
  }
);

