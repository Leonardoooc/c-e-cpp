#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>

void main () {
    setlocale(LC_ALL, "");
    int matriz[3][2], i, j;
    for(i=0;i<3;i++) {
        for(j=0;j<2;j++) {
            printf("Digite o valor [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] < 0) {
                matriz[i][j] = 0;
            }
        }
    }
    for(i=0;i<3;i++) {
        for(j=0;j<2;j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    system("pause");
}
