#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#define TAM 4

void main () {
    setlocale(LC_ALL, "");
    int vetor[TAM];
    int cont, media;
    printf("Digite as %d notas do usu�rio: \n", TAM);
    for(cont = 0;cont < TAM;cont++) {
        scanf("%d", &vetor[cont]);
    }
    for(cont = 0; cont < TAM;cont++) {
        printf("Posi��o %d: %d\n", cont, vetor[cont]);
    }
    media = (vetor[0]+vetor[1]+vetor[2]+vetor[3])/4;
    printf("A m�dia das notas do usu�rio foi: %d\n", media);
    system("pause");
}
