#include <stdio.h>

int main() {
    int x, *px, *py;
    x = 9; // variável inteira inicializada com 9
    px = &x; /* px aponta para x */
    py = px; // ponteiros para inteiros, py recebe o valor de px, py aponta para x

    printf("x = %d\n", x); // exibe o valor de x
    printf("&x = %p\n", (void*)&x); // Correção: Usar %p para imprimir endereços de memória de x
    printf("px = %p\n", (void*)px); // Correção: Usar %p para imprimir endereços de memória de px = x
    printf("*px = %d\n", *px); // exibe o valor de px que é igual ao de x
    printf("*py = %d\n", *py); // Correção: Alterado para *py para demonstrar que py também aponta para x

    return 0;
}
