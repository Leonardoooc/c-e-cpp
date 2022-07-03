#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int valor1, valor2, resultado;
    printf("Digite o primeiro número: ");
    scanf("%d", &valor1);
    printf("Digite o segundo número: ");
    scanf("%d", &valor2);
    if (valor1 >= valor2) {
        resultado = valor1+valor2;
        printf("Adição de %d e %d = %d\n", valor1, valor2, resultado);
    }
    if (valor2 > valor1) {
        resultado = valor1*valor2;
        printf("Multiplicação de %d e %d = %d\n", valor2, valor1, resultado);
    }
    system("pause");
}
