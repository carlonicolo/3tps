#include <gtest/gtest.h>
#include "math_functions.h"

// Test the addition function
TEST(MathFunctionsTest, Add) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, -1), -2);
}

// Test the subtraction function
TEST(MathFunctionsTest, Subtract) {
    EXPECT_EQ(subtract(5, 3), 2);
    EXPECT_EQ(subtract(0, 5), -5);
}

// Test the product mult() function
TEST(MathFunctionsTest, Mult) {
    EXPECT_EQ(mult(10, 3), 30);
    EXPECT_EQ(mult(5, -4), -20);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
