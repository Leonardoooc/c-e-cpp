#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int quantia, i, soma = 0, a;
    printf("Digite a quantia de idades: ");
    scanf("%d", &quantia);
    for(i=1;i<=quantia;i++) {
        printf("Digite a %d° idade: ", i);
        scanf("%d", &a);
        soma = a+soma;
    }
    printf("Média das idades: %d\n", soma/quantia);
    system("pause");
}
