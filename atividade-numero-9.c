#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int valor1, valor2, soma, produto, quadrado, r1, quadrado2;
    printf("Informe o primeiro n�mero: ");
    scanf("%d", &valor1);
    printf("Informe o segundo n�mero: ");
    scanf("%d", &valor2);
    soma = valor1 + valor2;
    produto = valor1 * (valor2 * valor2);
    quadrado = valor1 * valor1;
    r1 = (valor1 * valor1) + (valor2 * valor2);
    quadrado2 = sqrt(r1);
    printf("A soma dos dois n�meros �: %d\n", soma);
    printf("O produto do primeiro pelo quadrado do segundo �: %d\n", produto);
    printf("O quadrado do primeiro �: %d\n", quadrado);
    printf("A raiz quadrada da soma dos quadrados �: %d\n", quadrado2);
    if (valor1 >= 0) {
        valor1 = (valor1 * -1);
    }
    printf ("O modulo do primeiro numero �: %d\n", valor1);
    system("pause");
}
