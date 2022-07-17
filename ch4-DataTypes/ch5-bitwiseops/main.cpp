#include <iostream>
#include <bitset>
void basic();
void bitwiseOps();
std::bitset<4> rotl(std::bitset<4> bits);
std::bitset<4> rotl2(std::bitset<4> bits);
int main() {
    //basic();
    //bitwiseOps();

    std::bitset<4> bits1{ 0b0001 };
    std::cout << rotl(bits1) << '\n';

    std::bitset<4> bits2{ 0b1001 };
    std::cout << rotl(bits2) << '\n';


    std::cout << rotl2(bits1) << '\n';


    std::cout << rotl2(bits2) << '\n';

    return 0;
}

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
    const bool leftbit{ bits.test(3) };
     bits <<= 1;


    if (leftbit){
        bits.set(0);
    }
    return bits;
}

// "rotl" stands for "rotate left"
std::bitset<4> rotl2(std::bitset<4> bits)
{
    // 0001 ==> 0010, 1001 ==> 0011
    // << 1 ==> 0010        0010
    // >> 3 ==> 0000        0001
    return (bits << 1 | bits >> 3);
}

void bitwiseOps(){
    std::bitset<4> x {0b0110};
    std::bitset<4> y {0b0011};
    std::cout << "init bits: " << x << "\n";

    std::cout << "shift right by 1...bits: " << (x >> 1) << "\n";

    std::cout << "shift left by 1...bits: " << (x << 1) << "\n";

    //flip all bits
    std::cout << "flipped bits: " << ~x << "\n";

    std::cout << ~std::bitset<4>{0b0100} << "\n";

    // bitwise OR
    std::cout << "bitwise  OR 0110 | 0011 ==> " << (x | y) << "\n";

    // bitwise AND
    std::cout << "bitwise AND 0110 & 0011 ==> " << (x & y) << "\n";

    // bitwise XOR
    std::cout << "bitwise XOR 0110 ^ 0011 ==> " << (x ^ y) << "\n";

    x >>= 1;
    std::cout << "shifted bits: " << x << "\n";

}

void basic(){
    std::bitset<8> bits {0b0000'0101};
    std::cout << "my bit set: " << bits << std::endl;

    //set bit 3
    bits.set(3);
    std::cout << "my bit set: " << bits << std::endl;

    bits.flip(4);
    std::cout << "my bit set: " << bits << std::endl;

    bits.reset(4);
    std::cout << "my bit set: " << bits << std::endl;

    std::cout << "bit @ 3: " << bits.test(3) << std::endl;
    std::cout << "bit @ 4: " << bits.test(4) << std::endl;
}