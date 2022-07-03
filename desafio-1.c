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
    printf("Informe o n�mero de horas trabalhadas: ");
    scanf("%d", &horas);
    if (horas <= 40) {
        salario = valor*horas;
        printf("Seu sal�rio foi de: %d reais.\n", salario);
    }
    if (horas > 40 && horas <= 60) {
        salario = valor*40 + ((horas-40)*(valor*1.5));
        printf("Seu sal�rio com bonus m�nimo foi de %d reais.\n", salario);
    }
    if (horas > 60) {
        salario = valor*40 + (20*(valor*1.5)) + ((horas-60)*(valor*2.0));
        printf("Seu sal�rio com bonus m�ximo foi de %d reais.\n", salario);
    }
    system("pause");
}
