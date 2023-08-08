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

// TODO: nail preliminary model

#include "Models/CVA6/ICacheModel.h"
#include "Models/CVA6/bit_macros.hpp"

int ICacheModel::getDelay(void)
{
    
    pc = pc_ptr[getInstrIndex()];
    pc = (pc << 32) >> 32;                       //workaround: since casting from int to uint64_t
    //std::cout << std::hex << pc << std::endl;

    miss = false;
    tag = extract_bits(pc, 44, 12);
    index = extract_bits(pc, 8, 4);
    //int offset = extract_bits(pc, 4, 0);

    if(!cacheable()) {
        //report miss
        miss = true;
        //std::cout << "A: " << std::hex << pc << std::endl;
        return 5;
    }

    if (!tag_cmp()) {
        //update tag_ram
        short way_to_replace = lfsr();
        //cout << "lfsr:" << way_to_replace << endl;
        tag_ram[index][way_to_replace] = tag;

        //report miss
        miss = true;
        //std::cout << "B" << std::endl;
        return 6;
    }

    //report hit
    miss = false;
    //std::cout << "C" << std::endl;
    return 1;
}

bool ICacheModel::cacheable() {
    return (0x80000000 <= pc && pc < 0xc0000000) ? true : false;
}

bool ICacheModel::tag_cmp() {
    for(int way=0; way<4; way++) {
        if(tag_ram[index][way] == tag) {
            return true;
        }
    }
    return false;
}

short ICacheModel::lfsr() {
    static uint8_t shift_state = 0; // 8bit
    short shift_in = ~( (extract_bits(shift_state, 1, 7) ^ extract_bits(shift_state, 1, 3) ^ extract_bits(shift_state, 1, 2) ^ extract_bits(shift_state, 1, 1)) ) & 1; //single bit
    shift_state = (shift_state << 1) | shift_in; // 8bit

    return (shift_state & 0x3); // 2bit
}
