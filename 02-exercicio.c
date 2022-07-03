#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int vetor[10];
    int cont, a;
    printf("Digite o valor dos 10 vetores: \n");
    for(cont = 0;cont < 10; cont++) {
        scanf("%d", &vetor[cont]);
    }
    system("pause");
    system("CLS");
    for (cont = 0;cont < 10; cont++) {
        if (vetor[cont] % 2 == 0) {
            printf("O vetor [%d] tem o valor par: %d\n", cont, vetor[cont]);
        }
    }
    system("pause");
    system("CLS");
    for (cont = 0;cont < 10; cont++) {
        if (vetor[cont] % 5 == 0 && vetor[cont] % 3 == 0) {
            printf("O vetor [%d] com valor: %d, é divisivel por 3 e 5.\n", cont, vetor[cont]);
        }
    }
    system("pause");
    system("CLS");
    for (cont = 0;cont < 10; cont++) {
        if (vetor[cont] < 10) {
            printf("O vetor [%d] com valor: %d, tem o valor menor que 10.\n", cont, vetor[cont]);
        }
        if (vetor[cont] > 100) {
            printf("O vetor [%d] com valor: %d, tem o valor maior que 100.\n", cont, vetor[cont]);
        }
    }
    system("pause");
    system("CLS");
    for (cont = 0;cont < 10; cont++) {
        if (vetor[cont] < 0) {
            printf("O vetor [%d] com valor: %d, tem o valor negativo.\n", cont, vetor[cont]);
        }
    }
    system("pause");
    system("CLS");
    for (cont = 0;cont < 10; cont++) {
        if (vetor[cont] > 10 && vetor[cont] < 100) {
            printf("O vetor [%d] com valor: %d, tem o valor maior que 10 e menor que 100.\n", cont, vetor[cont]);
        }

    }
    system("pause");
}
