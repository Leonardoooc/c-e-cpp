#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int a;
    printf("Informe um valor inteiro: ");
    scanf("%d", &a);
    if (a % 2 == 1) {
        printf("\nO n�mero %d � impar\n", a);
    }
    else {
        printf("\nO n�mero %d � par\n", a);
    }
    system("pause");
}
