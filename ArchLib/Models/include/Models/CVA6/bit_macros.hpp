#ifndef BIT_MACROS_HPP
#define BIT_MACROS_HPP

#define mask(len, start) ((((uint64_t)1 << len) - 1) << start)  // mask defining a specific region in a bit array
#define extract_bits(arr, len, start) ((arr & mask(len, start)) >> start) // extract len-bits starting with start from arr

#endif //BIT_MACROS_HPP
