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

#ifndef COMPONENT_PRINTER_H
#define COMPONENT_PRINTER_H

#include "Components/Channel.h"
#include "Components/Streamer.h"

#include <string>
#include <functional>
#include <map>
#include <set>
#include <stdbool.h>
#include <iostream> // TODO: For debugging / info prints
#include <fstream>

class InstructionPrinterSet;

class Printer
{
public:
    Printer(std::string, InstructionPrinterSet*);
    virtual ~Printer() = default;

    const std::string name;

    virtual void connectChannel(Channel*);
    void setOutFile(std::string, std::string, int);
  
    virtual void initialize(void) = 0;
    void execute(void);
    void finalize(void);
  
private:
    InstructionPrinterSet* const instrPrinterSet;
    std::map<int, std::function<std::string(Channel*, int)>> instrPrinterFunc_map;
    Channel* channel; // TODO: Member of Printer?
  
protected:
    Streamer streamer;
};

class InstructionPrinter;

class InstructionPrinterSet
{
public:
    InstructionPrinterSet(std::string name_) : name(name_) {};
    const std::string name;
    void addInstructionPrinter(InstructionPrinter*);
    void foreach(std::function<void(InstructionPrinter &)>);
private:
    std::set<InstructionPrinter*> instrPrinter_set;
};

class InstructionPrinter
{
public:
    InstructionPrinter(InstructionPrinterSet*, std::string,  int, std::function<std::string(Channel*, int)>);
    ~InstructionPrinter(); // TODO: Remove unused Destructors (All over the place)
    
    const std::string type;
    const int id;
    const std::function<std::string(Channel*, int)> printerFunc;

private:
    InstructionPrinterSet* const parentSet;
};

#endif //COMPONENT_PRINTER_H
