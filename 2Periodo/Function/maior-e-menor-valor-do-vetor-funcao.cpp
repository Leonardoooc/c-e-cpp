#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int menorv, maiorv;
int vetor[50];


int menorvalor() {
    int i;
    menorv = vetor[0];
    for (i = 0; i<50; i++) {
        if (vetor[i] < menorv) {
            menorv = vetor[i];
        }
    }
    return menorv;
}

int maiorvalor() {
    int i;
    maiorv = vetor[0];
    for (i = 0; i<50; i++) {
        if (vetor[i] > maiorv) {
            maiorv = vetor[i];
        }
    }
    return maiorv;
}

int main() {
    setlocale(LC_ALL, "");
    int i;
    for(i=0; i<50; i++) {
        printf("Digite o %d° valor do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    menorvalor();
    maiorvalor();
    printf("Maior valor do vetor: %d\n", maiorv);
    printf("Menor valor do vetor: %d\n", menorv);
    return 0;
}
