#include <iostream>

int main() {
    std::cout << "Please enter your age: ";
    int age{};
    std::cin >> age;

    const int constAge = age;

    std::cout << "Your age is: " << constAge << "\n";

    age = 5;

    //constAge = age; //won't work. while a constant can be initialized with a variable, it can't be reassined.

    return 0;
}
