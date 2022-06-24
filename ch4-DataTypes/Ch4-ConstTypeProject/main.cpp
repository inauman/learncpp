#include <iostream>
void printInt(const int x);
void initConstant();
const int constReturnValue();

int main() {
    //initConstant();
    //printInt(5);
    //printInt(7);

    // constant return doesn't make sense and shouldn't be used
    // BUT the return value can be made constant
    int a = constReturnValue();
    std::cout << a << "\n";

    a = 7;
    std::cout << a << "\n";
    return 0;
}

void printInt(const int x){
    std::cout << x << "\n";

    //x = 6; //won't compile. param can't change.
}

void initConstant(){
    std::cout << "Please enter your age: ";
    int age{};
    std::cin >> age;

    const int constAge = age;

    std::cout << "Your age is: " << constAge << "\n";

    age = 5;

    //constAge = age; //won't work. while a constant can be initialized with a variable, it can't be reassined.
}

const int constReturnValue(){
    return 5;
}