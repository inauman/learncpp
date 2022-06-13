/*
 * CPPReturnValueProgram.cpp
 *
 *  Created on: Jun 12, 2022
 *      Author: nauman
 */

#include <iostream>
#include <cstdlib>

// this function asks for the user to input a number
// it returns the user typed integer value
int getValueFromUser() {

	// print a user friendly message
	std::cout << "Enter an integer: ";

	//Use Brace i.e. List declaration to define the temp var to store the user input
	int input { };

	// send the user typed value from keyboard to the input temp variable
	std::cin >> input;

	//return the user typed value
	return input;
}

void voidFunction(){
	std::cout << "\n\nJust say hello." << "\n";

}

void printDouble(int x){
	std::cout << x << " doubled is " << 2 * x << ".\n\n";
}

void printValue(int x){
	std::cout << x << "\n";
}

int add(int x, int y){
	return x + y;
}

int main(){

	// initialize num using the return value from the function using List (or Brace) direct initialization
	int x{ getValueFromUser() };
	int y{ getValueFromUser() };

	// Double the number using expression
	printDouble(x);
	std::cout << x << " + " << y << " = " << x + y << ".\n";



	//end the program with status code/exit code 0
	return EXIT_SUCCESS; //note: EXIT_SUCCESS/EXIT_FAILURE are defined in cstdlib
}

