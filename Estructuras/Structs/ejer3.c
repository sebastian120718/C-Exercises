#include <stdio.h>

typedef struct {
    char nombre[100];
    int  edad;
    char ciudad[100];
} Persona;

int main() {
    Persona p;

    printf("Nombre: ");
    scanf(" %99[^\n]", p.nombre);
    printf("Edad: ");
    scanf("%d", &p.edad);
    printf("Ciudad: ");
    scanf(" %99[^\n]", p.ciudad);

    printf("\n--- Persona ---\n");
    printf("Nombre: %s\nEdad: %d\nCiudad: %s\n", p.nombre, p.edad, p.ciudad);
    return 0;
}