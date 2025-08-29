#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <string.h> // Incluye funciones para manipular cadenas

struct Persona { // Define una estructura llamada Persona
    char nombre[20]; // Campo para el nombre
    int edad; // Campo para la edad
};

int main() { // Función principal
    struct Persona persona; // Declara una variable de tipo struct Persona
    strcpy(persona.nombre, "Ana"); // Asigna el nombre "Ana" al campo nombre
    persona.edad = 30; // Asigna 30 al campo edad
    printf("Nombre: %s, Edad: %d\n", persona.nombre, persona.edad); // Imprime los datos
    return 0; // Indica que el programa terminó correctamente
}
