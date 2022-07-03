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
    for (i=0;i<strlen(palavra);i++) {
        if (palavra[i] > 96 && palavra[i] < 123) {
            palavra[i] = palavra[i]-32;
        }
    }
    printf("\nToda string maiúscula: %s\n", palavra);
    system("pause");
}
