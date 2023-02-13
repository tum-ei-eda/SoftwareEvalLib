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

#ifndef STANDARD_REGISTER_MODEL_H
#define STANDARD_REGISTER_MODEL_H

#include "Components/Model.h"

class StandardRegisterModel : public ConnectorModel
{
public:
  StandardRegisterModel(PerformanceModel* parent_) : ConnectorModel("StandardRegisterModel", parent_) {};

  int* rs1_ptr;
  int* rs2_ptr;
  int* rd_ptr;

  int getXa(void){ return registerModel[rs1_ptr[getInstrIndex()]]; };
  int getXb(void){ return registerModel[rs2_ptr[getInstrIndex()]]; };
  void setXd(int xd_) { registerModel[rd_ptr[getInstrIndex()]] = xd_; };

private:
  int registerModel [64] = {0};
};

#endif //STANDARD_REGISTER_PREDICT_MODEL_H
