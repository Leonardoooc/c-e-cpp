#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    char palavra[50];
    int i;
    printf("Digite uma palavra: ");
    gets(palavra);
    for (i = 0; palavra[i] != NULL; i++) {
        putchar(palavra[i]);
    }
    printf("\nPalavra invertida: %s\n", strrev(palavra));
    system("pause");
}
