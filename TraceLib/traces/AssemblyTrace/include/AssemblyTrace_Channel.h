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

/********************* AUTO GENERATE FILE (create by Trace-Generator) *********************/

#ifndef ASSEMBLYTRACE_CHANNEL_H
#define ASSEMBLYTRACE_CHANNEL_H

#include "Components/Channel.h"

class AssemblyTrace_Channel: public Channel
{
public:

  AssemblyTrace_Channel() {};
  ~AssemblyTrace_Channel() {};

  int pc [100];
  char assembly [100] [50];
};

#endif // ASSEMBLYTRACE_CHANNEL_H