#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

int main() { // Función principal
    float radio = 2.5; // Declara una variable float 'radio' y le asigna el valor 2.5
    float area = 3.1416 * radio * radio; // Calcula el área del círculo usando la fórmula πr²
    printf("El área de un círculo de radio %.2f es %.2f\n", radio, area); // Imprime el resultado en pantalla
    return 0; // Indica que el programa terminó correctamente
}
