#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int matriz[3][3], i, j, soma = 0;
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("Digite o valor [%d] [%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            matriz[i][j] = matriz[i][j] * 5;
        }
    }
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    system("pause");
}
