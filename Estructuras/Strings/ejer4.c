#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[100], cadena2[100], resultado[200];

    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);

    // Quitar saltos de línea
    cadena1[strcspn(cadena1, "\n")] = '\0';
    cadena2[strcspn(cadena2, "\n")] = '\0';

    strcpy(resultado, cadena1);
    strcat(resultado, " ");
    strcat(resultado, cadena2);

    printf("Concatenación: %s\n", resultado);

    return 0;
}