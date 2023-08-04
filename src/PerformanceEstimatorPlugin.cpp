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

#include "PerformanceEstimatorPlugin.h"

#include "monitors/Monitor.h"

#include <string>
#include <sstream>
#include <stdbool.h>
#include <iostream> // TODO: For debug purposes: Remove afterwards?? [Error and info prints?]

PerformanceEstimatorPlugin::PerformanceEstimatorPlugin(etiss::Configuration* config)
{
  
  // Get config data
  std::string uArchName = config->get<std::string>("plugin.perfEst.uArch", "");
  printActive = (bool)config->get<int>("plugin.perfEst.print", false);
  std::string outDir = config->get<std::string>("plugin.perfEst.printDir", "");
  
  // Get monitor
  Monitor* monitor_ptr = nullptr;
  int monitorHandle = monitorFactory.getVariantHandle(uArchName);
  if (monitorHandle < 0)
  {
    std::cout << "ERROR: <" << uArchName << "> does not name a valid variant provided by SwEvalMonitors::Factory" << std::endl;
  }
  else
  {
    monitor_ptr = monitorFactory.getMonitor(monitorHandle);
    if (monitor_ptr == nullptr)
    {
      std::cout << "ERROR: SwEvalMonitors::Factory failed to provide monitor for <" << uArchName << ">" << std::endl;
    }
  }

  // Get Channel & PerformanceEstimator
  int backendHandle = backendFactory.getVariantHandle(uArchName);
  if (backendHandle < 0)
  {
    std::cout << "ERROR: <" << uArchName << "> does not name a valid variant provided by SwEvalBackends::Factory" << std::endl;
  }
  else
  {
    channel_ptr = backendFactory.getChannel(backendHandle);
    if (channel_ptr == nullptr)
    {
      std::cout << "ERROR: SwEvalBackends::Factory failed to provide channel for <" << uArchName << ">" << std::endl;
    }
    estimator_ptr = backendFactory.getPerformanceEstimator(backendHandle);
    if (estimator_ptr == nullptr)
    {
      std::cout << "ERROR: SwEvalBackends::Factory failed to provide performance-estimator for <" << uArchName << ">" << std::endl;
    }
    if(printActive)
    {
      tracePrinter_ptr = backendFactory.getTracePrinter(backendHandle);
      if (tracePrinter_ptr == nullptr)
      {
	std::cout << "ERROR: SwEvalBackends::Factory failed to provide trace-printer for <" << uArchName << ">" << std::endl;
      }
    }
  }
  
  // TODO: Add error handling in case any of the above "gets" fails
  
  // Connect components
  estimator_ptr->connectChannel(channel_ptr);
  monitor_ptr->connectChannel(channel_ptr);
  if(printActive)
  {
    tracePrinter_ptr->connectChannel(channel_ptr);
  }
  
  // Add monitor to TracerPlugin
  addMonitor(monitor_ptr);

  // Configure and initialize backends
  if(printActive)
  {
    std::stringstream estimateFileName;
    estimateFileName << uArchName << "_timing";
    std::stringstream traceFileName;
    traceFileName << uArchName << "_trace";
    int maxFileSize = 0x1000000;
    estimator_ptr->activateStreamToFile(estimateFileName.str(), outDir, ".csv", maxFileSize);
    tracePrinter_ptr->activateStreamToFile(traceFileName.str(), outDir, ".csv", maxFileSize);
    tracePrinter_ptr->initialize();
  }
  estimator_ptr->initialize();
  
}

PerformanceEstimatorPlugin::~PerformanceEstimatorPlugin()
{
  delete channel_ptr;
  delete estimator_ptr;
  delete tracePrinter_ptr;
}

std::string PerformanceEstimatorPlugin::_getPluginName() const
{
  return "PerformanceEstimatorPlugin";
}

void *PerformanceEstimatorPlugin::getPluginHandle()
{
  return this;
}

void PerformanceEstimatorPlugin::processTrace(void)
{
  estimator_ptr->execute();
  if(printActive)
  {
    tracePrinter_ptr->execute();
  }
}

void PerformanceEstimatorPlugin::finalizeTrace(void)
{
  estimator_ptr->execute();
  estimator_ptr->finalize();
  if(printActive)
  {
    tracePrinter_ptr->execute();
    tracePrinter_ptr->finalize();
  }
}
