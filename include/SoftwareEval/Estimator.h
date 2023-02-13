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

#ifndef ESTIMATOR_H
#define ESTIMATOR_H

#include "Components/Model.h"
#include "Components/Channel.h"
#include "Components/Streamer.h"

// TODO: Clean up! Any of these still used?
#include <cstdint>
#include <map>
#include <functional>
#include <utility>
#include <string>
#include <array>
#include <stdbool.h>
#include <fstream>

class Estimator
{
public:
  Estimator(){};
  ~Estimator()=default;
  
  void setPerformanceModel(PerformanceModel* model_) { model_ptr = model_; };
  void setChannel(Channel* channel_) { channel_ptr = channel_; };
  void activateStreaming(std::string, int);
  void execute(void);
  void finalize(void);
  
private:

  Channel* channel_ptr;
  PerformanceModel* model_ptr;

  Streamer streamer;
  
  uint64_t globalInstrCnt = 0;

};

#endif // ESTIMATOR_H
