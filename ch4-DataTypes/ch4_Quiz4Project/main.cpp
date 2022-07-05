#include <iostream>

double getTowerHeight();
double calculateBallHeight(double towerHeight, int time);
void printBallHeight(double height, int time);
void calculateAndPrintHeight(double towerHeight, int time);

int main() {
    const double towerHeight{getTowerHeight()};
    std::cout << towerHeight << "\n";

    calculateAndPrintHeight(towerHeight, 0 );
    calculateAndPrintHeight(towerHeight, 1 );
    calculateAndPrintHeight(towerHeight, 2 );
    calculateAndPrintHeight(towerHeight, 3 );
    calculateAndPrintHeight(towerHeight, 4 );
    calculateAndPrintHeight(towerHeight, 5 );

    return 0;
}

double getTowerHeight(){
    std::cout << "Please enter the height of the tower: ";
    double towerHeight{};
    std::cin >> towerHeight;

    return towerHeight;
}

double calculateBallHeight(double towerHeight, int time){
    constexpr double gravity{9.8};

    const double distanceFallen{(gravity * (time * time)) / 2.0};

    const double currentHeight{towerHeight - distanceFallen};

    return currentHeight;
}

void printBallHeight(double height, int time){

    if (height > 0.0){
        std::cout << "At " << time << " seconds"  << "the ball is at height: " << height << " meters\n";
    }
    else{
        std::cout << "At " << time << " seconds, the ball is on the ground.\n";
    }
}

void calculateAndPrintHeight(double towerHeight, int time){
    const double height{calculateBallHeight(towerHeight, time)};
    printBallHeight(height, time);
}