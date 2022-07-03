#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    char string[50];
    int i, contagem = 0;
    printf("Digite uma sequência de números: ");
    gets(string);
    for (i = 0; string[i] != NULL; i++) {
        putchar(string[i]);

    }
    for (i = 0; i<strlen(string);i++) {
        if (string[i] == '1') {
            contagem++;
        }
    }
    printf("\nQuantia de vezes que apareceu o número 1: %d\n", contagem);
    system("pause");
}
