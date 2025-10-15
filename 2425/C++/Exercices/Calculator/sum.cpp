#include <iostream>
#include "sum.hpp"

void sum(int param1, int param2){
    int sum = param1 + param2;
    std::cout << "The sum is " << sum << std::endl;
}

int add(int param1, int param2) {
    return param1 + param2;
}