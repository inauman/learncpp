#include <iostream>
#include <bitset>
void basic();
void bitwiseOps();
std::bitset<4> rotl(std::bitset<4> bits);
std::bitset<4> rotl2(std::bitset<4> bits);
void rotateLeft();
void bitmask();
void game();
void multibitmasks();
void quiz1();
void quiz6();
int main() {
    //basic();
    //bitwiseOps();
    //rotateLeft();
    //bitmask();
    //game();
    //multibitmasks();
    //quiz1();
    quiz6();
    return 0;
}

int printAndDecrementBit(int x, int pow){
    if(x >= pow){
        std::cout << "1";
        return (x - pow);
    }
    std::cout << "0";
    return x;
}
void quiz6(){
    std::cout << "Please enter a number between 0 and 255: ";
    int x{};
    std::cin >> x;

    x = printAndDecrementBit(x, 128);
    x = printAndDecrementBit(x, 64);
    x = printAndDecrementBit(x, 32);
    x = printAndDecrementBit(x, 16);
    std::cout << ' ';
    x = printAndDecrementBit(x, 8);
    x = printAndDecrementBit(x, 4);
    x = printAndDecrementBit(x, 2);
    x = printAndDecrementBit(x, 1);
    std::cout << '\n';

    /*
     * * method2 0101 1101
 * 93 >= 64     =>  Yes     64  ==  1   Diff    93 - 64 = 29
 * 29 >= 32     =>  No      32  ==  0
 * 29 >= 16     =>  Yes     16  ==  1   Diff    29 - 16 = 13
 * 13 >= 8      =>  Yes     8   ==  1   Diff    13 - 8  = 5
 * 5 >= 4       =>  Yes     4   ==  1   Diff    5 - 4   = 1
 * 1 >= 2       =>  No      2   ==  0
 * 1 >= 1       =>  Yes     1   ==  1
     * */
}


void quiz1(){
    constexpr std::uint8_t option_viewed{ 0x01 };
    constexpr std::uint8_t option_edited{ 0x02 };
    constexpr std::uint8_t option_favorited{ 0x04 };
    constexpr std::uint8_t option_shared{ 0x08 };
    constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t testflag { (0x5F & 0x6A) };
    std::cout << "test flag: " << std::bitset<8>{ testflag } << '\n';

    std::uint8_t myArticleFlags{ option_favorited };

    myArticleFlags |= option_viewed;

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    std::cout << "article deleted: " << ((myArticleFlags & option_deleted) ? "yes\n" : "no\n");

    myArticleFlags &= ~option_favorited;
    std::cout << std::bitset<8>{ myArticleFlags } << '\n';
}
void multibitmasks(){
    constexpr std::uint32_t redBits{0xFF000000};
    constexpr std::uint32_t greenBits{0x00FF0000};
    constexpr std::uint32_t blueBits{0x0000FF00};
    constexpr std::uint32_t alphaBits{0x00000000FF};

    std::cout << "Enter a 32-bit RGBA color value in hexadecimal (e.g. FF7F3300): ";
    std::uint32_t pixel{};

    /*
        32-bit RGBA value
        bits 31-24	    bits 23-16	    bits 15-8	    bits 7-0
        RRRRRRRR	    GGGGGGGG	    BBBBBBBB	    AAAAAAAA
        red	            green	        blue	        alpha
     * */
    std::cin >> std::hex >> pixel; // std::hex allows us to read in a hex value

    //cast from hex to binary
    std::uint8_t red{ static_cast<std::uint8_t>((pixel & redBits) >> 24)};

    std::uint8_t green{ static_cast<std::uint8_t>((pixel & greenBits) >> 16)};
    std::uint8_t blue{ static_cast<std::uint8_t>((pixel & blueBits) >> 8)};
    std::uint8_t alpha{ static_cast<std::uint8_t>((pixel & alphaBits))};

    //to print binary format
    //std::cout << "test1.......: " << std::bitset<8>(green) << "\n";
    //std::cout << "test2.......: " << green << "\n";

    //binary to hex
    std::cout << "Your color contains: \n";
    std::cout << std::hex; // print the following values in hex
    std::cout << static_cast<int>(red) << " red\n";
    std::cout << static_cast<int>(green) << " green\n";
    std::cout << static_cast<int>(blue) << " blue\n";
    std::cout << static_cast<int>(alpha) << " alpha\n";

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

/*
 * Quiz1
 * 01001101 = 0 * 2^7 + 1 * 2^6 + 0 * 2^5 + 0 * 2^4 + 1 * 2^3 + 1 * 2^2 + 0 * 2^1 + 1 * 2^0
 *          = 0 + 64 + 0 + 0 + 8 + 4 + 0 + 1
 *          = 77
 *
 * Quiz2
 * 93 to binary
 * method1 = 01011101 (0 + 64 + 0 + 16 + 8 + 4 + 0 + 1)
 * 93/2     = 46    r1
 * 46/2     = 23    r0
 * 23/2     = 11    r1
 * 11/2     = 5     r1
 * 5/2      = 2     r1
 * 2/2      = 1     r0
 * 1/2      = 0     r1
 *
 * method2 01011101
 * 93 >= 64     =>  Yes     64  ==  1   Diff    93 - 64 = 29
 * 29 >= 32     =>  No      32  ==  0
 * 29 >= 16     =>  Yes     16  ==  1   Diff    29 - 16 = 13
 * 13 >= 8      =>  Yes     8   ==  1   Diff    13 - 8  = 5
 * 5 >= 4       =>  Yes     4   ==  1   Diff    5 - 4   = 1
 * 1 >= 2       =>  No      2   ==  0
 * 1 >= 1       =>  Yes     1   ==  1
 *
 * Quiz3: convert -93 to 8 bit signed binary using 2's complements
 *  93      =       0101 1101
 *  Invert the bit  1010 0010
 *  Add 1           0000 0001
 *                  1010 0011
 *
 *  Quiz 4: Convert 1010 0010 to an unsigned decimal
 *  1010 0010   = 1 * 2^7 + 0 * 2^6 + 1 * 2^5 + 0 * 2^4 + 0 * 2^3 + 0 * 2^2 + 1 * 2^1 + 0 * 2^0
 *              = 128 + 0 + 32 + 0 + 0 + 0 + 2 + 0
 *              162
 *  Quiz 5: Convert 1010 0010 to a signed decimal number (assume two’s complement).
 *
 *  Binary      1010 0010
 *  Invert      0101 1101
 *  Add 1       0000 0001
 *  Sum         0101 1110
 *              = 0 * 2^7 + 1 * 2^6 + 0 * 2^5 + 1 * 2^4 + 1 * 2^3 + 1 * 2^2 + 1 * 2^1 + 0 * 2^0
 *              = 0 + 64 + 0 + 16 + 8 + 4 + 2 + 0 = 78
 *              Answer -94
 **/