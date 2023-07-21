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

#ifndef CVA6_DCACHE_MODEL_H
#define CVA6_DCACHE_MODEL_H

#include "Components/Model.h"

class DCacheModel : public ResourceModel
{
public:
  DCacheModel(PerformanceModel* parent_) : ResourceModel("DCacheModel", parent_), parentModel(parent_){};
  int getDelay(void);
  int getStoreDelay(void);
  int wasMiss(void);
  int* addr_ptr;

protected:
  int getInstrIndex() { return parentModel->instrIndex; };
  
private:
  bool inCache(void);
  bool notCachable(void);
  virtual int lfsr(void);
  int associativity = 8;
  int tag_cache[8][256] = {0}; // cache size of 32 kBytes, split over 8 ways
  bool valid_cache[8][256] = {false};
  int begin;
  int end;
  int cache_delay = 1;
  int mem_delay = 6;
  int miss = 0;

  std::map<int, int> blockedAddresses;

  PerformanceModel* const parentModel;
};

#endif //CVA6_DCACHE_MODEL_H
