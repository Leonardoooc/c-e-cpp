#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if (valor >= 5 && valor <= 20) {
        printf("O valor %d est� entre 5 e 20.\n", valor);
    }
    else {
        printf("O valor %d n�o est� entre 5 e 20.\n", valor);
    }
    system("pause");
}
