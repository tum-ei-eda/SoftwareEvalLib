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

#include "monitors/Monitor.h"

#include <string>
#include <iostream> // TODO: For debug purposes: Remove afterwards?? [Error and info prints?]
#include <stdbool.h>

TracePrinterPlugin::TracePrinterPlugin(etiss::Configuration* config)
{
  // Get config data
  std::string traceName = config->get<std::string>("plugin.tracePrinter.trace", "");
  bool streamToFile = (bool)config->get<int>("plugin.tracePrinter.stream.toFile", false);
  std::string outDirName = config->get<std::string>("plugin.tracePrinter.stream.outDir", "");
  std::string outFileName = config->get<std::string>("plugin.tracePrinter.stream.fileName", traceName);
  std::string outFilePostfix = config->get<std::string>("plugin.tracePrinter.stream.postfix", ".txt");
  int maxFileSize = config->get<int>("plugin.tracePrinter.stream.rotateSize", 0x1000000);

  // Get monitor
  Monitor* monitor_ptr = nullptr;
  int monitorHandle = monitorFactory.getVariantHandle(traceName);
  if (monitorHandle < 0)
  {
    std::cout << "ERROR: <" << traceName << "> does not name a valid variant provided by SwEvalMonitors::Factory" << std::endl;
  }
  else
  {
    monitor_ptr = monitorFactory.getMonitor(monitorHandle);
    if (monitor_ptr == nullptr)
    {
      std::cout << "ERROR: SwEvalMonitors::Factory failed to provide monitor for <" << traceName << ">" << std::endl;
    }
  }

  // Get Channel & PerformanceEstimator
  int backendHandle = backendFactory.getVariantHandle(traceName);
  if (backendHandle < 0)
  {
    std::cout << "ERROR: <" << traceName << "> does not name a valid variant provided by SwEvalBackends::Factory" << std::endl;
  }
  else
  {
    channel_ptr = backendFactory.getChannel(backendHandle);
    if (channel_ptr == nullptr)
    {
      std::cout << "ERROR: SwEvalBackends::Factory failed to provide channel for <" << traceName << ">" << std::endl;
    }
    tracePrinter_ptr = backendFactory.getTracePrinter(backendHandle);
    if (tracePrinter_ptr == nullptr)
    {
      std::cout << "ERROR: SwEvalBackends::Factory failed to provide trace-printer for <" << traceName << ">" << std::endl;
    }
  }

  // TODO: Add error handling in case any of the above "gets" fails

  // Connect components
  tracePrinter_ptr->connectChannel(channel_ptr);
  monitor_ptr->connectChannel(channel_ptr);
  
  // Add monitor to TracePlugin
  addMonitor(monitor_ptr);

  // Configure printer and initialize it
  if(streamToFile)
  {
    tracePrinter_ptr->activateStreamToFile(outFileName, outDirName, outFilePostfix, maxFileSize);
  }
  else
  {
    tracePrinter_ptr->activateStreamToCout();
  }
  tracePrinter_ptr->initialize();
  
}

TracePrinterPlugin::~TracePrinterPlugin()
{
  delete channel_ptr;
  delete tracePrinter_ptr;
}

std::string TracePrinterPlugin::_getPluginName() const
{
  return "TracePrinterPlugin";
}

void *TracePrinterPlugin::getPluginHandle()
{
  return this;
}

//void TracePrinterPlugin::addPrinter(Printer* printer_)
//{
//  printer_set.insert(printer_);
//}

//void TracePrinterPlugin::processTrace(void)
//{ 
//  // TODO: Remove multi printer handling?
//  for(auto printer_i = printer_set.begin(); printer_i != printer_set.end(); printer_i++)
//  {
//    if(firstTraceProcess)
//    {
//      firstTraceProcess = false;
//      (*printer_i)->initialize();
//    }
//    (*printer_i)->execute();
//  }
//}

void TracePrinterPlugin::processTrace(void)
{
  tracePrinter_ptr->execute();
}

//void TracePrinterPlugin::finalizeTrace(void)
//{ 
//  // TODO: Remove multi printer handling?
//  for(auto printer_i = printer_set.begin(); printer_i != printer_set.end(); printer_i++)
//  {
//    (*printer_i)->execute();
//    (*printer_i)->finalize();
//  }
//}

void TracePrinterPlugin::finalizeTrace(void)
{
  tracePrinter_ptr->execute();
  tracePrinter_ptr->finalize();
}
