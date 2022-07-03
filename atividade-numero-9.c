#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int valor1, valor2, soma, produto, quadrado, r1, quadrado2;
    printf("Informe o primeiro número: ");
    scanf("%d", &valor1);
    printf("Informe o segundo número: ");
    scanf("%d", &valor2);
    soma = valor1 + valor2;
    produto = valor1 * (valor2 * valor2);
    quadrado = valor1 * valor1;
    r1 = (valor1 * valor1) + (valor2 * valor2);
    quadrado2 = sqrt(r1);
    printf("A soma dos dois números é: %d\n", soma);
    printf("O produto do primeiro pelo quadrado do segundo é: %d\n", produto);
    printf("O quadrado do primeiro é: %d\n", quadrado);
    printf("A raiz quadrada da soma dos quadrados é: %d\n", quadrado2);
    if (valor1 >= 0) {
        valor1 = (valor1 * -1);
    }
    printf ("O modulo do primeiro numero é: %d\n", valor1);
    system("pause");
}
