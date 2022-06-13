/*
 * CPPArgsParamsProgram.cpp
 *
 *  Created on: Jun 13, 2022
 *      Author: nauman
 */

#include <iostream>

//forward declaration using "function prototypes".
int subtract(int x, int y);
int doMath(int first, int second, int third, int fourth);

void printValues(int x, int y){
	std::cout << x << "\n";
	std::cout << y << "\n";
}

int add(int x, int y){
	return x + y;
}

int multiply(int a, int b){
	return a * b;
}

int main(){
	printValues(5,7);

	std::cout << add(5, 7) << "\n";

	int a{5};
	std::cout << add(a, a) << "\n";

	std::cout << add(1, multiply(3, 7)) << "\n";

	std::cout << subtract(7, 5) << "\n";

	std::cout << doMath(1, 3, 4, 2) << "\n";
}

int subtract(int x, int y){
	return x - y;
}

int doMath(int first, int second, int third, int fourth){
	return first + second * third / fourth;
}




