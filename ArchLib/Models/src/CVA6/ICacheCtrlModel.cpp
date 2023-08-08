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

#include "Models/CVA6/ICacheCtrlModel.h"

#include "CVA6_Model.h"
#include "Models/CVA6/ICacheModel.h"

// TODO: Avoid accessing another model, or find more generic variant
void ICacheCtrlModel::setIC_b(int IC_)
{
  CVA6_Model* perfModel = static_cast<CVA6_Model*>(parent);
  //IC = IC_ - 1 + perfModel->iCModel.wasMiss(); 
}
