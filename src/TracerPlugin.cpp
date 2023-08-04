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

#include "TracerPlugin.h"

#include "monitors/Monitor.h"

#include "etiss/CodePart.h"
#include "etiss/Instruction.h"

#include <string>
#include <iostream> // TODO: For debug purposes: Remove afterwards!!

namespace etiss
{

namespace plugin
{

namespace TracerPlugin
{

TracerPlugin::TracerPlugin()
{} 

TracerPlugin::~TracerPlugin() {} // TODO: Remove?

void TracerPlugin::initCodeBlock(CodeBlock & block) const
{ 
  for(auto monitor_i = monitor_set.begin(); monitor_i != monitor_set.end(); monitor_i++)
  {
    block.fileglobalCode().insert((*monitor_i)->getBlockDeclarations());
  }
}

void TracerPlugin::finalizeInstrSet(instr::ModedInstructionSet &mis) const
{

  mis.foreach ([this](etiss::instr::VariableInstructionSet &vis)
  {
    vis.foreach ([this](etiss::instr::InstructionSet &set)
    {
      set.foreach ([this](etiss::instr::Instruction &instr)
      {
        instr.addCallback([&instr, this](etiss::instr::BitArray &ba, etiss::CodeSet &cs, etiss::instr::InstructionContext &ic)
        {
	  std::stringstream preCode_strs;
          for(auto monitor_i = monitor_set.begin(); monitor_i != monitor_set.end(); monitor_i++)
          {
	    preCode_strs << (*monitor_i)->getPreInstrCallback(instr, ba, ic);
          }

	  std::stringstream postCode_strs;
          for(auto monitor_i = monitor_set.begin(); monitor_i != monitor_set.end(); monitor_i++)
          {
	    postCode_strs << (*monitor_i)->getPostInstrCallback(instr, ba, ic);
          }

          cs.append(CodePart::PREINITIALDEBUGRETURNING).code() = preCode_strs.str();
	  cs.append(CodePart::INITIALREQUIRED).code() = postCode_strs.str();
	  	    
	  return true;
	},0);
      });
    });
  });

}

int32 TracerPlugin::execute(void)
{  
  processTrace();


  // TODO: Remove monitor-set, use single monitor instead?
  for(auto monitor_i = monitor_set.begin(); monitor_i != monitor_set.end(); monitor_i++)
  {
    (*monitor_i)->resetCounter();
  }
  
  return 0;
}

void TracerPlugin::executionEnd(int32_t code)
{
  finalizeTrace();

  for(auto monitor_i = monitor_set.begin(); monitor_i != monitor_set.end(); monitor_i++)
  {
    (*monitor_i)->resetCounter();
  }
}
  
std::string TracerPlugin::_getPluginName() const
{
  return "TracerPlugin";
}

void *TracerPlugin::getPluginHandle()
{
  return this;
}

void TracerPlugin::addMonitor(Monitor* monitor_){
    monitor_set.insert(monitor_);
    std::cout << "Adding Monitor: " << monitor_->name << std::endl;
}

} // namespace TracerPlugin
} // namespace plugin
} // namespace etiss
