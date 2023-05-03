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

#include "Models/CVA6/DCacheCtrlModel.h"

#include "CVA6_Model.h"
#include "Models/CVA6/DCacheModel.h"

void DCacheCtrlModel::setLSU_b(int is_)
{
  int n_1 = is_ + 1;
  int n_2 = max_3(n_1, LSUQ[maxLSUQ]+1, cache_ready);
  minLSUQ = (minLSUQ + 1) % 2;
  maxLSUQ = (maxLSUQ + 1) % 2;
  LSUQ[maxLSUQ] = n_2;

  ctrl_flag = LSUQ[minLSUQ];
}

// TODO: Avoid accessing another model, or find more generic variant
void DCacheCtrlModel::setLU_b(int ready_)
{
  CVA6_Model* perfModel = static_cast<CVA6_Model*>(parent);
  cache_ready = ready_ - 1 + perfModel->dCModel.wasMiss();
}

// TODO: Avoid accessing another model, or find more generic variant
void DCacheCtrlModel::setSU_b(int store_)
{
  CVA6_Model* perfModel = static_cast<CVA6_Model*>(parent);
  perfModel->dCModel.getStoreDelay();
}
