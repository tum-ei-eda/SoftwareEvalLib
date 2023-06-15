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

#ifndef TRACER_PLUGIN_H
#define TRACER_PLUGIN_H

#include "monitors/Monitor.h"

#include "etiss/Plugin.h"
#include "etiss/CodePart.h" // CodeBlock
#include "etiss/Instruction.h" // ModedInstructionSet

#include <string>
#include <set>

namespace etiss
{

namespace plugin
{

namespace TracerPlugin
{
  
class TracerPlugin : public TranslationPlugin, public CoroutinePlugin
{
public:
  TracerPlugin();
  ~TracerPlugin();

  virtual void finalizeInstrSet(instr::ModedInstructionSet &) const;
  virtual void initCodeBlock(CodeBlock &) const;
  virtual int32 execute(void);
  virtual void executionEnd(int32_t);
  virtual std::string _getPluginName() const;
  virtual void *getPluginHandle();

private:
  std::set<Monitor*> monitor_set;
  
  virtual void processTrace(void) = 0;
  virtual void finalizeTrace(void) = 0;
  
protected:
  void addMonitor(Monitor*);
  
};

} // namespace TracerPlugin
 
} // namespace plugin
  
} // namespace etiss

#endif // TRACER_PLUGIN_H
