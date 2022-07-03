#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int vetor[10];
    int cont;
    printf("Digite o valor dos 10 vetores: \n");
    for(cont = 0;cont < 10; cont++) {
        scanf("%d", &vetor[cont]);
    }
    for (cont = 0;cont < 10; cont++) {
        if (vetor[cont] % 2 == 1) {
            printf("O vetor %d tem o valor impar: %d\n", cont, vetor[cont]);
        }
    }
    system("pause");
}
