#include <stdio.h>

int main() {
    long n;
    if (scanf("%ld", &n) != 1) return 0;
    int is_prime = 1;
    if (n <= 1) is_prime = 0;
    else if (n == 2) is_prime = 1;
    else if (n % 2 == 0) is_prime = 0;
    else {
        for (long i = 3; i <= n / i; i += 2) {
            if (n % i == 0) { is_prime = 0; break; }
        }
    }
    printf("%d\n", is_prime);
    return 0;
}
