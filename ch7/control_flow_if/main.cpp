#include <iostream>

int main() {

    std::cout << "Enter 0 or 1: ";

    int x{};
    std::cin >> x;

    if (x == 0){
        std::cout << "You entered 0";
    }
    else{
        std::cout << "You entered " << x;
    }
    int y{};

    if(y=0)
        ;   //empty or null statement...be careful...don't end the if stmt after the parenthesis.
    std::cout << "\ndone....";
    return 0;
}


