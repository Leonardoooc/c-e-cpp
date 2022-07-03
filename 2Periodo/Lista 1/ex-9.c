#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>

void main () {
    setlocale(LC_ALL, "");
    int matriza[2][2], matrizb[2][2], i, j;
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("Digite o elemento [%d][%d] da matriz A: ", i, j);
            scanf("%d", &matriza[i][j]);
        }
    }
    printf("Matriz B elevada ao quadrado: \n");
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            matrizb[i][j] = matriza[i][j]*matriza[i][j];
            printf("%d\t", matrizb[i][j]);
        }
        printf("\n");
    }
    system("pause");

}
