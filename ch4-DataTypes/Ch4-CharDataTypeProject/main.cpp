#include <iostream>
void basicCharDataType();
void inputChar();
void print(int x);
void conversions();
void doQuiz1();
void doQuiz2();
void doQuiz3();

int main() {
    //basicCharDataType();
    //inputChar();
    //conversions();
    //doQuiz1();
    doQuiz3();
    return 0;
}

int charAsInt(char c)
{
    std::cout << "\nBefore return.... --> " << c << "\n";
    return c;
}

void doQuiz1(){
    std::cout << "Enter a single character: ";
    char ch{};
    std::cin >> ch;
    std::cout << "\nYou entered '" << ch << "', which has ASCII value of " << static_cast<int>(ch) << ".\n";
}

void doQuiz2(){
    std::cout << "Enter a single character: ";
    char ch{};
    std::cin >> ch;

    int ascii{ch};
    std::cout << "\nYou entered '" << ch << "', which has ASCII value of " << ascii << ".\n";
}

void doQuiz3(){
    std::cout << "Enter a single character: ";
    char ch{};
    std::cin >> ch;


    std::cout << "\nYou entered '" << ch << "', which has ASCII value of " <<  charAsInt(ch) << ".\n";
}

void conversions(){
    print(5);

    //explicit conversion (in this case fraction will be dropped)
    print(static_cast<int>(7.5));

    // explict conversion from chat to int
    char ch{97};
    std::cout << "The char is --> " << ch << "\n";
    std::cout << "The integer value of char is --> " << static_cast<int>(ch) << "\n";

    //unsigned int to signed int conversion
    unsigned int u {5u};
    int s { static_cast<int>(u)};
    std::cout << "unsigned int to int --> " << s << "\n";

    // fixed width (size t) integers to integer
    int8_t myint{65};
    std::cout << myint << "\n"; //this will print 'A' as int8_t and uint8_t are treated as char
    std::cout << static_cast<int>(myint); //static cast to convert from char to int
}
void print(int x){
    std::cout << x << "\n";
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