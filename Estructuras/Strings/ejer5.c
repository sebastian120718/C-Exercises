#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200];
    int i, palabras = 0;
    int enPalabra = 0;

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (!isspace(frase[i]) && enPalabra == 0) {
            enPalabra = 1;
            palabras++;
        } else if (isspace(frase[i])) {
            enPalabra = 0;
        }
    }

    printf("La frase tiene %d palabras.\n", palabras);

    return 0;
}