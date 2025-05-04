#include <stdio.h>

int main() {
    int a[10]; // Declaração de um array de inteiros com 10 posições
    int *pa;   // Ponteiro para inteiro

    pa = a; // `pa` recebe o endereço do primeiro elemento do array (`a[0]`)
    
    // Removendo `x = pa;` pois `x` não foi declarado e essa atribuição não faz sentido
    // `*(pa+1);` sozinho não tem efeito, mas poderia ser usado para acessar `a[1]`

    return 0;
}
