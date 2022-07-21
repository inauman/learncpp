#include <iostream>

void print(){
    std::cout << " there\n";
}
namespace foo {
    int doSomething(int x, int y) {
        return x + y;
    }
    void print(){
        std::cout << "Hello";
    }

    void printHelloThere(){
        print();
        ::print();
    }
}

namespace goo {
    int doSomething(int x, int y) {
        return x - y;
    }
}

int main() {
    std::cout << foo::doSomething(4, 3) << "\n";
    std::cout << goo::doSomething(4, 3) << "\n";
    foo::printHelloThere();
    return 0;
}
