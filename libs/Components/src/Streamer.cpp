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

#include "Components/Streamer.h"

#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>

void Streamer::setOutFile(std::string outDir_, std::string fileName_, std::string postfix_, int fileSize_)
{
  streamToFile = true;
  outDir = outDir_;
  fileNameBase = fileName_;
  filePostfix = postfix_;
  maxFileSize = fileSize_;
  
}

void Streamer::stream(std::string in_)
{
  if(!activated)
  {
    return;
  }

  if(!streamToFile)
  {
    std::cout << in_;
  }
  else
  {
    outFile << in_;
    if (outFile.tellp() > maxFileSize)
    {
      swapOutFile();
    }
  }
}

void Streamer::openStream(void)
{
  activated = true;

  if(streamToFile)
  {
    outFile.open(getFileName());
  }
  stream(fileHeader);
}

void Streamer::closeStream(void)
{
  activated = false;

  if(streamToFile)
  {
    outFile.close();
  }
}

void Streamer::swapOutFile(void)
{
  outFile.close();
  fileIndex += 1;
  outFile.open(getFileName());
  stream(fileHeader);
}

std::string Streamer::getFileName(void)
{
  std::stringstream fileName;
  fileName << outDir << "/" << fileNameBase << "_" << std::setw(3) << std::setfill('0') << fileIndex << filePostfix;
  return fileName.str();
}
