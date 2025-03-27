#include <vector>
#include <gtest/gtest.h>
#include "factors.h"

TEST(FactorTest, Given1_FactorsIsEmpty) {
    std::vector<int> expet = {};
    EXPECT_EQ(GetFactorsOf(1), expet);
}

TEST(FactorTest, Given2_FactorsIs2) {
    std::vector<int> expet = {2};
    EXPECT_EQ(GetFactorsOf(2), expet);
}

TEST(FactorTest, Given3_FactorsIs3) {
    std::vector<int> expet = {3};
    EXPECT_EQ(GetFactorsOf(3), expet);
}

TEST(FactorTest, Given4_FactorsAre2and2) {
    std::vector<int> expet = {2, 2};
    EXPECT_EQ(GetFactorsOf(4), expet);
}

TEST(FactorTest, Given5_FactorsIs5) {
    std::vector<int> expet = {5};
    EXPECT_EQ(GetFactorsOf(5), expet);
}

TEST(FactorTest, Given6_FactorsAre2and3) {
    std::vector<int> expet = {2, 3};
    EXPECT_EQ(GetFactorsOf(6), expet);
}

TEST(FactorTest, Given7_FactorsIs7) {
    std::vector<int> expet = {7};
    EXPECT_EQ(GetFactorsOf(7), expet);
}

TEST(FactorTest, Given8_FactorsAre2and2and2) {
    std::vector<int> expet = {2, 2, 2};
    EXPECT_EQ(GetFactorsOf(8), expet);
}

TEST(FactorTest, Given9_FactorsAre3and3) {
    std::vector<int> expet = {3, 3};
    EXPECT_EQ(GetFactorsOf(9), expet);
}

TEST(FactorTest, Given10_FactorsAre2and5) {
    std::vector<int> expet = {2, 5};
    EXPECT_EQ(GetFactorsOf(10), expet);
}

TEST(FactorTest, GivenLarge_FactorsIsLarge) {
    std::vector<int> expet = {2, 2, 5, 7, 11, 13, 17};
    EXPECT_EQ(GetFactorsOf(2 * 2 * 5 * 7 * 17 * 11 * 13), expet);
}

TEST(FactorTest, GivenLargePrime_FactorsIsLargePrime) {
    std::vector<int> expet = {1000000007};
    EXPECT_EQ(GetFactorsOf(1000000007), expet);
}