#include <stdio.h>

union Datos {
    int i;
    float f;
    char c;
};

int main() {
    union Datos d;

    d.i = 100;
    printf("Entero: %d\n", d.i);

    d.f = 9.81;
    printf("Float: %.2f\n", d.f);

    d.c = 'A';
    printf("Carácter: %c\n", d.c);

    return 0;
}