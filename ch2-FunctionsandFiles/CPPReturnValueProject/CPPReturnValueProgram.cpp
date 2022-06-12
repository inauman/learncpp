/*
 * CPPReturnValueProgram.cpp
 *
 *  Created on: Jun 12, 2022
 *      Author: nauman
 */

#include <iostream>

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

int main(){

	// initialize num using the return value from the function using List (or Brace) direct initialization
	int num{ getValueFromUser() };

	// Double the number using expression
	std::cout << num << " doubled is " << 2 * num;

	//end the program with status code/exit code 0
	return 0;
}

