#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

void main () {
    setlocale(LC_ALL, "");
    int horas, valor, salario;
    printf("Informe o valor de hora trabalhada: ");
    scanf("%d", &valor);
    printf("Informe o número de horas trabalhadas: ");
    scanf("%d", &horas);
    if (horas <= 40) {
        salario = valor*horas;
        printf("Seu salário foi de: %d reais.\n", salario);
    }
    if (horas > 40 && horas <= 60) {
        salario = valor*40 + ((horas-40)*(valor*1.5));
        printf("Seu salário com bonus mínimo foi de %d reais.\n", salario);
    }
    if (horas > 60) {
        salario = valor*40 + (20*(valor*1.5)) + ((horas-60)*(valor*2.0));
        printf("Seu salário com bonus máximo foi de %d reais.\n", salario);
    }
    system("pause");
}
