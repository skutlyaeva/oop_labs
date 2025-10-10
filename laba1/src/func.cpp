#include <string>
#include "func.h"

std::string func(unsigned int n) {
    int binary[32] = {0};
    for(int i = 0; i < 32; i++) {
        binary[31 - i] = (n >> i) & 1;
    }
    std::string result;
    for(int i = 0; i < 32; i++) {
        result += std::to_string(binary[i]);
    }
    return result;
}
