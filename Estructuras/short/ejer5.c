#include <stdio.h>

int main() {
    short n;
    if (scanf("%hd", &n) != 1) return 0;

    for (int i = sizeof(short) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
    return 0;
}
