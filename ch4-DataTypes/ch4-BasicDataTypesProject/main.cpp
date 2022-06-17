#include <iostream>

int main() {
    std::cout << "bool:\t\t\t\t" << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char:\t\t\t\t" << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t:\t\t\t" << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t:\t\t\t" << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "char32_t:\t\t\t" << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "short:\t\t\t\t" << sizeof(short) << " bytes" << std::endl;
    std::cout << "int:\t\t\t\t" << sizeof(int) << " bytes" << std::endl;
    std::cout << "long:\t\t\t\t" << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long:\t\t\t" << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float:\t\t\t\t" << sizeof(float) << " bytes" << std::endl;
    std::cout << "double:\t\t\t\t" << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double:\t\t" << sizeof(long double) << " bytes" << std::endl;

    long double x{};
    std::cout << "x is " << sizeof(x) << " bytes." << std::endl;
    return 0;
}
