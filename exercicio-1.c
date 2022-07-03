#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int horas, valor, salario, salarior;
    printf("Informe o número de horas semanal do trabalhador: ");
    scanf("%d", &horas);
    printf("Informe o valor da hora trabalhada: ");
    scanf("%d", &valor);
    if (horas <= 40) {
        salario = horas*valor;
        printf("O salário semanal desse trabalhor foi de: %d reais.\n", salario);
    }
    if (horas > 40 && horas <= 60) {
        salario = horas*valor;
        salarior = horas*(valor*1.5);
        printf("O salário semanal desse trabalhor foi de: %d reais.\n", salarior);
    }
    if (horas > 60) {
        salario = horas*valor;
        salarior = horas*(valor*2);
        printf("O salário semanal desse trabalhor foi de: %d reais.\n", salarior);
    }
    system("pause");
}
