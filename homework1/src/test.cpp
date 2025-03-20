#include <vector>
#include <gtest/gtest.h>
#include "functions.h"

TEST(Hello, PrimeFactorsOfTwo) {
    std::vector<int> expected_out = {2};  
    std::vector<int> output = primeFactorize(2);
    ASSERT_EQ(expected_out, output); 
    
}