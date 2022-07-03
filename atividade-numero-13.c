#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    float altura;
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    if (altura > 1.80) {
        printf("acima de um metro e oitenta centímetros\n");
    }
    if (altura < 1.50) {
        printf("abaixo de um metro e meio\n");
    }
    if (altura >= 1.50 && altura <= 1.80) {
        printf("entre um metro e meio e um metro e oitenta centímetros\n");
    }
    system("pause");
}
