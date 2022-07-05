#include <iostream>

void doQuiz3();
double getDouble();
char getOp();
void printResult(double x, char operation, double y);

int main() {
    doQuiz3();
    return 0;
}

void doQuiz3(){

    // get the first number
    double num1{getDouble()};

    //get the second number
    double num2{getDouble()};

    //get the op
    char op{getOp()};

    // do the op and print results
    printResult(num1, op, num2);
}

double getDouble(){
    std::cout << "Please enter the number: ";
    double num{};
    std::cin >> num;

    return num;
}

char getOp(){
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char op{};
    std::cin >> op;

    return op;
}

void printResult(double num1, char op, double num2){
    if (op == '+'){
        std::cout << num1 << " " << op << " " << num2 << " = " << (num1 + num2);
    }
    else if (op == '-'){
        std::cout << num1 << " " << op << " " << num2 << " = " << (num1 - num2);
    }
    else if (op == '*'){
        std::cout << num1 << " " << op << " " << num2 << " = " << (num1 * num2);
    }
    else if (op == '/'){
        std::cout << num1 << " " << op << " " << num2 << " = " << (num1 / num2);
    }
    else{
        std::cout << "Sorry! You didn't entger a valid op. try again!!!";
    }
}