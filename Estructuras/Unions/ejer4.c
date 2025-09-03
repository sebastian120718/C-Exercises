#include <stdio.h>

union Mezcla {
    int i;
    double d;
    char c;
    float f;
};

int main() {
    printf("Tamaño de union Mezcla: %lu bytes\n", sizeof(union Mezcla));
    return 0;
}