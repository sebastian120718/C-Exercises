#include <stdio.h>

typedef struct {
    char  nombre[100];
    float nota;
} Alumno;

int main() {
    int n;
    printf("¿Cuántos estudiantes? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Cantidad inválida.\n");
        return 0;
    }

    Alumno a[n];
    float suma = 0.0f;

    for (int i = 0; i < n; i++) {
        printf("\nEstudiante %d\n", i + 1);
        printf("Nombre: ");
        scanf(" %99[^\n]", a[i].nombre);
        printf("Nota: ");
        scanf("%f", &a[i].nota);
        suma += a[i].nota;
    }

    float promedio = suma / n;

    printf("\n--- Notas ---\n");
    for (int i = 0; i < n; i++)
        printf("%s: %.2f\n", a[i].nombre, a[i].nota);

    printf("\nPromedio del grupo: %.2f\n", promedio);
    return 0;
}