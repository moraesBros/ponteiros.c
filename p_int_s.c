#include <stdio.h>

int main() {
    int x = 10;
    int *px = &x;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", (void*)&x);
    printf("Valor acessado via ponteiro: %d\n", *px);

    return 0;
}
