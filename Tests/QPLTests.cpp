#include <iostream>
#include <memory>
#include <vector>
#include <cstdint>
#include <cstring>

#include "vendor/QPL.hpp"

//g++ qpl_test.cpp -o qpl_test -I/path/to/qpl/include -L/path/to/qpl/lib -lqpl

int main() {
    constexpr uint32_t num_bits = 64;
    constexpr uint32_t num_bytes = (num_bits + 7) / 8;

    // Bit vector A: 11110000 11110000 ...
    std::vector<uint8_t> vec_a(num_bytes, 0xF0);

    // Bit vector B: 10101010 10101010 ...
    std::vector<uint8_t> vec_b(num_bytes, 0xAA);

    uint32_t sum_value = perform_bitwise_and_sum(vec_a.data(), vec_b.data(), num_bits);

    // Print result
    std::cout << "Bitwise AND sum (number of 1s): " << sum_value << std::endl;

    return 0;
}