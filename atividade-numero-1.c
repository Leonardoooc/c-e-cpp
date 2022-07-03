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
        printf("\nO número %d é impar\n", a);
    }
    else {
        printf("\nO número %d é par\n", a);
    }
    system("pause");
}
