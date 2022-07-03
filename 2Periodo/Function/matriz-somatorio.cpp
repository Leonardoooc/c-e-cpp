#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int matriz[5][5];
int somacoluna, somalinha;

int somadorcoluna() {
    int i, j;
    somacoluna = 0;
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            if (i == 1) {
                somacoluna = somacoluna + matriz[i][j];
            }
        }
    }
    return somacoluna;
}

int somadorlinha() {
    int i, j;
    somalinha = 0;
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            if (j == 2) {
                somalinha = somalinha + matriz[i][j];
            }
        }
    }
    return somalinha;
}

int main() {
    setlocale(LC_ALL, "");
    int i, j;
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            printf("Digite o valor [%d][%d] da matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    somadorcoluna();
    somadorlinha();
    printf("Soma da segunda coluna da matriz: %d\n", somacoluna);
    printf("Soma da terceira linha da matriz: %d\n", somalinha);
    return 0;
}
