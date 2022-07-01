
#include <iostream>
#include <string>

void readUserInput();

int main() {

    readUserInput();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void readUserInput(){
    std::cout << "Please enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Please enter your age: ";
    std::string age{};
    std::getline(std::cin >> std::ws, age);

    std::cout << "Your name is \"" << name << "\" and your age is " << age << ".\n";

}
