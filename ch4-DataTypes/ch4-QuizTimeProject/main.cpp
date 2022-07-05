#include <iostream>

void readUserInput();

int main() {
    readUserInput();
    return 0;
}

void readUserInput(){
    std::cout << "Please enter num1: ";
    double num1{};
    std::cin >> num1;

    std::cout << "Please enter num2: ";
    double num2{};
    std::cin >> num2;

    std::cout << "You have entered " << num1 << " and " << num2 <<".\n";
}