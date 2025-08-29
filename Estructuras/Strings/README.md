# Strings en C

En C, los strings (cadenas de texto) se representan como arreglos de caracteres terminados en '\0'. Permiten almacenar y manipular texto.

## Características
- Se representan como arreglos de tipo `char`.
- Terminan con el carácter nulo `\0`.
- Se pueden manipular con funciones de la biblioteca `<string.h>`.
- No son un tipo de dato primitivo, pero son fundamentales para el manejo de texto.

## ¿Cómo ejecutar el ejemplo?

1. Abre una terminal en esta carpeta.
2. Compila el archivo con:
	```bash
	gcc ejemplo_strings.c -o ejemplo_strings
	./ejemplo_strings
	```

## Ejercicios propuestos
1. Escribe un programa que lea una cadena y la imprima al revés.
2. Crea un programa que cuente cuántas vocales tiene una cadena ingresada por el usuario.
3. Realiza un programa que compare dos cadenas y diga si son iguales o diferentes.
4. Escribe un programa que concatene dos cadenas ingresadas por el usuario.
5. Haz un programa que cuente cuántas palabras hay en una frase.
