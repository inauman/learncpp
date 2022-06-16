#include <iostream>

//#define ENABLE_DEBUG

int add(int x, int y){
#if defined(ENABLE_DEBUG)
    std::cerr << "add() called (x=" << x << ", y=" << y << ")\n";
#endif
    return x + y;
}

void printResult(int z){
    std::cout << "The answer is: " << z << " .\n";
}

int getUserInput(){
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}
int main() {
    int x{getUserInput()};

    #if defined(ENABLE_DEBUG)
        std::cerr << "main::x = " << x << "\n";
    #endif

    int y{getUserInput()};
#if defined(ENABLE_DEBUG)
    std::cerr << "main::y = " << y << "\n";
#endif
    std::cout << x << " + " << y << "\n";

    int z{add(x, y)};
#if defined(ENABLE_DEBUG)
    std::cerr << "main::z = " << z << "\n";
#endif
    printResult(z);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
