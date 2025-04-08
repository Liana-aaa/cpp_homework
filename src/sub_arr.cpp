#include <stdio.h>

bool is_sub_array(int arr[], int size0, int sub_arr[], int size1) {
    bool is_sub = false;

    if (size1 == 0)
        is_sub = true;

    if (size0 >= size1) {
        int* ptr_arr = arr;
        int* ptr_sub_arr = sub_arr;

        while (ptr_arr <= arr + size0) {
            is_sub = true;

            for (int i = 0; i < size1; ++i) {
                if (*(ptr_arr + i) != *(ptr_sub_arr + i)) { 
                    is_sub = false;
                    break;
                }
            }

            if (is_sub) {
                break;
            }
            
            ptr_arr++;
        }
    }

    return is_sub;   
}