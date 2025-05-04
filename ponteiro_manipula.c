#include <stdio.h>

int main() {
    int x, *px;
    x = 1; // variável inteira inicializada com 1
    px = &x; /* px aponta para x */

    printf("x = %d\n", x); // exibe o valor de x
    printf("px = %p\n", (void*)px); // Correção: Usar %p para imprimir endereços de memória
    printf("*px + 1 = %d\n", *px + 1); // Soma 1 ao valor apontado por px, sem alterar x
    printf("*px = %d\n", *px); // Exibe o valor de x via ponteiro

    *px += 1; // Incrementa o valor de x em 1
    printf("*px += 1 -> x = %d\n", *px);

    (*px)++; // Pós-incremento do valor de x
    printf("(*px)++ -> x = %d\n", *px);

    printf("px = %p\n", (void*)px);

    // Aqui começam operações problemáticas:
    // px++ avança o ponteiro para a próxima posição de memória, o que pode ser perigoso se não estiver alocado corretamente.
    printf("*(px++) = %d\n", *(px++)); // Primeiro desreferencia px, depois avança para a próxima posição
    printf("px = %p\n", (void*)px);

    printf("*px++ = %d\n", *px++); // Semântica semelhante ao anterior: usa px antes de avançá-lo
    printf("px = %p\n", (void*)px);

    return 0;
}
