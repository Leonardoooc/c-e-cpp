#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int valor;
    while (valor < 12 || valor > 20) {
        printf("Digite um n�mero entre 12 e 20: ");
        scanf("%d", &valor);
        if (valor < 12 || valor > 20) {
            printf("N�mero inv�lido.\n");
        } else {
            printf("Voc� digitou o n�mero: %d\n", valor);
        }
    }
    system("pause");
}
