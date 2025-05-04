#include <stdio.h>

int main() {
    int x, *p, **q;
    x = 10; // variável inteira inicializada com 1
    p = &x; /* px aponta para x */
    q = &p;

    printf(" %d\n", **q); // exibe o valor de x

    return 0;
}
