#include <iostream>
void doIntegerDiv();
void doExponent();

int main() {
    doIntegerDiv();
    return 0;
}

void doIntegerDiv(){
    int x{ 7 };
    int y{ 4 };

    std::cout << "int / int = " << x / y << "\n";
    std::cout << "double / int = " << static_cast<double>(x) / y << "\n";
    std::cout << "double / int = " << x / static_cast<double>(y) << "\n";
    std::cout << "double / double = " << static_cast<double>(x) / static_cast<int>(y) << "\n";
}

void doExponent(){

}