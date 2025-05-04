#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(sizeof(int));

    if (p == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    *p = 25;
    printf("Valor alocado: %d\n", *p);

    free(p); // Libera a memória alocada

    return 0;
}
