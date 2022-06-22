#include <iostream>
void basicCharDataType();
void inputChar();
void print(double x);

int main() {
    //basicCharDataType();
    //inputChar();
    print(5.0);
    return 0;
}

void print(double x){
    std::cout << x;
    double y{3.0}; // c++ compiler drops zero in printing (only print non-zero fractions in float numbers)
    std::cout << "The value of double y is: " << y << "\n";

}
void inputChar(){
    std::cout << "Please enter your choice (y/n): ";
    char ans{};
    std::cin >> ans;
    std::cout << "You entered --> " << ans << "\n";

    std::cin >> ans;
    std::cout << "You entered --> " << ans << "\n";

}
void basicCharDataType(){
    char ch1{5};
    char ch2{'5'}; //char are integral type meaning they are stored as integer (ascii char) so can be initialized as integers but not preferred
    std::cout << "ch1 is --> " << ch1 << " and ch2 is --> " << ch2 << "\n";
    std::cout << "Hello, World!" << std::endl;
}