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

#ifndef CVA6_ICACHE_MODEL_H
#define CVA6_ICACHE_MODEL_H

#include "Components/Model.h"

class ICacheModel : public ResourceModel
{
public:
  ICacheModel(PerformanceModel* parent_) : ResourceModel("ICacheModel", parent_), parentModel(parent_) {};
  int getDelay(void);
  //void setCacheCtrl(int);
  //int getCacheCtrl(void) { return availability; };
  int* addr_ptr;
  int wasMiss(void);

protected:
  int getInstrIndex() { return parentModel->instrIndex; };
  
private:
  bool inCache(void);
  bool notCachable(void);
  virtual int lfsr(void);
  int associativity = 4;
  int tag_cache[4][256] = {0}; // cache size of 16 kBytes, split over 4 ways
  bool valid_cache[4][256] = {false};
  int cache_delay = 1;
  int mem_delay = 5;
  bool was_miss = true;
  int availability = 0;

  PerformanceModel* const parentModel;
};

#endif //CVA6_ICACHE_MODEL_H
