#include <iostream>
void basicCharDataType();
void inputChar();
int main() {
    inputChar();
    return 0;
}

void inputChar(){
    std::cout << "Please enter your choice (y/n): ";
    char ans{};
    std::cin >> ans;
    std::cout << "You entered --> " << ans << "\n";
}
void basicCharDataType(){
    char ch1{5};
    char ch2{'5'}; //char are integral type meaning they are stored as integer (ascii char) so can be initialized as integers but not preferred
    std::cout << "ch1 is --> " << ch1 << " and ch2 is --> " << ch2 << "\n";
    std::cout << "Hello, World!" << std::endl;
}