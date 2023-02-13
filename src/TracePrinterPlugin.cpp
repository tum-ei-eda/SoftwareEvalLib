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

#include "TracePrinterPlugin.h"

#include "Components/Monitor.h"
#include "Components/Channel.h"
#include "Components/Printer.h"

#include "TraceLib/TraceFactory.h"

#include <string>
#include <iostream> // TODO: For debug purposes: Remove afterwards?? [Error and info prints?]
#include <stdbool.h>

TracePrinterPlugin::TracePrinterPlugin(etiss::Configuration* config)
{
  std::string traceName = config->get<std::string>("plugin.tracePrinter.trace", "");
  bool streamToFile = (bool)config->get<int>("plugin.tracePrinter.stream.toFile", false);
  std::string outDirName = config->get<std::string>("plugin.tracePrinter.stream.outDir", "");
  std::string outFileName = config->get<std::string>("plugin.tracePrinter.stream.fileName", traceName);
  int maxFileSize = config->get<int>("plugin.tracePrinter.stream.rotateSize", 0x1000000);

  int traceHandle = factory.getTraceHandle(traceName);
  if(traceHandle < 0)
  {
    std::cout << "ERROR: Trace-Handle(" << traceHandle << ") is invalid" << std::endl;
  }
  else
  {
    Monitor* monitor_ptr = factory.getMonitor(traceHandle);
    Channel* channel_ptr = factory.getChannel(traceHandle);
    Printer* printer_ptr = factory.getPrinter(traceHandle);

    if(streamToFile)
    {
      printer_ptr->setOutFile(outDirName, outFileName, maxFileSize);
    }
        
    monitor_ptr->connectChannel(channel_ptr);
    printer_ptr->connectChannel(channel_ptr);

    addMonitor(monitor_ptr);
    addPrinter(printer_ptr);    
  }  
}

TracePrinterPlugin::~TracePrinterPlugin()
{}

std::string TracePrinterPlugin::_getPluginName() const
{
  return "TracePrinterPlugin";
}

void *TracePrinterPlugin::getPluginHandle()
{
  return this;
}

void TracePrinterPlugin::addPrinter(Printer* printer_)
{
  printer_set.insert(printer_);
}

void TracePrinterPlugin::processTrace(void)
{ 
  // TODO: Remove multi printer handling?
  for(auto printer_i = printer_set.begin(); printer_i != printer_set.end(); printer_i++)
  {
    if(firstTraceProcess)
    {
      firstTraceProcess = false;
      (*printer_i)->initialize();
    }
    (*printer_i)->execute();
  }
}

void TracePrinterPlugin::finalizeTrace(void)
{ 
  // TODO: Remove multi printer handling?
  for(auto printer_i = printer_set.begin(); printer_i != printer_set.end(); printer_i++)
  {
    (*printer_i)->execute();
    (*printer_i)->finalize();
  }
}
