# Estructuras de Datos en C

Este proyecto contiene ejemplos y ejercicios para conocer y practicar el uso de las principales estructuras de datos primitivas y avanzadas del lenguaje C.

## Carpetas incluidas
- **int/**: Números enteros.
- **float/**: Números reales de precisión simple.
- **char/**: Caracteres individuales.
- **double/**: Números reales de doble precisión.
- **short/**: Enteros cortos (menos memoria).
- **long/**: Enteros largos (mayor capacidad).
- **Strings/**: Cadenas de texto (arreglos de caracteres terminados en '\0').
- **Structs/**: Estructuras que agrupan diferentes tipos de datos bajo un mismo nombre.
- **Unions/**: Estructuras que permiten almacenar diferentes tipos de datos en la misma ubicación de memoria.
- **Enums/**: Enumeraciones, conjuntos de constantes con nombre para facilitar la legibilidad.

Cada carpeta contiene:
- Un archivo `README.md` explicando la estructura y proponiendo 5 ejercicios.
- Un archivo de ejemplo en C mostrando el uso básico de la estructura (si aplica).

## ¿Cómo usar este proyecto?
1. Lee el `README.md` de cada carpeta para entender la estructura de datos.
2. Revisa y ejecuta el ejemplo de código.
3. Resuelve los ejercicios propuestos para practicar.

---

## Formatos de impresión en C

Cuando uses la función `printf` en C, puedes mostrar diferentes tipos de datos usando los siguientes formatos:

- `%c`: Imprime un solo carácter (`char`).
- `%d`: Imprime un número entero (`int`, `short`).
- `%f`: Imprime un número de punto flotante (`float`).
- `%.10f`: Imprime un número de punto flotante con 10 decimales (útil para `float` o `double`).
- `%ld`: Imprime un número entero largo (`long`).

Ejemplo:

```c
char letra = 'A';
int numero = 5;
float decimal = 3.14;
double grande = 2.7182818284;
long largo = 1000000;

printf("Letra: %c\n", letra);
printf("Entero: %d\n", numero);
printf("Decimal: %f\n", decimal);
printf("Double con 10 decimales: %.10f\n", grande);
printf("Long: %ld\n", largo);
```

---

¡Explora, aprende y experimenta con los tipos de datos en C!
