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

#ifndef CVA6_DCACHE_CTRL_MODEL_H
#define CVA6_DCACHE_CTRL_MODEL_H

#include "Components/Model.h"

class DCacheCtrlModel : public ConnectorModel
{
public:
  DCacheCtrlModel(PerformanceModel* parent_) : ConnectorModel("DCacheCtrlModel", parent_), parent(parent_) {};

  //int getReady(void) { return ctrl_flag; }; // LSU_c
  //void setReady(int); // LSU_b
  //void setCache(int); // LU_b
  //void setStoreBlock(int); // SU_b

  int getLSU_c(void) { return ctrl_flag; };
  void setLSU_b(int);
  void setLU_b(int);
  void setSU_b(int);
  
private:
  int LSUQ[2] = {0};
  int minLSUQ = 0;
  int maxLSUQ = 1;
  int SQ[4] = {0};
  int minSQ = 0;
  int maxSQ = 3;
  int CQ[4] = {0};
  int minCQ = 0;
  int maxCQ = 3;
  int MQ[4] = {0};
  int minMQ = 0;
  int maxMQ = 3;

  int cache_ready = 0;

  int ctrl_flag = 0;

  PerformanceModel* const parent;
};

#endif //CVA6_DCACHE_CTRL_MODEL_H
