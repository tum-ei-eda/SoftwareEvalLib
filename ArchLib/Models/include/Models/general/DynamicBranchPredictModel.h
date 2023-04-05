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

#ifndef DYNAMIC_BRANCH_PREDICT_MODEL_H
#define DYNAMIC_BRANCH_PREDICT_MODEL_H

#include "Components/Model.h"

#include <stdbool.h>
#include <map>
#include <list>

class PredictFsm
{
public:
  bool getPrediction();
  void update(bool);
  void reset() { state = RESET_STATE; };
private:
  enum state_t {STRONG_NOT_TAKEN, WEAK_NOT_TAKEN, WEAK_TAKEN, STRONG_TAKEN};
  state_t RESET_STATE = WEAK_TAKEN;
  state_t state = RESET_STATE;
};

class BranchHistoryTable
{
public:
  bool getPrediction(int);
  void update(int, bool);
  void createEntry(int);
  void replaceEntry(int, int);

private:
  std::map<int, PredictFsm*> table;
};

class BranchTargetBuffer
{
public:
  int getPrediction(int);
  void update(int, int);
  void createEntry(int);
  void replaceEntry(int, int);

private:
  std::map<int, int> table;
};
 
class DynamicBranchPredictModel : public ConnectorModel
{
public:
    // TODO: Make BUFFER_SIZE configurable! 
    DynamicBranchPredictModel(PerformanceModel* parent_) : ConnectorModel("DynamicBranchPredictModel", parent_), btb(), bht(), BUFFER_DEPTH(5) {};

    int* pc_ptr;
    int* brTarget_ptr;

    void setPc_p(int);
    void setPc_np(int);
    int getPc(void);
    
private:
    int pc_p = 0;
    int pc_np = 0;

    bool branchInstr = false;
    int branchInstrPc = 0;

    bool pred_taken = false;
    int pred_branchAddr = 0;
    int comp_branchAddr = 0;

    BranchTargetBuffer btb;
    BranchHistoryTable bht;
    
    const int BUFFER_DEPTH;
    std::list<int> pcFifo;

};

#endif //DYNAMIC_BRANCH_PREDICT_MODEL_H
