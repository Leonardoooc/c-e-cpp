#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int a = 5, opcao = 3;
    float b = 2.5;
    char c = 'x';

    if (a == 4) {
        printf("\nA variavel a = %d\n", a);
    }
    if (b == 2.5) {
        printf("\nA variavel b = %f\n", b);
    }
    if (c == 'x') {
        printf("\nA variavel c = letra %c\n", c);
    }
    if (a % 2 == 1) {
        printf("\nA variavel a é impar\n");
    }
    else {
        printf("\nA variavel a é par\n");
    }
    if (opcao == 1) {
        printf("\nA opcao = 1\n");
    } else if (opcao == 2) {
        printf("\nA opcao = 2\n");
    } else {
        printf("\nA opcao nao é 2 nem 1\n");
    }
    system("pause");
}
