#include <iostream>
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>

//#define ENABLE_DEBUG

int add(int x, int y) {
    PLOGD << "add() called (x=" << x << ", y=" << y << ")";
    return x + y;
}

void printResult(int z) {
    std::cout << "The answer is: " << z << " .\n";
}

int getUserInput() {
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main() {
    plog::init(plog::debug, "Logfile.txt");

    int x{getUserInput()};

    PLOGD << "main::x = " << x << "\n";

    int y{getUserInput()};

    PLOGD << "main::y = " << y << "\n";

    std::cout << x << " + " << y << "\n";

    int z{add(x, y)};

    PLOGD << "main::z = " << z << "\n";

    printResult(z);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
