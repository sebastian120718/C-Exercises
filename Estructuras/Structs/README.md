# Structs en C

Un `struct` es una estructura que permite agrupar diferentes tipos de datos bajo un mismo nombre. Es útil para modelar objetos o entidades con varias características.

## Características
- Permite agrupar variables de diferentes tipos.
- Cada elemento dentro del struct se llama "miembro".
- Se accede a los miembros usando el operador punto (`.`).
- Útil para representar entidades complejas (personas, libros, etc).

## ¿Cómo ejecutar el ejemplo?

1. Abre una terminal en esta carpeta.
2. Compila el archivo con:
	```bash
	gcc ejemplo_structs.c -o ejemplo_structs
	./ejemplo_structs
	```

## Ejercicios propuestos
1. Define un struct para representar un estudiante (nombre, edad, promedio) y muestra sus datos.
2. Crea un arreglo de structs para almacenar información de 5 libros (título, autor, año).
3. Escribe un programa que reciba los datos de una persona y los imprima usando un struct.
4. Realiza un programa que calcule el promedio de notas de varios estudiantes usando structs.
5. Haz un programa que compare dos structs de tipo persona y diga si son iguales.
