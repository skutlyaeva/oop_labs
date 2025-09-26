#include <iostream>
#include <string>
#include <vector>
#include "func.h"

int main() {
    unsigned int n;
    std::cout << "Enter a positive number: ";
    std::cin >> n;
    std::cout << n << " -> " << func(n) << std::endl;
    
    return 0;
}