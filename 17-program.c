#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 5

void main () {
    setlocale(LC_ALL, "");
    int vetor[TAM];
    int cont;

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    for(cont = 0; cont < TAM;cont++) {
        vetor[cont] = vetor[cont]+1;
    }

    printf("Posi��o 0: %d\n", vetor[0]);
    printf("Posi��o 1: %d\n", vetor[1]);
    printf("Posi��o 2: %d\n", vetor[2]);
    printf("Informe os %d valores inteiros para o vetor:\n", TAM);
    for(cont = 0;cont < TAM;cont++) {
        scanf("%d", &vetor[cont]);
    }
    for(cont = 0;cont < TAM;cont++) {
        printf("Posi��o %d: %d\n", cont, vetor[cont]);
    }
    system("pause");
}
