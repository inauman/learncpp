/*
 * conditional_preprocessor.cpp
 *
 *  Created on: Jun 14, 2022
 *      Author: nauman
 */

#include <iostream>

#define PRINT_JOE
#define PRINT_BOB

void cond_preprocessor() {

	//#ifdef PRINT_JOE
	#if defined(PRINT_JOE)
		std::cout << "\nConditional Preprocessor --> Joe\n";
	#endif

	//#ifdef PRINT_BOB
	#if defined(PRINT_BOB)
		std::cout << "\nConditional Preprocessor --> Bob\n";
	#endif

}

