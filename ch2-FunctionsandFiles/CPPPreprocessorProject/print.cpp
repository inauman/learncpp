/*
 * print.cpp
 *
 *  Created on: Jun 14, 2022
 *      Author: nauman
 */

// PRINT from main.cpp won't be available in this file
#include <iostream>

void print(){
	#if defined(PRINT)
		std::cout << "\nPrint command.\n";
	#endif

	#if !defined(PRINT)
		std::cout << "\n Do not print.\n";
	#endif
}


