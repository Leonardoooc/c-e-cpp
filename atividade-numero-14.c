#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int a, b;
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &a);
    printf("Informe o segundo n�mero: ");
    scanf("%d", &b);
    if (b > a) {
        if (b % a == 0) {
            printf("Multiplos\n");
        } else {
            printf("N�o multiplos\n");
        }
    }
    if (a > b) {
        if (a % b == 0) {
            printf("Multiplos\n");
        } else {
            printf("N�o multiplos\n");
        }
    }
    system("pause");
}
