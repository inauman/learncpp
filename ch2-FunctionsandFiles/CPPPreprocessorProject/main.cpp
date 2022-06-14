/*
 * main.cpp
 *
 *  Created on: Jun 14, 2022
 *      Author: nauman
 */

#include <iostream>

// define directive for conditional compilation. This directive defined here would be available
// ONLY in this main.cpp and not other .cpp files.

#define PRINT

// forward declaration using function prototype
void macro();
void cond_preprocessor();
void print();

int main(){
	macro();
	cond_preprocessor();

	std::cout << "\nOut of code outside #if 0" << "\n";

	#if 0 //START
		std::cout << "Won't compile this code within #if 0 directive";

		//following statement contains syntax errors but the program will compile
		// and link successfully and the code block within #if 0 is treated as comment i.e. not
		// compiled.
		std::cout << this is an error and it won't be compiled
	#endif //END

	print();
	return 0;
}

