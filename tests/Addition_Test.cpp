/*
 * Addition_Test.cpp
 *
 *  Created on: Dec 7, 2017
 *      Author: dws
 */

#include "gtest/gtest.h"
#include "../src/Addition.hpp"

TEST(AdditionTest, twoValues){
	const int x = 4;
	const int y = 5;
	Addition addition;
	EXPECT_EQ(9, addition.twoValues(x,y));
	EXPECT_EQ(5, addition.twoValues(2, 3));
}


