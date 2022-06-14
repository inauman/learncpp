/*
 * main.cpp
 *
 *  Created on: Jun 14, 2022
 *      Author: nauman
 */

//define the function prorotype
int readNumber();
void writeAnswer(int x);


int main(){

	int inputNum1 {readNumber()};
	int inputNum2 {readNumber()};

	writeAnswer(inputNum1 + inputNum2);

	//end the program
	return 0;
}
