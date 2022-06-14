/*
 * main.cpp
 *
 *  Created on: Jun 14, 2022
 *      Author: nauman
 */

#include <iostream>

int readNumber(){
	std::cout << "Enter number: ";

	int x{};
	std::cin >> x;
	return x;
}

void writeAnswer(int x){
	std::cout << "The answer is: " << x << ".\n";
}

int main(){
	int inputNum1 {readNumber()};
	int inputNum2 {readNumber()};

	writeAnswer(inputNum1 + inputNum2);

	//end the program
	return 0;
}
