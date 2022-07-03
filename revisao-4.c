#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int numero[3], i, total;
    for (i=0;i<3;i++) {
        printf("Digite um número: ");
        scanf("%d", &numero[i]);
    }
    total = numero[0];
    for (i=1;i<3;i++) {
        total *= numero[i];
    }
    printf("Produto: %d\n", total);
    system("pause");

}
