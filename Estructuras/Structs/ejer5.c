#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[100];
    int  edad;
    char ciudad[100];
} Persona;

int iguales(Persona a, Persona b) {
    return (a.edad == b.edad) &&
           (strcmp(a.nombre, b.nombre) == 0) &&
           (strcmp(a.ciudad, b.ciudad) == 0);
}

int main() {
    Persona p1, p2;

    printf("Persona 1\n");
    printf("Nombre: ");
    scanf(" %99[^\n]", p1.nombre);
    printf("Edad: ");
    scanf("%d", &p1.edad);
    printf("Ciudad: ");
    scanf(" %99[^\n]", p1.ciudad);

    printf("\nPersona 2\n");
    printf("Nombre: ");
    scanf(" %99[^\n]", p2.nombre);
    printf("Edad: ");
    scanf("%d", &p2.edad);
    printf("Ciudad: ");
    scanf(" %99[^\n]", p2.ciudad);

    if (iguales(p1, p2)) {
        printf("\nLas personas son IGUALES.\n");
    } else {
        printf("\nLas personas son DIFERENTES.\n");
    }
    return 0;
}