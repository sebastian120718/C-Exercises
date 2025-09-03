#include <stdio.h>

int main() {
    short n;
    if (scanf("%hd", &n) != 1) return 0;
    printf("%d\n", n % 5 == 0);
    return 0;
}
