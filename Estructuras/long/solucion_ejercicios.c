//ejercicio 1
#include <stdio.h>


long factorial(int n) {
    long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El factorial no esta definido para numeros negativos.\n");
    } else {
        long fact = factorial(numero);
        printf("El factorial de %d es: %ld\n", numero, fact);
    }

    return 0;
}

