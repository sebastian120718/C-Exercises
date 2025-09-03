#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int i;

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    int longitud = strlen(cadena);

    // Quitar el salto de línea que agrega fgets
    if (cadena[longitud - 1] == '\n') {
        cadena[longitud - 1] = '\0';
        longitud--;
    }

    printf("La cadena al revés es: ");
    for (i = longitud - 1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n");

    return 0;
}