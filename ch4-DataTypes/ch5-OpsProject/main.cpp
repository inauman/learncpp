#include <iostream>
#include <cmath>

void doIntegerDiv();
void doExponent();
int64_t powint(int base, int exp);
void quiz2();
bool isEven(int num);
void prefixpostfix();
void koma();
void ternary();
int main() {
    //doIntegerDiv();
    //doExponent();
    //std::cout << powint(7, 12);
    //quiz2();
    //prefixpostfix();
    //koma();
    ternary();
    return 0;
}

void ternary(){

    //print 2 as first expression is non-zero
    std::cout << (5 ? 2 : 7) << "\n";

    //print 7 as first expression is zero
    std::cout << (0 ? 2 : 7) << "\n";

    constexpr bool inBigClassroom {true};
    constexpr int classSize{inBigClassroom ? 30 : 20};
    std::cout << classSize << "\n";
}
void koma(){
    int x{1};
    int y{2};
    int z{7};
    std::cout << (++x, ++y, ++z) << "\n";
}
void prefixpostfix(){
    int x{5};
    int y{5};

    std::cout << x << ' ' << y << "\n";

    std::cout << ++x << ' ' << --y << "\n";

    std::cout << x << ' ' << y << "\n";

    std::cout << x++ << ' ' << y-- << "\n";

    std::cout << x << ' ' << y << "\n";

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