#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if (idade < 16) {
        printf("\nNão votante.");
    } else if (idade < 18 && idade > 15 || idade > 65) {
        printf("\nVoto facultativo.");
    } else if (idade > 17 && idade < 66) {
        printf("\nVoto obrigatório.");
    }
    printf("\n");
    system("pause");
}
