#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int valor, somat = 0, soma, i;
    printf("Digite quantos números você nos vetores: ");
    scanf("%d", &valor);
    int vetorx[valor], vetory[valor];
    printf("Digite os valores do vetor x: \n");
    for (i=0;i<valor;i++) {
        scanf("%d", &vetorx[i]);
    }
    printf("Digite os valores do vetor y: \n");
    for (i=0;i<valor;i++) {
        scanf("%d", &vetory[i]);
    }
    for (i = 0;i<valor;i++) {
        soma = vetorx[i]*vetory[i];
        somat = somat+soma;
    }
    printf("Total: %d\n", somat);
    system("pause");
}
