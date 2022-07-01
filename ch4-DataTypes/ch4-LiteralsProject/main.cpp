#include <iostream>

int main() {
    std::cout << 5 << "\n";
    std::cout << 5L << "\n";

    unsigned int x{5};

    std::cout << x << "\n";

    float f{4.1};
    std::cout << f << "\n";

    double pi{3.14159};
    double avogadro{6.02e23};
    double electron{1.6e-19};

    std::cout << electron << "\n";

    //avoid using magic numbers, instead use symbolic constants
    constexpr int kMaxStudentPerClass{30};
    constexpr int kNumClassrooms{50};
    constexpr int totalStudents{kNumClassrooms * kMaxStudentPerClass};
    constexpr int kMaxNameLength{30};
    //setMax(kMaxNameLength);

    return 0;
}
