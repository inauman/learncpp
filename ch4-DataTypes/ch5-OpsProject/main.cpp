#include <iostream>
#include <cmath>

void doIntegerDiv();
void doExponent();
int64_t powint(int base, int exp);
void quiz2();
bool isEven(int num);

int main() {
    //doIntegerDiv();
    //doExponent();
    //std::cout << powint(7, 12);
    quiz2();
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
    double x {std::pow(7, 12)};
    std::cout << x << "\n";
}

int64_t powint(int base, int exp){
    assert(exp >= 0 && "powint: exp parameter has negative value");

    std::int64_t result{ 1 };
    while(exp){
        if (exp & 1){
            result *= base;
        }
        exp >>= 1;
        base *= base;
    }
    return result;
}

void quiz2(){
    std::cout << "Please enter a number: ";
    int num{};
    std::cin >> num;

    if (isEven(num)){
        std::cout << "You entered an even number" << "\n";
    }
    else{
        std::cout << "You entered an odd number" << "\n";
    }

}

bool isEven(int num){
   return (num % 2) == 0;
}