/*
 * Copyright 2026 Chair of EDA, Technical University of Munich
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

 #include "BlockExtractorPlugin.h"

#include "monitors/Monitor.h"

#include <string>
#include <sstream>
#include <stdbool.h>
#include <iostream> // TODO: For debug purposes: Remove afterwards?? [Error and info prints?]

BlockExtractorPlugin::BlockExtractorPlugin(etiss::Configuration* config)
{
  
  // Get config data
  std::string uArchName = config->get<std::string>("plugin.blockExt.uArch", "");
  
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

  // Get Channel & MAPExplorer
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
    extractor_ptr = backendFactory.getBlockExtractor(backendHandle);
    if (extractor_ptr == nullptr)
    {
      std::cout << "ERROR: SwEvalBackends::Factory failed to provide performance-estimator for <" << uArchName << ">" << std::endl;
    }
  }
  
  // TODO: Add error handling in case any of the above "gets" fails
  std::cout << "COFO" << std::endl;
  
  // Connect components
  extractor_ptr->connectChannel(channel_ptr);
  monitor_ptr->connectChannel(channel_ptr);
  
  // Add monitor to TracerPlugin
  addMonitor(monitor_ptr);

  // Configure and initialize backends
  extractor_ptr->initialize();
  
}

BlockExtractorPlugin::~BlockExtractorPlugin()
{
  delete channel_ptr;
  delete extractor_ptr;
}

std::string BlockExtractorPlugin::_getPluginName() const
{
  return "BlockExtractorPlugin";
}

void *BlockExtractorPlugin::getPluginHandle()
{
  return this;
}

void BlockExtractorPlugin::processTrace(void)
{
  extractor_ptr->execute();
}

void BlockExtractorPlugin::finalizeTrace(void)
{
  extractor_ptr->execute();
  extractor_ptr->finalize();
}