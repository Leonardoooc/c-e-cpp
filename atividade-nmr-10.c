#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int soma = 0, valor;
    do {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        soma = valor+soma;
    }while(valor > 0 || valor < 0);
    printf("Valor total somado: %d\n", soma);
    system("pause");
}
