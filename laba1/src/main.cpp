#include <iostream>
#include <string>
#include <vector>
#include "func.h"

int main() {
    unsigned int n;
    std::cout << "Enter a positive number: ";
    std::cin >> n;
    if (!std::cin) {
        std::cout << "incorrect input" << std::endl;
        return 1;
    }
    std::string result = func(n);
    std::cout << n << " -> [";
    for (int i = 0; i < 32; i++) {
        std::cout << result[i];  // выводим i-й символ строки
        if (i < 31) {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;
    
    return 0;
}