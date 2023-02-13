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

#ifndef TRACE_PRINTER_PLUGIN_H
#define TRACE_PRINTER_PLUGIN_H

#include "TracerPlugin.h"

#include "etiss/Misc.h" // Use Configuration

#include "Components/Channel.h" // TODO: Test purpose, remove
#include "Components/Printer.h"

#include "TraceLib/TraceFactory.h"

#include <string>
#include <stdbool.h>
#include <set>

class TracePrinterPlugin: public etiss::plugin::TracerPlugin::TracerPlugin
{
public:
  TracePrinterPlugin(etiss::Configuration*);
  ~TracePrinterPlugin();

  virtual std::string _getPluginName() const;
  virtual void *getPluginHandle();

private:  

  TraceFactory factory;

  std::set<Printer*> printer_set;

  void addPrinter(Printer*);

  virtual void processTrace(void);
  bool firstTraceProcess = true;

  virtual void finalizeTrace(void);
  
};

#endif // TRACE_PRINTER_PLUGIN_H
