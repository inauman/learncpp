#include "constants.h"
#include "in_constants.h"
#include <iostream>

int main() {
    std::cout << "Enter a radius: ";

    int radius{};

    std::cin >> radius;

    std::cout << "The circumference is: " << 2.0 * constants::pi * radius << std::endl;

    std::cout << "The in_circumference is: " << 2.0 * in_constants::in_pi * radius << std::endl;

    return 0;
}