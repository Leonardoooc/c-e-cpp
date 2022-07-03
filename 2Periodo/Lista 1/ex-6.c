#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main () {
    setlocale(LC_ALL, "");
    int fim, i = 0, j, valores[255], somapar, somatpar = 0, somaimpar, somatimpar = 0;
    do {
        printf("Digite um valor positivo: ");
        scanf("%d", &fim);
        if (fim < 0) {
            printf("Valor inválido, insira positivo.\n");
        }
        if (fim != 0 && fim >= 1) {
            valores[i] = fim;
            i++;
        }
    } while(fim != 0);
    for(j=0;j<i;j++) {
        if (valores[j] % 2 == 1) {
            somaimpar = valores[j];
            somatimpar = somaimpar + somatimpar;
        } else {
            somapar = valores[j];
            somatpar = somapar + somatpar;
        }
    }
    printf("Soma dos pares: %d\n", somatpar);
    printf("Soma dos ímpares: %d\n", somatimpar);
    system("pause");
}
