#include <stdio.h>

union Numero {
    int entero;
    float real;
};

int main() {
    union Numero n;

    n.entero = 42;
    printf("Valor entero: %d\n", n.entero);

    n.real = 3.14;
    printf("Valor float: %.2f\n", n.real);

    // Al imprimir el entero otra vez veremos corrupción, porque se sobrescribe
    printf("Entero tras asignar float: %d\n", n.entero);

    return 0;
}