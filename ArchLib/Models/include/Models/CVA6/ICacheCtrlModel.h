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

#ifndef CVA6_ICACHE_CTRL_MODEL_H
#define CVA6_ICACHE_CTRL_MODEL_H

#include "Components/Model.h"

class ICacheCtrlModel : public ConnectorModel
{
public:
  ICacheCtrlModel(PerformanceModel* parent_) : ConnectorModel("ICacheCtrlModel", parent_), parent(parent_) {};

  //int getIC(void) { return IC; };
  //void setIC(int);

  int getIC_c(void) { return IC; };
  void setIC_b(int);
  
private:
  PerformanceModel* const parent;
  int IC = 0;
};

#endif // CVA6_ICACHE_CTRL_MODEL_H
