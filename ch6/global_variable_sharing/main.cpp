#include "constants.h"
#include <iostream>

int main(){
    std::cout << "Enter a radius: ";
    int radius{};
    std::cin >> radius;

    std::cout << "The circumference is: " << 2.0 * constants::pi * radius << std::endl;

    return 0;
}