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

#ifndef PERFORMANCE_ESTIMATOR_PLUGIN_H
#define PERFORMANCE_ESTIMATOR_PLUGIN_H

#include "TracerPlugin.h"

#include "etiss/Misc.h" // Use Configuration

#include "softwareEval-backends/Factory.h"
#include "softwareEval-backends/Channel.h"
#include "softwareEval-backends/Backend.h"

#include "monitors/Factory.h"

#include <string>
#include <stdbool.h>

class PerformanceEstimatorPlugin : public etiss::plugin::TracerPlugin::TracerPlugin
{
public:
  PerformanceEstimatorPlugin(etiss::Configuration*);
  ~PerformanceEstimatorPlugin();

  virtual std::string _getPluginName() const;
  virtual void *getPluginHandle();

private:  

  SwEvalBackends::Factory backendFactory;
  SwEvalMonitors::Factory monitorFactory;
  Channel* channel_ptr;
  Backend* estimator_ptr;
  Backend* tracePrinter_ptr;

  bool printActive;
  
  virtual void processTrace(void);
  virtual void finalizeTrace(void);
  
};

#endif // PERFORMANCE_ESTIMATOR_PLUGIN_H
