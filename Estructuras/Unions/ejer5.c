#include <stdio.h>

union Conversor {
    int i;
    float f;
};

int main() {
    union Conversor conv;

    conv.i = 1065353216; // Representación binaria de 1.0 en float (IEEE 754)
    printf("Interpretado como int: %d\n", conv.i);
    printf("Interpretado como float: %f\n", conv.f);

    conv.f = 2.5;
    printf("Ahora como float: %f\n", conv.f);
    printf("Interpretado como int: %d\n", conv.i);

    return 0;
}