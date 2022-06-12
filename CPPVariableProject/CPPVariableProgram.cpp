/*
 * CPPVariableProgram.cpp
 *
 *  Created on: Jun 11, 2022
 *      Author: nauman
 */

#include <iostream>

void doNothing(int&) {

}

void varNamingConvention() {
	// Identifier: name of a variable
	// start with a lower case
	// user-defined types (structs, classes, enumerations) can start with capital letters
	// for multiword, use underscore or camelCase (preferred)
	// Avoid naming start with underscore

	std::cout << "\nHello World\n";

	std::cout << "\nHello"
			"World\n\n";

	std::cout << 3 + 4 + 5 + 6 * 2 * 3 << "\n";
}

void literalsAndOperators() {
// three arity (i.e. how many operand) an operator can take
// Unary, Binary, Ternary
}

int five() {
	return 5;
}

int main() {

	int x;
	doNothing(x);
	std::cout << x << "\n";
	varNamingConvention();
	return 0;

}

