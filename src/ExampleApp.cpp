/*
 * ExampleApp.cpp
 *
 *  Created on: Dec 7, 2017
 *      Author: dws
 */
#include "Addition.hpp"
#include "Multiply.hpp"

#include <iostream>

using namespace std;

int main()
{
	int x = 4;
	int y = 5;

	int z1 = Addition::twoValues(x, y);
	cout << "Addition Result: " << z1 << endl;

	int z2 = Multiply::twoValues(x, y);
	cout << "Multiplication Result: " << z2 << endl;
}



