#include <stdio.h>

union Valor {
    int numero;
    char letra;
};

int main() {
    union Valor v;

    v.numero = 65;
    printf("Entero: %d\n", v.numero);

    v.letra = 'A';
    printf("Carácter: %c\n", v.letra);

    return 0;
}