#include <iostream>
#include <bitset>

int main() {
    std::bitset<8> bits {0b0000'0101};
    std::cout << "my bit set: " << bits << std::endl;

    //set bit 3
    bits.set(3);
    std::cout << "my bit set: " << bits << std::endl;

    bits.flip(4);
    std::cout << "my bit set: " << bits << std::endl;

    bits.reset(4);
    std::cout << "my bit set: " << bits << std::endl;
    return 0;
}
