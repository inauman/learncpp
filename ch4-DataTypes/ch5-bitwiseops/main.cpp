#include <iostream>
#include <bitset>
void basic();
void bitwiseOps();
std::bitset<4> rotl(std::bitset<4> bits);
std::bitset<4> rotl2(std::bitset<4> bits);
void rotateLeft();
void bitmask();
void game();
int main() {
    //basic();
    //bitwiseOps();
    //rotateLeft();
    //bitmask();
    //game();
    return 0;
}

void game(){
    constexpr std::uint8_t isHungary{  1 << 0 }; //represents bit 0
    constexpr std::uint8_t isSad{      1 << 1 }; //represents bit 1
    constexpr std::uint8_t isMad{      1 << 2 }; //represents bit 2
    constexpr std::uint8_t isHappy{    1 << 3 }; //represents bit 3
    constexpr std::uint8_t isLaughing{ 1 << 4 }; //represents bit 4
    constexpr std::uint8_t isAsleep{   1 << 5 }; //represents bit 5
    constexpr std::uint8_t isDead{     1 << 6 }; //represents bit 6
    constexpr std::uint8_t isCrying{   1 << 7 }; //represents bit 7

    std::uint8_t me{}; // all flags are off in the beginning
    std::cout << std::bitset<8>(me) << "\n";

    //I am happy and laughing
    me |= (isHappy | isLaughing);
    std::cout << std::bitset<8>(me) << "\n";

    //I am no longer laughing
    me &= ~isLaughing;
    std::cout << std::bitset<8>(me) << "\n";

    std::cout << "I am happy? " << static_cast<bool>(me & isHappy) << '\n';
    std::cout << "I am laughing? " << static_cast<bool>(me & isLaughing) << '\n';
}
void bitmask(){
    constexpr std::uint8_t mask0{ 0b0000'0001 }; //represents bit 0
    constexpr std::uint8_t mask1{ 0b0000'0010 }; //represents bit 1
    constexpr std::uint8_t mask2{ 0b0000'0100 }; //represents bit 2
    constexpr std::uint8_t mask3{ 0b0000'1000 }; //represents bit 3
    constexpr std::uint8_t mask4{ 0b0001'0000 }; //represents bit 4
    constexpr std::uint8_t mask5{ 0b0010'0000 }; //represents bit 5
    constexpr std::uint8_t mask6{ 0b0100'0000 }; //represents bit 6
    constexpr std::uint8_t mask7{ 0b1000'0000 }; //represents bit 7

    //flag
    std::uint8_t flags{ 0b0000'0101 };

    //std::cout << (flags & mask2);
    std::cout << "bit 0 is " << ((flags & mask0) ? "on\n" : "off\n");
    std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");

    //turn on bit 1 using mask1 and bitwise OR assignment ( |= )
    flags |= mask1;
    std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");

    //turn on multiple bits at the same time
    flags |= (mask4 | mask5);

    std::cout << std::bitset<8>(flags) << "\n";

    //turn off &= ~
    std::cout << "bit 2 is " << ((flags & mask2) ? "on: " : "off: ") << std::bitset<8>(flags) << "\n";
    //std::cout << std::bitset<8>(~mask2);
    flags &= ~mask2;
    std::cout << "bit 2 is " << ((flags & mask2) ? "on: " : "off: ") << std::bitset<8>(flags) << "\n";

    //flip a bit using XOR ^
    std::cout << "bit 3 is " << ((flags & mask3) ? "on: " : "off: ") << std::bitset<8>(flags) << "\n";
    flags ^= mask3;
    std::cout << "bit 3 is " << ((flags & mask3) ? "on:  " : "off: ") << std::bitset<8>(flags) << "\n";
    flags ^= (mask3 | mask4);
    std::cout << "bit 3 is " << ((flags & mask3) ? "on: " : "off: ") << std::bitset<8>(flags) << "\n";
}
void rotateLeft(){
    std::bitset<4> bits1{ 0b0001 };
    std::cout << rotl(bits1) << '\n';

    std::bitset<4> bits2{ 0b1001 };
    std::cout << rotl(bits2) << '\n';


    std::cout << rotl2(bits1) << '\n';


    std::cout << rotl2(bits2) << '\n';
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