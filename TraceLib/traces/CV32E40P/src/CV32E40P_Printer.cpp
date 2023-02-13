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

/********************* AUTO GENERATE FILE (create by Trace-Generator) *********************/

#include "CV32E40P_Printer.h"

#include "Components/Printer.h"

#include <iostream>
#include <iomanip>

extern InstructionPrinterSet* CV32E40P_InstrPrinterSet;

CV32E40P_Printer::CV32E40P_Printer(): Printer("CV32E40P_Printer", CV32E40P_InstrPrinterSet)
{}

void CV32E40P_Printer::initialize(void)
{
  std::stringstream caption_strs;	
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "rs1" << " | ";
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "rs2" << " | ";
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "rd" << " | ";
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "pc" << " | ";
  caption_strs << std::setfill(' ') << std::setw(10) << std::left << "brTarget" << " | ";

  streamer.openStream();
  streamer.stream(caption_strs.str() + "\n");
}