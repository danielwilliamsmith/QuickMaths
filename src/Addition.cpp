/*
 * Addition.cpp
 *
 *  Created on: Dec 7, 2017
 *      Author: dws
 */

#include "Addition.hpp"

int Addition::twoValues(const int x, const int y)
{
	int calculation = x + y;
	int result = 0;

	if(calculation < 10)
		result = calculation;
	else
		result = 10;

	return result;
}


