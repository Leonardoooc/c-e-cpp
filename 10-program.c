#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int a = 20;
    if (a > 5 && a < 15) {
        printf("\nA variavel 'a' está entre 5 e 15\n");
    }
    if (a > 5 || a > 15) {
        printf("\nA variavel 'a' é maior que 5 ou 15\n");
    }
    if (a > 5 && a < 15 || a == 20) {
        printf("\nA variavel 'a' está entre 5 e 15 ou ela é 20\n");
    }
    system("pause");
}
