#include <iostream>
#include "circle.h" // for basicMath::pi
#include "growth.h" // for basicMath::e
#include "add.h" // for basicMath::add

namespace foo::goo{
    int add(int x, int y){
        return 12 + x + y;
    }
}

int main() {
    namespace active = foo::goo; //namespace alias

    std::cout << basicMath::pi << std::endl;
    std::cout << basicMath::e << std::endl;
    std::cout << basicMath::add(4,3) << "\n";
    std::cout << active::add(2, 3) << "\n";
    return 0;
}
