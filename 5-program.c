#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int a, b;

    printf("Digite o 1° numero para somar: ");
    scanf("%d", &a);
    printf("Digite o 2° numero para somar: ");
    scanf("%d", &b);
    printf("A soma de %d e %d = %d", a, b, a+b);
    printf("\n\n");

    printf("Digite o 1° numero para subtrair: ");
    scanf("%d", &a);
    printf("Digite o 2° numero para subtrair: ");
    scanf("%d", &b);
    printf("A subtração de %d e %d = %d", a, b, a-b);
    printf("\n\n");

    printf("Digite o 1° numero para dividir: ");
    scanf("%d", &a);
    printf("Digite o 2° numero para dividir: ");
    scanf("%d", &b);
    printf("A divisão de %d e %d = %d,%d", a, b, a/b, a%b);
    printf("\n\n");

    printf("Digite o 1° numero para multiplicar: ");
    scanf("%d", &a);
    printf("Digite o 2° numero para multiplicar: ");
    scanf("%d", &b);
    printf("A multiplicação de %d e %d = %d", a, b, a*b);
    printf("\n\n");

    printf("\nO valor absoluto de %d é = %d", a, abs(a));
    printf("\n\n");
    system("pause");
}
