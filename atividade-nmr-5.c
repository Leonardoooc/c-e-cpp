#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int i, par = 0, impar = 0, resp;
    for(i=1;i<=10;i++) {
        printf("Escreva o %d� n�mero: ", i);
        scanf("%d", &resp);
        if (resp % 2 == 1) {
            impar++;
        }
        else {
            par++;
        }
    }
    printf("%d s�o impares e %d s�o pares.\n", impar, par);
    system("pause");
}
