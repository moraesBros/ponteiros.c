#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;
    int **pp = &p;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", (void*)&x);
    printf("Valor via ponteiro p: %d\n", *p);
    printf("Valor via ponteiro para ponteiro pp: %d\n", **pp);

    return 0;
}
