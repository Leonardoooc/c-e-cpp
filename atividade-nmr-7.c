#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int i = 1, nota;
    float soma = 0;
    while (i <= 3) {
        printf("Digite a %d° nota: ", i);
        scanf("%d", &nota);
        soma = soma+nota;
        i++;
    }
    printf("Nota das 3 notas: %.1f\n", soma/3);
    system("pause");
}
