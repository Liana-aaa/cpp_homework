#include <vector>

std::vector<int> primeFactorize(int n) {
    std::vector<int> factors;

    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 1) {
        factors.push_back(n); 
    }

    return factors;
}