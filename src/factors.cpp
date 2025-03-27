#include <vector>

std::vector<int> GetFactorsOf (int n) {
    std::vector<int> factors;
    int divisor = 2;
    while (n > 1) {
        while (n % divisor == 0) {
            factors.push_back(divisor);
            n /= divisor;
        }
        divisor++;
    }
    return factors;
}