/*
 * main.cpp
 *
 *  Created on: Jun 14, 2022
 *      Author: nauman
 */

//define the function prorotype
#include "io.h"


int main(){

	int inputNum1 {readNumber()};
	int inputNum2 {readNumber()};

	writeAnswer(inputNum1 + inputNum2);

	//end the program
	return 0;
}
