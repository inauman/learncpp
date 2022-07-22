#include <iostream>

int main() {
    std::cout << "Please enter smaller number: ";
    int smaller{};
    std::cin >> smaller;

    std::cout << "Please enter larger number: ";
    int larger{};
    std::cin >> larger;

    if(smaller > larger){
        int tmp_var{}; //tmp_var born here
        tmp_var = smaller; // smaller here is really the larger
        smaller = larger;
        larger = tmp_var;

        //instead of the tmp variable, we can use std::swap utility function in future
        //std::swap(smaller, larger);

    } //tmp_var dies here

    std::cout << "smaller: " << smaller << " & larger: " << larger << std::endl;

    return 0;
}