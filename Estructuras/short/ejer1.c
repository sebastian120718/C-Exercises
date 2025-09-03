#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    short edades[n];
    for (int i = 0; i < n; i++) {
        scanf("%hd", &edades[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%hd%c", edades[i], (i + 1 == n) ? '\n' : ' ');
    }
    return 0;
}
