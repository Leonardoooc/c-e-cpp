#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int matriz[3][3], i, j, impares = 0, pares = 0;
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            printf("Digite o valor [%d] [%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0;i<3;i++) {
        for (j=0;j<3;j++) {
            if (matriz[i][j] % 2 == 1) {
                impares++;
            }
            else {
                pares++;
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Quantia de números pares: %d\n", pares);
    printf("Quantia de números pares: %d\n", impares);
    system("pause");

}
