#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int matriz[6][6], i, j, soma = 0;
    for (i=0;i<6;i++) {
        for (j=0;j<6;j++) {
            printf("Digite o valor [%d] [%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0;i<6;i++) {
        for (j=0;j<6;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<6;i++) {
        for (j=0;j<6;j++) {
            if (matriz[i][j] >= 10) {
                soma++;
            }
        }
    }
    printf("A matriz tem %d valores maiores ou igual a 10.\n", soma);
    system("pause");
}
