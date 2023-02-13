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

#ifndef COMPONENT_MODEL_H
#define COMPONENT_MODEL_H

#include "Channel.h"

#include <string>
#include <set>
#include <map>
#include <list>
#include <functional>
#include <stdbool.h>

#include <iostream> // TODO: For debug. Remove

// TODO: Good placement in this header file? Move somewhere else?
inline int max_2(int a, int b)
{
    return (a > b) ? a : b;
}

inline int max_3(int a, int b, int c)
{
    int temp_ab;
    temp_ab = max_2(a, b);
    return max_2(temp_ab, c);
}

inline int max_4(int a, int b, int c, int d)
{
    int temp_ab;
    int temp_cd;
    temp_ab = max_2(a,b);
    temp_cd = max_2(c,d);
    return max_2(temp_ab, temp_cd);
}

struct stage
{
    int cnt = 0;
    std::string name;
    stage(std::string name_) : name(name_) {};
};

class InstructionModelSet;

class PerformanceModel
{
public:
    PerformanceModel(std::string, InstructionModelSet*);
    virtual ~PerformanceModel() = default;

    const std::string name;

    void update(void) { instrIndex++; };
    void newTrace(void) { instrIndex = 0; };
    void callInstrTimeFunc(int);

    virtual void connectChannel(Channel*) = 0;
    virtual int getCycleCount(void) = 0;

    virtual std::string getPipelineStream(void) = 0;
  
    int instrIndex; // TODO: Make protected, with ConnectorModel as a friend?

private:
    InstructionModelSet* const instrModelSet;
    std::map<int, std::function<void(PerformanceModel*)>> instrTimeFunc_map;

};

class InstructionModel;

class InstructionModelSet
{
public:
    InstructionModelSet(std::string name_) : name(name_) {};
    const std::string name;
    void addInstructionModel(InstructionModel*);
    void foreach(std::function<void(InstructionModel &)>);
private:
    std::set<InstructionModel*> instrModel_set;
};

class InstructionModel
{
public:
    InstructionModel(InstructionModelSet*, std::string, int, std::function<void(PerformanceModel*)>);
    ~InstructionModel();

    const int typeId;
    const std::string name;
    const std::function<void(PerformanceModel*)> timeFunc;

private:
    InstructionModelSet* const parentSet;
};

class ConnectorModel
{
public:
    ConnectorModel(std::string name_, PerformanceModel* parent_) : name(name_), parentModel(parent_) {};
    virtual ~ConnectorModel() = default;
    const std::string name;
protected:
    int getInstrIndex() { return parentModel->instrIndex; };
private:
    PerformanceModel* const parentModel;
};

// TODO: Merge ConnectorModel and ResourceModel base-classes? Not possible because of virtual getDelay function (needed by DynamicSharedResourceModel)?
class ResourceModel
{
public:
    ResourceModel(std::string name_, PerformanceModel* parent_) : name(name_), parentModel(parent_) {};
    virtual ~ResourceModel() = default;
    virtual int getDelay() = 0;
    const std::string name;
protected:
    int getInstrIndex() { return parentModel->instrIndex; };
private:
    PerformanceModel* const parentModel;
};

struct ResourceBlockEntry
{
    int start = 0;
    int end = 0;
    ResourceBlockEntry(int start_, int end_, std::string info_) : start(start_), end(end_) {};
};

class SharedResourceModel
{
public:
    virtual ~SharedResourceModel() = default;

    virtual int getDelayFromResource() = 0;
    int getDelay(int);
    
private:
    std::list<ResourceBlockEntry*> blockList;
    bool isLastEntry(std::list<ResourceBlockEntry*>::iterator);
};

class StaticSharedResourceModel : public SharedResourceModel
{
public:
    StaticSharedResourceModel(int delay_) : delay(delay_) {};
    virtual int getDelayFromResource() { return delay; };

private:
    const int delay;
};

class DynamicSharedResourceModel : public SharedResourceModel
{
public:
    DynamicSharedResourceModel(ResourceModel* resModel_) : resModel(resModel_) {};
    virtual int getDelayFromResource() { return resModel->getDelay(); };

private:
    ResourceModel* const resModel;
};

#endif // COMPONENT_MODEL_H
