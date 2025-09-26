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
    std::cout << n << " -> " << func(n) << std::endl;
    
    return 0;
}