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

#ifndef NO_BRANCH_PREDICT_MODEL_H
#define NO_BRANCH_PREDICT_MODEL_H

#include "Components/Model.h"

#include <stdbool.h>

class NoBranchPredictModel : public ConnectorModel
{
public:
    NoBranchPredictModel(PerformanceModel* parent_) : ConnectorModel("NoBranchPredictModel", parent_) {};

    void setPc_np(int pc_np_) { pc = pc_np_; };
    int getPc(void) { return pc; };
    
private:
    int pc = 0;
};

#endif //NO_BRANCH_PREDICT_MODEL_H
