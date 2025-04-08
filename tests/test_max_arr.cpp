#include <stdio.h>
#include <gtest/gtest.h>
#include "functions.h"

TEST(MaxTest, ArrOf1Element_SameElement) {
    int arr[1] = {0};
    EXPECT_EQ(max(arr, 1), 0);
}

TEST(MaxTest, ArrOf2Elements_returnsMax) {
    int arr0[2] = {0, 1};
    int arr1[2] = {1, 0};
    EXPECT_EQ(max(arr0, 2), 1);
    EXPECT_EQ(max(arr1, 2), 1);
}

TEST(MaxTest, ArrOf3Elements_returnsMax) {
    int arr0[3] = {0, 1, 2};
    int arr1[3] = {2, 1, 0};
    int arr2[3] = {1, 2, 0};
    EXPECT_EQ(max(arr0, 3), 2);
    EXPECT_EQ(max(arr1, 3), 2);
    EXPECT_EQ(max(arr2, 3), 2);
}

TEST(MaxTest, ArrOf4Elements_returnsMax) {
    int arr0[4] = {0, 1, 2, 3};
    int arr1[4] = {3, 2, 1, 0};
    int arr2[4] = {1, 3, 2, 0};
    int arr3[4] = {2, 0, 3, 1};
    EXPECT_EQ(max(arr0, 4), 3);
    EXPECT_EQ(max(arr1, 4), 3);
    EXPECT_EQ(max(arr2, 4), 3);
    EXPECT_EQ(max(arr3, 4), 3);
}

TEST(MaxTest, ArrFromManyElements_returnsMax) {
    int arr[10] = {42, -17, 83, 0, 19, -56, 71, 5, -8, 64};
    EXPECT_EQ(max(arr, 10), 83);
}