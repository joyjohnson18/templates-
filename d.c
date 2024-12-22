#include <stdio.h>

int euclideanA(int m, int n) {
    if (n == 0) {
        return m;  // Base case: GCD of m and 0 is m
    } else {
        return euclideanA(n, m % n);  // Recursive case
    }
}

int main() {
    int m = 43;
    int n = 10;
    printf("GCD of %d and %d is %d\n", m, n, euclideanA(m, n));
    return 0;
}
