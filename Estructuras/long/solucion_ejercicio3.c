//ejercicio 3

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    long x;
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%ld", &x);
        if (x % 2 != 0) count++;
    }
    printf("%d\n", count);
    return 0;
}