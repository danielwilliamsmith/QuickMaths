/*
 * Addition_Test.cpp
 *
 *  Created on: Dec 7, 2017
 *      Author: dws
 */

#include "gtest/gtest.h"
#include "../src/Addition.hpp"

TEST(AdditionTest, twoValuesUnderLimit){
	Addition addition;
	EXPECT_EQ(9, addition.twoValues(5, 4));
}

TEST(AdditionTest, twoValuesOverLimit){
	Addition addition;
	EXPECT_EQ(10, addition.twoValues(10, 1));
}

