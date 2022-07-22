#include <iostream>

int g_x{2}; //non-constant globals are external by default
extern int g_var1; //forward declaration of global var
extern const int g_var2; //forward declaration of global var
const int g_y{1}; //constant var are internal by default
extern int g_z{3}; //constant var can be made external (truly global) by using the specifier extern

int add(int x, int y);

int main(){
    std::cout << add(3, 4) << std::endl;
    std::cout << g_var1 << " : " << g_var2 << std::endl;
    return 0;
}