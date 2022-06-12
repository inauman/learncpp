/*
 * CPPMyFirstProgram.cpp
 *
 *  Created on: Jun 12, 2022
 *      Author: nauman
 */

#include <iostream>

// this function doubles the value of the number
int doubleTheNumber(int n) {
	return 2 * n;
}

int main() {

	std::cout << "Enter the number: ";

	// define an integer variable to capture user input
	// use brace declaration to constrain the data type to int

	int num { };

	// capture the value entered by the user and store it in the temp variable
	std::cin >> num;

	// solution 1: we double the user input and just print it
	// num = num * 2;
	// std::cout << num;
	// BUT with this option, we overwrote the original user input and can't use it for subsequent
	// computation without doing some messy workarounds

	// Solution 2: use function, while it may be good for large computations, in this case it is an overkill

	std::cout << "\n\n Solution 2 (Function Call): Double that number is: " << doubleTheNumber(num)
			<< "\n\n";

	// solution 3: a better version is using the brace declaration, define another variable to store
	// the computer result. BUT here we defined a new variable just for ONE time use so it is better but can be improved further
	int doubleNum { 2 * num };

	std::cout << "\n\n Solution 3 (Brace Declaration): Double of the number is: " << doubleNum
			<< "\n\n";

	// solution 4: use an expression where the results are discarded after use
	std:: cout << "\n\n************preferred solution:******************\n\n";
	std::cout << "Solution 4: Expression: Double that number is: " << num * 2 << "\n\n";

	//end of the program
	return 0;
}

