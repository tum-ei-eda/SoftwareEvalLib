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

#ifndef COMPONENT_STREAMER_H
#define COMPONENT_STREAMER_H

#include <stdbool.h>
#include <fstream>
#include <string>

class Streamer
{
 public:
  
  Streamer(){};
  ~Streamer()=default;

  void setOutFile(std::string, std::string, std::string, int);
  void setHeader(std::string in_) { fileHeader = in_; } ;
  void stream(std::string);
  void openStream(void);
  void closeStream(void);
  bool isActive(void) { return activated; };
  
 private:
  
  bool activated = false;
  bool streamToFile = false;
  std::ofstream outFile;
  int fileIndex = 0;
  std::string fileNameBase;
  std::string filePostfix;
  std::string outDir;
  int maxFileSize;
  std::string fileHeader = "\n";

  std::string getFileName(void);
  void swapOutFile(void);
};

#endif //COMPONENT_STREAMER_H
