/*
 * DataTypesProgram.cpp
 *
 *  Created on: Jun 11, 2022
 *      Author: nauman
 */

#include <iostream>

int main() {
	/*int a;
	 int b;
	 int c, d;
	 double f;*/

	// define NOT initialize
	int width;

	// initialize i.e. assignment of value 5 into variable width
	width = 15;

	//change the assignment to a different int value
	width = 17;

	std::cout << width;

	// 4 different ways to initialize
	// 1. int a; --> No initialize
	//2. int b = 5; define and initialize

	// 3. interesting, direct initialization of value thru parenthesis
	int c(6);
	std::cout << "\n";
	std::cout << c;

	//4. more interesting, Brace initialization...initialize thru curly braces, used for better safety
	int f { 7 };
	std::cout << "\n";
	std::cout << f;

	//different between direct and brance i initialization
	//direct initialization would work fine and at runtime value conversion would happen
	int m(4.5);
	std::cout << "\n";
	std::cout << m << "\n";

	//brace initialization won't work for incompatible data types
	//int n{4.5}; //compiler would complain about it

	// brace init in 3 flavors
	int w { 5 };
	int h = { 6 };
	int d { };

	// wrong...p is not initialized correctly
	int p, q = 15;
	std::cout << p; // wrong...prints 1 not 15

	// correct...both vars are initialized correctly
	int s = 5, t = 15;
	std::cout << "\n";
	std::cout << s << "\n"; // correct...prints 5

	int x { 5 }, y { 10 };
	std::cout << x << " is smaller than " << y << std::endl; // correct...prints 5
	//note: use \n instead of std::endl because the latter requires flush in addition to putting the cursor in next line

	std::cout << "Hello " << "World!!!" << "\n"; // insertion operator << is used to concatenate multiple values
	//use << (insertion operator to put the cursor to next line)

	std::cout << "\n*******************************\n\n";

	// read the user input
	std::cout << "Enter the number: ";

	// define the number
	int xx { }; //1. as a good practice, we used brace initialization 2. we didn't initialize it with zero as the value won't be used immediately, instead it will be replaced with the value provided by the user

	std::cin >> xx; // this capture the value from the keyboard and stores it into the variable xx

	std::cout << "You entered the value --> " << xx << "\n";

	// end of the program
	return 0;

}

