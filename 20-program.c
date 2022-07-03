#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int matriz[2][2], i, j, k, l;
    matriz[0][0] = 5;
    matriz[0][1] = 10;
    matriz[1][0] = 15;
    matriz[1][1] = 20;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            //printf("i = %d, j = %d\n", i, j);
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    for (k=0;k<2;k++) {
        for (l=0;l<2;l++) {
            printf("Digite o valor [%d] [%d] matriz: ", k, l);
            scanf("%d", &matriz[k][l]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            //printf("i = %d, j = %d\n", i, j);
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    system("pause");
}
