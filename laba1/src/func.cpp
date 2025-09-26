#include <string>
#include <vector>
#include "func.h"

std::string func(unsigned int n) {
    std::vector<int> binary(32, 0);
    for(int i = 0; i < 32; i++) {
        binary[31 - i] = (n >> i) & 1;
    }
    std::string result = "[";
    for(int i = 0; i < 32; i++) {
        result += std::to_string(binary[i]);
        if (i < 31){
            result += ",";
        }
    }
    result += "]";
    return result;
}