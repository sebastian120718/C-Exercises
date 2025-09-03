#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[100], cadena2[100];

    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);

    // Quitar saltos de línea
    cadena1[strcspn(cadena1, "\n")] = '\0';
    cadena2[strcspn(cadena2, "\n")] = '\0';

    if (strcmp(cadena1, cadena2) == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}