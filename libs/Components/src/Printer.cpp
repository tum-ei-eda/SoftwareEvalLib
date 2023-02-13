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

#include "Printer.h"

#include <string>
#include <set>
#include <functional>
#include <iostream> // TODO: For debugging / info prints
#include <sstream>
#include <stdbool.h>

Printer::Printer(std::string name_, InstructionPrinterSet* instrPrinterSet_) : name(name_), instrPrinterSet(instrPrinterSet_)
{
    std::cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
    std::cout << "Creating printer: " << name << "\n";
    std::cout << " - Creating printer-function map:\n";

    instrPrinterSet->foreach([this](InstructionPrinter &instr)
    {

        auto it = instrPrinterFunc_map.find(instr.id);
        if(it != instrPrinterFunc_map.end())
        {
            std::cout << "\tERROR: Cannot add" << instr.id << ". ID already registered.\n";
            return;
        }
        instrPrinterFunc_map[instr.id] = instr.printerFunc;
        std::cout << "\tAdding instruction type " << instr.id << " to monitor-function map\n";

    });
    std::cout << "\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
}

void Printer::connectChannel(Channel* channel_)
{
    channel = channel_;
}

void Printer::setOutFile(std::string outDir_="", std::string fileName_="DUMP", int fileSize_=0x1000000)
{
  if(outDir_.compare("") != 0)
  {
    streamer.setOutFile(outDir_, fileName_, ".txt", fileSize_);
  }
}

void Printer::execute(void)
{
  for(int instr_i=0; instr_i < channel->instrCnt; instr_i++)
  {
    if (instrPrinterFunc_map[channel->typeId[instr_i]])
    {
      streamer.stream(instrPrinterFunc_map[channel->typeId[instr_i]](channel, instr_i) + "\n");
    }
  }
}

void Printer::finalize(void)
{
  streamer.closeStream();
}

void InstructionPrinterSet::addInstructionPrinter(InstructionPrinter* instrPrinter)
{
    instrPrinter_set.insert(instrPrinter);    
}

void InstructionPrinterSet::foreach(std::function<void(InstructionPrinter &)> func)
{
   for(auto it = instrPrinter_set.begin(); it != instrPrinter_set.end(); it++)
    {
       func(**it);
    }
}

InstructionPrinter::InstructionPrinter(InstructionPrinterSet* parent_, std::string type_, int id_, std::function<std::string(Channel*, int)> printerFunc_) :
    parentSet(parent_),
    type(type_),
    id(id_),
    printerFunc(printerFunc_)
{
    parentSet->addInstructionPrinter(this);
}

