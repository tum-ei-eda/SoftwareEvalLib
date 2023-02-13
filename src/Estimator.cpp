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

#include "Estimator.h"

#include "Components/Model.h"
#include "Components/Channel.h"

#include <iostream> // TODO: For debug purposes: Remove afterwards?? [Error and info prints?]
#include <sstream>
#include <iomanip>
#include <string>

void Estimator::activateStreaming(std::string outDir_="", int fileSize_=0x1000000)
{
  if(outDir_.compare("") != 0)
  {
    streamer.setOutFile(outDir_, "perfEst", ".txt", fileSize_);
  }
  streamer.openStream();
}

void Estimator::execute(void)
{

  model_ptr->newTrace();
  
  for(int instr_i=0; instr_i < channel_ptr->instrCnt; instr_i++)
  {
    model_ptr->callInstrTimeFunc(channel_ptr->typeId[instr_i]);    
    model_ptr->update();

    if(streamer.isActive())
    {
      std::stringstream out_strs;
      out_strs << globalInstrCnt + instr_i << model_ptr->getPipelineStream() << std::endl;
      streamer.stream(out_strs.str());
    }
  }

  globalInstrCnt += channel_ptr->instrCnt;
}

void Estimator::finalize(void)
{
  if(streamer.isActive())
  {
    streamer.closeStream();
  }
  
  int globalCycleCnt = model_ptr->getCycleCount();
  std::cout << "-----------------------------------------------------------------------------------------------------------------\n";
  std::cout << " >> Number of instructions: " << globalInstrCnt << "\n";
  std::cout << " >> Estimated number of processor cycles: " << globalCycleCnt << "\n";
  std::cout << " >> Estimated average number of processor cycles per instruction: " << ((float)globalCycleCnt/(float)globalInstrCnt) << "\n";
  std::cout << "-----------------------------------------------------------------------------------------------------------------\n";  
}
