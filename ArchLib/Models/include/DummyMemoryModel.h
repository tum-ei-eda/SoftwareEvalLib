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

// TODO: Can delete this model! It always returns delay of 1 (i.e. easily replaced by static resource). Just used to test autogeneration tool.

#ifndef DUMMY_MEMORY_MODEL_H
#define DUMMY_MEMORY_MODEL_H

#include "Components/Model.h"

class DummyMemoryModel : public ResourceModel
{
public:
  DummyMemoryModel(PerformanceModel* parent_) : ResourceModel("DummyMemoryModel", parent_) {};

  int getDelay(void) {return 1;};

};

#endif //DUMMY_MEMORY_MODEL_H
