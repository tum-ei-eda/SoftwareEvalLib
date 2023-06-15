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

#define ETISS_LIBNAME SoftwareEval

//#include "TracePrinterPlugin.h"
#include "PerformanceEstimatorPlugin.h"

#include "etiss/Plugin.h"
#include "etiss/Misc.h" // Configuration
#include "etiss/helper/PluginLibrary.h"

#include <string>

extern "C"
{

  ETISS_LIBRARYIF_VERSION_FUNC_IMPL

  unsigned SoftwareEval_countPlugin()
  {
    //return 2;
    return 1;
  }

  const char * SoftwareEval_namePlugin(unsigned index)
  {
    switch(index)
    {
    case 0:
//      return "TracePrinterPlugin";
//    case 1:
      return "PerformanceEstimatorPlugin";
    default:
      return "0";
    }
  }
  
  etiss::Plugin * SoftwareEval_createPlugin(unsigned index, std::map<std::string,std::string> options)
  {
    etiss::Configuration cfg;
    cfg.config() = options;
    switch(index)
    {
    case 0:
//      return new TracePrinterPlugin(&cfg);
//    case 1:
      return new PerformanceEstimatorPlugin(&cfg);
    default:
      return 0;
    }
  }

  void SoftwareEval_deletePlugin(etiss::Plugin * ptr)
  {
    delete ptr;
  }
  
} // extern C
