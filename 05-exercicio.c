#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int vetor[20], i, valor, maior = 0, menor = 0, igual = 0;
    printf("Digite os valores do vetor: \n");
    for (i=0;i<20;i++) {
        printf("Posição [%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    valor = vetor[0];
    for (i=1;i<20;i++) {
        if (vetor[i] > valor) {
            maior++;
        }
        if (vetor[i] < valor) {
            menor++;
        }
        if (vetor[i] == valor) {
            igual++;
        }
    }
    printf("Existem %d elementos maiores que %d.\n", maior, valor);
    printf("Existem %d elementos menores que %d.\n", menor, valor);
    printf("Existem %d elementos iguais que %d.\n", igual, valor);
    system("pause");
}
