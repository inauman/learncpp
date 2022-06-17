#include <iostream>
void basicDataTypes();
void unsignedDataTypes();
void subtractUnsignedInteger();
void mixSignedUnsigned();
void fixWidthIntegers();

int main() {

    //basicDataTypes();
    //unsignedDataTypes();
    //subtractUnsignedInteger();
    //mixSignedUnsigned();
    fixWidthIntegers();
    return 0;
}

void basicDataTypes(){
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

    int x{2147483647};
    std::cout << "x is " << sizeof(x) << " bytes.\n" << std::endl;

    std::cout << "Integer Division drops the fractional part (8/5 =1): " << 8 / 5 << ".\n";
}

void unsignedDataTypes(){
    unsigned short x{65535};
    std::cout << "x(65535) was: " << x << "\n"; // largest 16-bit unsigned value possible

    x = 65536; //65536 is out of our range, so we get wrap-around
    std::cout << "x(65536) was: " << x << "\n";

    x = 65537; //65537 is out of our range, so we get wrap-around
    std::cout << "x(65537) was: " << x << "\n";

    x = -1;
    std::cout << "x(-1) was: " << x << "\n";

    x = -2;
    std::cout << "x(-2) was: " << x << "\n";

    unsigned int y{};
    y = -1;
    std::cout << "y(-1) was: " << y << "\n";

    y = -2;
    std::cout << "y(-2) was: " << y << "\n";
}

void subtractUnsignedInteger(){
    unsigned int x{3};
    unsigned int y{5};

    std::cout << "(x - y) should be -2 BUT it is " << x - y;
}

// In C++, when using mix of signed and unsigned, all signed integers are converted to unsigned and can result in strange behaviour
void mixSignedUnsigned(){
    signed int s{-1}; //signed
    unsigned int u{1};

    if(s < u)
        std::cout << "-1 is less than 1." << "\n"; //-1 is implicitly converted to 4294967295, and 4294967295 < 1 is false
    else
        std::cout << "1 is less than -1" << "\n";
}

void fixWidthIntegers(){
    std::cout << "int8_t:\t\t\t\t\t" << sizeof(int8_t) << " bytes" << std::endl;
    std::cout << "uint8_t:\t\t\t\t" << sizeof(uint8_t) << " bytes" << std::endl;
    std::cout << "int16_t:\t\t\t\t" << sizeof(int16_t) << " bytes" << std::endl;
    std::cout << "uint16_t:\t\t\t\t" << sizeof(uint16_t) << " bytes" << std::endl;
    std::cout << "int32_t:\t\t\t\t" << sizeof(int32_t) << " bytes" << std::endl;
    std::cout << "uint32_t:\t\t\t\t" << sizeof(uint32_t) << " bytes" << std::endl;
    std::cout << "int64_t:\t\t\t\t" << sizeof(int64_t) << " bytes" << std::endl;
    std::cout << "uint64_t:\t\t\t\t" << sizeof(uint64_t) << " bytes" << std::endl;
}