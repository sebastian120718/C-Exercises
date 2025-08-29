# Unions en C

Una `union` es similar a un struct, pero todos sus miembros comparten la misma ubicación de memoria. Solo uno de los miembros puede almacenar un valor a la vez.

## Características
- Todos los miembros comparten la misma dirección de memoria.
- El tamaño de la union es igual al del miembro más grande.
- Solo se puede usar un miembro a la vez.
- Útil para ahorrar memoria cuando solo se necesita un valor a la vez.

## ¿Cómo ejecutar el ejemplo?

1. Abre una terminal en esta carpeta.
2. Compila el archivo con:
	```bash
	gcc ejemplo_unions.c -o ejemplo_unions
	./ejemplo_unions
	```

## Ejercicios propuestos
1. Declara una union con un int y un float, asigna valores y muestra cómo se sobreescriben.
2. Escribe un programa que use una union para almacenar diferentes tipos de datos y los imprima.
3. Crea una union para representar un valor que puede ser entero o carácter y muestra ambos casos.
4. Haz un programa que demuestre el tamaño de una union con varios tipos de datos.
5. Realiza un programa que use una union para convertir entre tipos de datos (por ejemplo, int a float).
