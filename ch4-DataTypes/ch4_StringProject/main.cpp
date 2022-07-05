
#include <iostream>
#include <string>
#include <string_view>

void readUserInput();
void stringString();
void stringString();

int main() {

    readUserInput();
    //stringString();

    return 0;
}

void readUserInput(){
    std::cout << "Please enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Please enter your age: ";
    int age{};
    std::cin >> age;

    std::cout << "Your name is \"" << name << "\" and your age is " << age << ".\n";

    std::cout << "You have " << std::ssize(name) << " characters in your name." << "\n";

    std::cout << std::ssize(name) + age << "\n";

}

void stringString(){
    using namespace std::literals;

    std::cout << "foo\n"; //no suffix, c-style
    std::cout << "goo\n"s; //s suffix is a standard c++ string literal
    std::cout << "moo\n"sv; //sv string_view literal

    //constexpr
    //constexpr std::string_view name1{"Nauman"s};
    //constexpr std::string_view name{ "Alex"s };
}
