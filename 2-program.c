#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int a = 5, b, c;
    printf("%d", a);
    printf("\nO valor da vari�vel a �: %d", a);
    a = 15;
    printf("\nO valor da vari�vel a �: %d", a);
    printf("\nDigite um n�mero:");
    scanf("%d", &b);
    printf("\nO valor da vari�vel b �: %d", b);
    printf("\n");
    c = a+b;
    printf("\nO valor da vari�vel c �: %d", c);
    printf("\n");
    system("pause");
}
