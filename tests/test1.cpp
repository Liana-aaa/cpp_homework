#include <stdio.h>
#include <gtest/gtest.h>
#include "functions.h"

TEST(SubTest, ArrayOf0Element) {
    int arr[0] = {};
    int sub_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    EXPECT_EQ(is_sub_array(arr, 0, sub_arr, 10), false);
}

TEST(SubTest, ArrayOfMoreThan1ElementAndSubArrayOf0Element) {
    int arr0[1] = {0};
    int arr1[2] = {0, 1};
    int sub_arr[0] = {};
    EXPECT_EQ(is_sub_array(arr0, 1, sub_arr, 0), true);
    EXPECT_EQ(is_sub_array(arr1, 2, sub_arr, 0), true);
}

TEST(SubTest, ArrayOf1ElementAndSubArrayOf1Element) {
    int arr[1] = {0};
    int sub_arr0[1] = {0};
    int sub_arr1[1] = {1};
    EXPECT_EQ(is_sub_array(arr, 1, sub_arr0, 1), true);
    EXPECT_EQ(is_sub_array(arr, 1, sub_arr1, 1), false);
}

TEST(SubTest, ArrayOf1ElementsAndSubArrayMoreThan1Element) {
    int arr[1] = {0};
    int sub_arr0[2] = {0, 1};
    int sub_arr1[3] = {0, 1, 2};
    EXPECT_EQ(is_sub_array(arr, 1, sub_arr0, 2), false);
    EXPECT_EQ(is_sub_array(arr, 1, sub_arr1, 3), false);
}

TEST(SubTest, ArrayOf2ElementsAndSubArrayOf1Element) {
    int arr[2] = {0, 1};
    int sub_arr0[1] = {0};
    int sub_arr1[1] = {1};
    int sub_arr2[1] = {2};
    EXPECT_EQ(is_sub_array(arr, 2, sub_arr0, 1), true);
    EXPECT_EQ(is_sub_array(arr, 2, sub_arr1, 1), true);
    EXPECT_EQ(is_sub_array(arr, 2, sub_arr2, 1), false);
}

TEST(SubTest, ArrayOf2ElementsAndSubArrayOf2Elements) {
    int arr[2] = {0, 1};
    int sub_arr0[2] = {0, 1};
    int sub_arr1[2] = {1, 0};
    EXPECT_EQ(is_sub_array(arr, 2, sub_arr0, 2), true);
    EXPECT_EQ(is_sub_array(arr, 2, sub_arr1, 2), false);
}

TEST(SubTest, ArrayOf2ElementsAndSubArrayOfMoreThan2Elements) {
    int arr[2] = {0, 1};
    int sub_arr0[3] = {0, 1, 2};
    int sub_arr1[3] = {1, 0, 2};
    EXPECT_EQ(is_sub_array(arr, 2, sub_arr0, 3), false);
    EXPECT_EQ(is_sub_array(arr, 2, sub_arr1, 3), false);
}

TEST(SubTest, ArrayFromManyElementsAndSubArrayOfLessThanSizeOfArrayElements) {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sub_arr0[2] = {4, 5};
    int sub_arr1[4] = {5, 4, 3, 7};
    int sub_arr2[6] = {10, 11, 12, 13, 14, 15};
    int sub_arr3[1] = {4};
    int sub_arr4[1] = {10};
    EXPECT_EQ(is_sub_array(arr, 10, sub_arr0, 2), true);
    EXPECT_EQ(is_sub_array(arr, 10, sub_arr1, 4), false);
    EXPECT_EQ(is_sub_array(arr, 10, sub_arr2, 6), false);
    EXPECT_EQ(is_sub_array(arr, 10, sub_arr3, 1), true);
    EXPECT_EQ(is_sub_array(arr, 10, sub_arr4, 1), false);
}

TEST(SubTest, ArrayFromManyElementsAndSubArrayOfSizeEqualToSizeOfArrayElements) {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sub_arr0[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sub_arr1[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    EXPECT_EQ(is_sub_array(arr, 10, sub_arr0, 10), true);
    EXPECT_EQ(is_sub_array(arr, 10, sub_arr1, 10), false);
}

TEST(SubTest, ArrayFromManyElementsAndSubArrayOfMoreThanSizeOfArrayElements) {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sub_arr0[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    EXPECT_EQ(is_sub_array(arr, 10, sub_arr0, 11), false);
}