#include <iostream>

void printDigitName(int x);
int calculate(int op1, int op2, char op);

int main() {

    //printDigitName(2);
    std::cout << calculate(20, 5, '+') << "\n";
    std::cout << calculate(20, 5, '-') << "\n";
    std::cout << calculate(20, 5, '*') << "\n";
    std::cout << calculate(20, 5, '/') << "\n";
    std::cout << calculate(21, 5, '%') << "\n";
    std::cout << calculate(27, 5, '@') << "\n";


    return 0;
}

int calculate(int op1, int op2, char op){

    switch (op) {
        case '+': {
            return op1 + op2;
        }
        case '-': {
            return op1 - op2;
        }
        case '*': {
            return op1 * op2;
        }
        case '/': {
            return op1 / op2;
        }
        case '%': {
            return op1 % op2;
        }
        default:{
            std::cerr << "calculate(): Unhandled case\n";
            return 0;
        }


    }
    return 0;
}
void printDigitName(int x) {
    switch (x) {
        int a;
        case 1: {
            std::cout << "\nOne";
            return;
        }
        case 2: {
            std::cout << "\nTwo";
            [[fallthrough]];
        }
        case 3: {
            std::cout << "\nThree";
            break;
        }
        default: {
            std::cout << "Default";
            return;
        }
    }

    // execution continues here
    std::cout << " \nAh-Ah-Ah!";
}
