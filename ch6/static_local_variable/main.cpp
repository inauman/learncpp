#include <iostream>

//local variable with automatic duration
void incrementAndPrint(){
    int value{1}; //automatic duration by default
    ++value;
    std::cout << value << std::endl;

    std::cout << "\n\n================  Static Local Variable  ===========================\n\n" << std::endl;

    static int newValue {10};
    ++newValue;
    std::cout << newValue << std::endl;

}

constexpr int greater(int x, int y){
    return (x > y ? x : y);
}

int generateID(){
    static int s_itemID{0};
    return s_itemID++;
}

consteval int greater2(int x, int y){
    return (x > y ? x : y);
}

int main(){
    //std::cout << greater(6, 7) << std::endl;

    constexpr int g { greater2(5, 6) }; //OK. will evaluate at compile time
    std::cout << greater(5,6); //OK, will evaluate at compile time

    int x{5}; //non-constant literal i.e. not constexpr
    std::cout << greater2(x, 6); //Not OK. won't work as x is not constexpr
    //incrementAndPrint();
    //incrementAndPrint();
    //incrementAndPrint();
    return 0;
}