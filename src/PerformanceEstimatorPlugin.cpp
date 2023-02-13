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

#include "Components/Monitor.h"
#include "Components/Channel.h"
#include "Components/Model.h"

#include <string>
#include <iostream> // TODO: For debug purposes: Remove afterwards?? [Error and info prints?]

PerformanceEstimatorPlugin::PerformanceEstimatorPlugin(etiss::Configuration* config)
{
  
  // Get config data
  std::string uArchName = config->get<std::string>("plugin.perfEst.uArch", "");

  std::cout << "uArch is: " << uArchName << std::endl;
  
  // Set up monitor
  int traceHandle = traceFactory.getTraceHandle(uArchName);
  if (traceHandle < 0)
  {
    std::cout << "ERROR: Trace-Handle is invalid" << std::endl;
  }

  Monitor* monitor_ptr = traceFactory.getMonitor(traceHandle);
  Channel* channel_ptr = traceFactory.getChannel(traceHandle);

  monitor_ptr->connectChannel(channel_ptr);
  addMonitor(monitor_ptr);

  // Set up estimator model
  int uArchHandle = uArchFactory.getMicroArchHandle(uArchName);
  if(uArchHandle < 0)
  {
    std::cout << "ERROR: MicroArchitecture-Handle is invalid" << std::endl;
  }

  PerformanceModel* model_ptr = uArchFactory.getPerformanceModel(uArchHandle);
 
  model_ptr->connectChannel(channel_ptr);
  estimator.setChannel(channel_ptr);
  estimator.setPerformanceModel(model_ptr);
  //estimator.activateStreaming("/data/work/testDUMP.txt");
  
}

PerformanceEstimatorPlugin::~PerformanceEstimatorPlugin()
{}

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
  estimator.execute();
}

void PerformanceEstimatorPlugin::finalizeTrace(void)
{
  estimator.execute();
  estimator.finalize();
}
