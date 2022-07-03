#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int matrizA[3][3], matrizB[3][3], matrizC[3][3], i, j;
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("Digite o valor [%d] [%d] da matriz A: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("Digite o valor [%d] [%d] da matriz B: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrizes somadas: \n");
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }
    system("pause");
}
