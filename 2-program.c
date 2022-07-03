#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int a = 5, b, c;
    printf("%d", a);
    printf("\nO valor da variável a é: %d", a);
    a = 15;
    printf("\nO valor da variável a é: %d", a);
    printf("\nDigite um número:");
    scanf("%d", &b);
    printf("\nO valor da variável b é: %d", b);
    printf("\n");
    c = a+b;
    printf("\nO valor da variável c é: %d", c);
    printf("\n");
    system("pause");
}
