#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if (valor < 0) {
        printf("O valor %d � negativo.\n", valor);
    }
    if (valor == 0) {
        printf("O valor � zero.\n");
    }
    if (valor > 0) {
        printf("O valor %d � positivo.\nr", valor);
    }
    system("pause");
}
