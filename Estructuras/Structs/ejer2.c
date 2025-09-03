#include <stdio.h>

typedef struct {
    char titulo[120];
    char autor[100];
    int  anio;
} Libro;

int main() {
    Libro libros[5];
    for (int i = 0; i < 5; i++) {
        printf("\nLibro %d\n", i + 1);
        printf("Título: ");
        scanf(" %119[^\n]", libros[i].titulo);
        printf("Autor: ");
        scanf(" %99[^\n]", libros[i].autor);
        printf("Año: ");
        scanf("%d", &libros[i].anio);
    }

    printf("\n--- Biblioteca ---\n");
    for (int i = 0; i < 5; i++) {
        printf("%d) \"%s\" — %s (%d)\n", i + 1, libros[i].titulo, libros[i].autor, libros[i].anio);
    }
    return 0;
}