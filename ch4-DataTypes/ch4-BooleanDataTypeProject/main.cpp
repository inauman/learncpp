#include <iostream>

void basicBoolean();

void userInput();

void boolComp();

int main() {
    //basicBoolean();
    //userInput();
    boolComp();
    return 0;
}

void userInput() {
    std::cout << "Please enter a value: ";
    bool b{};
    std::cin >> std::boolalpha;
    std::cin >> b;
    std::cout << "You entered: " << b << "\n";
}

bool isEqual(int x, int y) {
    return (x == y);
}

void boolComp() {
    std::cout << "Please enter a number: ";
    int num1{};
    std::cin >> num1;
    std::cout << "Please enter another number: ";
    int num2{};
    std::cin >> num2;
    std::cout << num1 << " and " << num2 << " are equal? ";
    std::cout << std::boolalpha;
    std::cout << isEqual(num1, num2) << "\n\n";

    if (num1 == num2) {
        std::cout << "Yes, Equal!";
        std::cout << "\nfor multiple statements use block!\n";
    } else {
        std::cout << "No, not equal!";
    }
}

void basicBoolean() {
    //bool is an integral type with false evaluate/stored as 0 and true as 1
    bool b{}; //default init to false. note: just the declaration 'bool b' would be unpredictable
    std::cout << std::boolalpha; // use std::boolalpha to print true/false instead of 0 & 1.
    std::cout << "Hello, World! --> " << b << " --> size: " << sizeof(bool) << std::endl;

    std::cout << true << "\n";

    //turn off boolalpha
    std::cout << std::noboolalpha;

    std::cout << !true << "\n";

    std::cout << "\n\n************************\n\n" << std::endl;
    std::cout << std::boolalpha;
    // bool b1{4} would fail as list initialization doesn't allow implicit conversion
    bool b1 = 4; //copy initialization allows implicit conversion from int to bool. all non-zero values are evaluated to true
    std::cout << b1 << "\n\n";

    bool b2 = 0;
    std::cout << b2 << "\n\n";
}

