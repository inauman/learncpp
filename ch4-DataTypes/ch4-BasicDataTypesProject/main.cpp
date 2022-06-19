#include <iostream>
#include <iomanip> //for output manipulator, std::setprecision()

void basicDataTypes();

void unsignedDataTypes();

void subtractUnsignedInteger();

void mixSignedUnsigned();

void fixWidthIntegers();

void sizeT();

void printFloatTypes();

void changeOutputPrecision();

int main() {

    //basicDataTypes();
    //unsignedDataTypes();
    //subtractUnsignedInteger();
    //mixSignedUnsigned();
    //fixWidthIntegers();
    //sizeT();
    //printFloatTypes();
    changeOutputPrecision();
    return 0;
}

void changeOutputPrecision() {
    std::cout << std::setprecision(16); //show 16 digits of precision
    std::cout << 3.33333333333333333333333333333333333333f << '\n'; // f suffix means float
    std::cout << 3.33333333333333333333333333333333333333 << '\n'; // no suffix means double

    //floats are interesting
    std::cout << "\n**** float's precision is fun ***\n" << std::endl;
    float f{123456789.0}; //10 significant digits
    std::cout << std::setprecision(9);
    std::cout << f << "\n";

    //wait they are super interesting...
    std::cout << "\n**** double's precision is more fun ***" << std::endl;
    double d{0.1}; //1 significant digit
    std::cout << d << "\n";
    std::cout << std::setprecision(17);
    std::cout << d << "\n";

    //round errors due to precision can have unexpected results
    std::cout << std::setprecision(17);
    double d1{1.0};
    std::cout << d1 << "\n";
    double d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 }; // should equal 1.0
    std::cout << d2 << "\n";

    //NaN and inf
    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    std::cout << posinf << '\n';

    double neginf { -5.0 / zero }; // negative infinity
    std::cout << neginf << '\n';

    double nan { zero / zero }; // not a number (mathematically invalid)
    std::cout << nan << '\n';
}

void basicDataTypes() {
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

void unsignedDataTypes() {
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

void subtractUnsignedInteger() {
    unsigned int x{3};
    unsigned int y{5};

    std::cout << "(x - y) should be -2 BUT it is " << x - y;
}

// In C++, when using mix of signed and unsigned, all signed integers are converted to unsigned and can result in strange behaviour
void mixSignedUnsigned() {
    signed int s{-1}; //signed
    unsigned int u{1};

    if (s < u)
        std::cout << "-1 is less than 1."
                  << "\n"; //-1 is implicitly converted to 4294967295, and 4294967295 < 1 is false
    else
        std::cout << "1 is less than -1" << "\n";
}

void fixWidthIntegers() {
    std::cout << "int8_t:\t\t\t\t\t" << sizeof(int8_t) << " bytes" << std::endl;
    std::cout << "uint8_t:\t\t\t\t" << sizeof(uint8_t) << " bytes" << std::endl;
    std::cout << "int16_t:\t\t\t\t" << sizeof(int16_t) << " bytes" << std::endl;
    std::cout << "uint16_t:\t\t\t\t" << sizeof(uint16_t) << " bytes" << std::endl;
    std::cout << "int32_t:\t\t\t\t" << sizeof(int32_t) << " bytes" << std::endl;
    std::cout << "uint32_t:\t\t\t\t" << sizeof(uint32_t) << " bytes" << std::endl;
    std::cout << "int64_t:\t\t\t\t" << sizeof(int64_t) << " bytes" << std::endl;
    std::cout << "uint64_t:\t\t\t\t" << sizeof(uint64_t) << " bytes" << std::endl;


    int16_t x{5};
    std::cout << "size: " << sizeof(x) << " --> value: " << x;
}

void sizeT() {
    std::cout << sizeof(int) << "\n";
    std::cout << sizeof(size_t) << "\n";
    std::cout << sizeof(sizeof(long long)) << "\n";
}

void floatTypes() {
    int x{5}; // 5 means integer
    double y{5.0}; //no suffix means double by default
    float z{5.0f}; // f suffix means float type
}

//default precision of cout is 6 significant digits
void printFloatTypes() {
    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';
}