/*
 * main.cpp
 *
 *  Created on: Jun 14, 2022
 *      Author: nauman
 */

#include "greeting.h"
#include <iostream>
#include "add.h"

int main(){

	greet();
	std::cout << "Let's add two numbers: " << add(3, 4) << "\n";
}


