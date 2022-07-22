#include <iostream>
int g_x{}; //global variable

const int g_y{}; // global constant
constexpr int g_z{}; //global constant

void doSomething(){
    std::cout << g_x << std::endl; //without initializer global variable are initialized with 0 by default but local variables are not initialized.
    g_x = 3;
    std::cout << g_x << std::endl;
}
int main(){
    doSomething();
    std::cout << g_x << std::endl;

    g_x = 5;
    std::cout << g_x << std::endl;

    return 0;
}
