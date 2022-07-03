#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int valor;
    while (valor < 12 || valor > 20) {
        printf("Digite um número entre 12 e 20: ");
        scanf("%d", &valor);
        if (valor < 12 || valor > 20) {
            printf("Número inválido.\n");
        } else {
            printf("Você digitou o número: %d\n", valor);
        }
    }
    system("pause");
}
