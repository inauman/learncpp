/*
 * CPPExpressionsProgram.cpp
 *
 *  Created on: Jun 12, 2022
 *      Author: nauman
 */

#include <iostream>

// statement = type identifier { expression }

int five(){
	return 5;
}

int main(){
 int a{ 2 };
 int b{ 2 + 3 };
 int c{ ( 2 * 3 ) + 4 };
 int d{ b };
 int e { five() };

 std::cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << " e: " << e << "\n";
 return 0;
}


