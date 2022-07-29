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
int main(){
    std::cout << greater(6, 7) << std::endl;
    
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();
    return 0;
}