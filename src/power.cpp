#include <stdio.h>

double power(int x, int n) {
    if (x == 0) 
        return 0;

    double result = 1;
    double x1 = x;

    if (n < 0) {
        n *= -1;
        x1 = 1.0 / x;
    }

    for (int i = 0; i < n; ++i) 
        result *= x1;
    
    return result;
}