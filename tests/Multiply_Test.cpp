/*
 * Multiply_Test.cpp
 *
 *  Created on: Dec 7, 2017
 *      Author: dws
 */

#include "gtest/gtest.h"
#include "../src/Multiply.hpp"

TEST(MultiplyTest, twoValues){
	Multiply multiply;
	EXPECT_EQ(6, multiply.twoValues(2, 3));
}


