#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *pa = arr; // Ou &arr[0]

    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(pa + i));
    }

    return 0;
}
