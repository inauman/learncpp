/*
 * main.cpp
 *
 *  Created on: Jun 13, 2022
 *      Author: nauman
 */

#include <iostream>

int getInteger();
void greet();

int main(){
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << x + y << ".\n";

	greet();
	return 0;

}


