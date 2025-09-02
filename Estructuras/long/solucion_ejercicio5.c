#include <stdio.h>

int main() {
    long a, b;
    if (scanf("%ld %ld", &a, &b) != 2) return 0;
    printf("%ld\n", a* b );
    return 0;
}
