#include <stdio.h>

int max (int arr[], int size) {
    int max_element = arr[0];
    
    for (int i = 1; i < size; ++i)
        if (max_element < arr[i])
            max_element = arr[i];
    
    return max_element;
}

bool is_sub_array(int arr[], int size0, int sub_arr[], int size1){
    bool is_sub = false;
    if (size1 == 0) {
        is_sub = true;
    }
    for (int i = 0; i < size0; ++i) {
        for (int j = 0; j < size1; ++j) {
            if (arr[i] == sub_arr[j]) {
                is_sub = true;
                ++i;
            }
            else {
                is_sub = false;
                break;
            }
        }
        if (is_sub) {
            break;
        }
    }
    return is_sub;
}