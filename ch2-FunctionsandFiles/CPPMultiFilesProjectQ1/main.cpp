/*
 * main.cpp
 *
 *  Created on: Jun 13, 2022
 *      Author: nauman
 */

#include <iostream>

int getInteger();

int main(){
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << x + y << ".\n";
	return 0;

}


