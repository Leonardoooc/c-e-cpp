#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int valor;
    do {
        printf("Digite um número: ");
        scanf("%d", &valor);
    }while(valor > 1);
    system("pause");
}
