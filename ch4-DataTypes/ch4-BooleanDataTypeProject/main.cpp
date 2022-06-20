#include <iostream>

void basicBoolean();

void userInput();

void boolComp();

int userInputNumber();

bool isPrime(int x);

bool isAllowedToTakeFunRide() {
    std::cout << "How tall are you? (cm)\n";

    double height{};
    std::cin >> height;

    return (height > 140.0);

}

int main() {
    //basicBoolean();
    //userInput();
    //boolComp();
    int x{userInputNumber()};

    std::cout << std::boolalpha;
    std::cout << x << " is a prime " << isPrime(x) << "\n";

    if (isAllowedToTakeFunRide())
        std::cout << "Have fun!\n";
    else
        std::cout << "Sorry, you're too short.\n";
    return 0;
}


bool isPrime(int x) {
    if (x > 3 and (x % 2 == 0 || x % 3 == 0)) {
        return false;
    } else {
        return true;
    }
}

int userInputNumber() {
    std::cout << "Please enter a number (0-9): ";
    int num1{};
    std::cin >> num1;

    if (num1 == 999) {
        std::cout << "Thank you for playing!" << "\n";
    } else if (num1 < 0 or num1 > 9) {
        std::cout << "Sorry! Number should be between 1 and 9 only ";
        //num1 = userInputNumber(); // Recursion needs to be fixed in future...
    } else {
        return num1;
    }

}

void userInput() {
    std::cout << "Please enter a value: ";
    bool b{};
    std::cin >> std::boolalpha;
    std::cin >> b;
    std::cout << "You entered: " << b << "\n";
}

bool isEqual(int x, int y) {
    return (x == y);
}

void boolComp() {
    std::cout << "Please enter a number: ";
    int num1{};
    std::cin >> num1;
    std::cout << "Please enter another number: ";
    int num2{};
    std::cin >> num2;
    std::cout << num1 << " and " << num2 << " are equal? ";
    std::cout << std::boolalpha;
    std::cout << isEqual(num1, num2) << "\n\n";

    if (num1 == num2) {
        std::cout << "Yes, Equal!";
        std::cout << "\nfor multiple statements use block!\n";
    } else {
        std::cout << "No, not equal!";
    }
}

void basicBoolean() {
    //bool is an integral type with false evaluate/stored as 0 and true as 1
    bool b{}; //default init to false. note: just the declaration 'bool b' would be unpredictable
    std::cout << std::boolalpha; // use std::boolalpha to print true/false instead of 0 & 1.
    std::cout << "Hello, World! --> " << b << " --> size: " << sizeof(bool) << std::endl;

    std::cout << true << "\n";

    //turn off boolalpha
    std::cout << std::noboolalpha;

    std::cout << !true << "\n";

    std::cout << "\n\n************************\n\n" << std::endl;
    std::cout << std::boolalpha;
    // bool b1{4} would fail as list initialization doesn't allow implicit conversion
    bool b1 = 4; //copy initialization allows implicit conversion from int to bool. all non-zero values are evaluated to true
    std::cout << b1 << "\n\n";

    bool b2 = 0;
    std::cout << b2 << "\n\n";
}

