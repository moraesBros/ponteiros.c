#include <stdio.h>

int main() {
    char *al= "conjunto"; //ponteiro para uma string constante "conjunto"
    char re[]="simples"; // array de caracteres, uma string que pode ser modificada
    puts(al); // imprimi "conjunto"
    puts (&re[0]); // ou puts(re), imprimi "simples"
    for(;*al; al++); //loop até o '\0'
    putchar(*al); // imprimi '\0' que não é visivel
    putchar('\n'); // quebra de linha
    return 0;
}
