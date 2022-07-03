#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int i, valor;
    printf("Digite a tabuada que quiser do 1 ao 10: ");
    scanf("%d", &valor);
    if (valor > 10 || valor < 1) {
        printf("Valor inválido.");
        return 0;
    }
    for(i = 1; i<=10; i++) {
        printf("%d x %d = %d\n", valor, i, i*valor);
    }
    system("pause");
    system("CLS");
}
