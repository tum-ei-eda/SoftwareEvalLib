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

#ifndef CVA6_CHANNEL_H
#define CVA6_CHANNEL_H

#include "Components/Channel.h"

class CVA6_Channel: public Channel
{
public:

  CVA6_Channel() {};
  ~CVA6_Channel() {};

  int rs1 [100];
  int rs2 [100];
  int rd [100];
  int pc [100];
  int brTarget [100];
};

#endif // CVA6_CHANNEL_H