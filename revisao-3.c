#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int numero[4], i;
    for (i=0;i<5;i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &numero[i]);
        if (numero[i] % 2 == 1) {
            printf("�mpar\n");
        } else {
            printf("Par\n");
        }
    }
    system("pause");
}
