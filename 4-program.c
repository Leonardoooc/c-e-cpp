#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int a;
    float b;
    char c;
    bool d;
    a = 5;
    b = 2.3;
    c = 'a';
    d = true;
    printf("\nO valor de a = %d", a);
    printf("\nO valor de b = %.1f", b);
    printf("\nO valor de c = %c", c);
    printf("\nO valor de d = %d", d);

    printf("\nInforme um valor inteiro: ");
    scanf("%d", &a);
    printf("O valor de a = %d", a);
    printf("\nInforme um valor decimal: ");
    scanf("%f", &b);
    printf("O valor de b = %f", b);
    printf("\nInforme um caractere: ");
    scanf(" %c", &c);
    printf("O valor de c = %c", c);
    printf("\nInforme um valor booleano: ");
    scanf("%d", &d);
    printf("O valor de d = %d", d);
    printf("\n");
    system("pause");
}
