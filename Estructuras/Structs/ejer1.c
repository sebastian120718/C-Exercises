#include <stdio.h>

typedef struct {
    char nombre[100];
    int  edad;
    float promedio;
} Estudiante;

int main() {
    Estudiante e;

    printf("Nombre: ");
    scanf(" %99[^\n]", e.nombre);
    printf("Edad: ");
    scanf("%d", &e.edad);
    printf("Promedio: ");
    scanf("%f", &e.promedio);

    printf("\n--- Datos del estudiante ---\n");
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n", e.nombre, e.edad, e.promedio);
    return 0;
}