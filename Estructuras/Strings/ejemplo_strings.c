#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <string.h> // Incluye funciones para manipular cadenas

int main() { // Función principal
    char texto[20] = "Hola"; // Declara un arreglo de char (string) y lo inicializa
    printf("La cadena es: %s\n", texto); // Imprime la cadena
    printf("Longitud: %lu\n", strlen(texto)); // Imprime la longitud de la cadena
    return 0; // Indica que el programa terminó correctamente
}
