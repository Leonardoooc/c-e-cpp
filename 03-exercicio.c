#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int valor, cont, a;
    printf("Digite quantos números você quer: ");
    scanf("%d", &valor);
    int vetor[valor];
    printf("Digite os valores dos vetores: \n");
    for(cont = 0; cont < valor; cont++) {
        scanf("%d", &vetor[cont]);
    }
    for(cont = valor; cont > 0; cont--) {
        a = cont - 1;
        printf("Vetor [%d] = %d\n", cont - 1, vetor[a]);
    }
    system("pause");
}
