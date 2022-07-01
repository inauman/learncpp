#include <bitset>
#include <iostream>

int main() {
    std::cout << 5 << "\n";
    std::cout << 5L << "\n";

    unsigned int x{5};

    std::cout << x << "\n";

    float f{4.1};
    std::cout << f << "\n";

    double pi{3.14159};
    double avogadro{6.02e23};
    double electron{1.6e-19};

    std::cout << electron << "\n";

    //avoid using magic numbers, instead use symbolic constants
    constexpr int kMaxStudentPerClass{30};
    constexpr int kNumClassrooms{50};
    constexpr int totalStudents{kNumClassrooms * kMaxStudentPerClass};
    constexpr int kMaxNameLength{30};
    //setMax(kMaxNameLength);

    // Number System
    int y {012}; //append 0 to use octal numeral system
    std::cout << y << "\n";

    int z{0x10}; //hexadecimal system
    std::cout << z << "\n";

    int zz{0xFF}; //hexadecimal system
    std::cout << zz << "\n";

    //binary use 0b as prefix
    int bin{};
    bin = 0b11110000;
    std::cout << bin << "\n";


    //0b - binary, 0 - octal, 0x hexadecimal

    int b{0b1011'0010};
    std::cout << b << "\n";

    long value { 2'132'673'462 };
    std::cout << std::hex << value << "\n";

    long num{0x7f1e03b6};
    std::cout << std::dec << num << "\n";

    std::bitset<8> bin1{0b1100'0101};
    std::bitset<8> bin2{0xC5};

    std::cout << bin1 << " : " << bin2 << "\n";

    std::cout << std::bitset<4>{0b1010};

    return 0;
}
