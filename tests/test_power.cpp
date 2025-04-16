#include <stdio.h>
#include <gtest/gtest.h>
#include "functions.h"

TEST(PowerTest, PowerOfZero) {
    EXPECT_EQ(power(0, 5), 0);
}

TEST(PowerTest, PowerOfOne) {
    EXPECT_EQ(power(1, 5), 1);
}

TEST(PowerTest, PowerOfAnyNumIsZero) {
    EXPECT_EQ(power(2, 0), 1);
    EXPECT_EQ(power(3, 0), 1);
    EXPECT_EQ(power(32463, 0), 1);
}

TEST(PowerTest, PowerOfTwoIsOne) {
    EXPECT_EQ(power(2, 1), 2);
}

TEST(PowerTest, PowerOfTwoIsTwo) {
    EXPECT_EQ(power(2, 2), 4);
}

TEST(PowerTest, PowerOfTwoIsThree) {
    EXPECT_EQ(power(2, 3), 8);
}

TEST(PowerTest, PowerOfTwoIs30) {
    EXPECT_EQ(power(2, 30), 1073741824);
}

TEST(PowerTest, PowerOfTwoIs32) {
    EXPECT_EQ(power(2, 32), 4294967296);
}

TEST(PowerTest, PowerOfTwoIsNegative) {
    EXPECT_EQ(power(2, -1), 0.5);
    EXPECT_EQ(power(2, -2), 0.25);
    EXPECT_EQ(power(2, -3), 0.125);
}

TEST(PowerTest, PowerOfAnyNumberIsAnyNumber) {
    EXPECT_EQ(power(56, 7), 1727094849536);
    EXPECT_EQ(power(15, 12), 129746337890625);
}

TEST(PowerTest, PowerOfZeroIsZero) {
    EXPECT_EQ(power(0, 0), 1);
}