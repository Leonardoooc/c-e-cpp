#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int matriz[3][3], i, j, soma, somat = 0;
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("Digite o valor [%d] [%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            if (i == 0 && j == 0 || i == 1 && j == 1 || i == 2 && j == 2) {
                soma = matriz[i][j];
                somat = somat+soma;
            }
        }
    }
    printf("Soma da diagonal principal: %d\n", somat);
    somat = 0;
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            soma = matriz[i][j];
            somat = somat+soma;

        }
    }
    printf("Soma total da matriz: %d\n", somat);
    system("pause");
}
