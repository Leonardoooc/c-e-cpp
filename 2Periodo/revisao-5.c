#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int matriz[1][1], i, j;
    for (i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            printf("Digite o valor [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0;i<2;i++) {
        for (j=0;j<2;j++) {
            if (matriz[i][j] > 0 && matriz[i][j] < 100) {
               printf("%d\n", matriz[i][j]);
            }
        }
    }
    system("pause");
}
