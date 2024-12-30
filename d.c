// #include <stdio.h>

// int euclideanA(int m, int n) {
//     if (n == 0) {
//         return m;  // Base case: GCD of m and 0 is m
//     } else {
//         return euclideanA(n, m % n);  // Recursive case
//     }
// }

// int main() {
//     int m = 43;
//     int n = 10;
//     printf("GCD of %d and %d is %d\n", m, n, euclideanA(m, n));
//     return 0;
// }
#include <stdio.h>

int main() {
    int a, d, m;
    for (a = 0; a <= 30; a++) {
        for (d = 0; d <= 30; d++) {
            m = 30 - a - d;
            if (m >= 0 && 3 * a + 6 * d + 2 * m == 100) {
                printf("a = %d, d = %d, m = %d\n", a, d, m);
            }
        }
    }
    return 0;
}
