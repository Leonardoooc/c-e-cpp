#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if (valor % 7 == 0 && valor % 3 == 0) {
        printf("Divisível por 7 e 3.\n");
    } else if (valor % 7 == 0) {
        printf("Divisível por 7.\n");
    } else if (valor % 3 == 0) {
        printf("Divisível por 3.\n");
    } else {
        printf("Não divisível.\n");
    }
    system("pause");
}
