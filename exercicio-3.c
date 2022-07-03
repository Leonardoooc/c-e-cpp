#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int dia, mes, ano;
    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o m�s: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);
    if (dia >= 32 || dia < 1) {
        printf("Dia inv�lido.\n");
        return 0;
    }
    if (mes > 12 || mes < 1) {
        printf("M�s inv�lido.\n");
        return 0;
    }

    if (mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia > 30) {
                printf ("O m�s informado n�o tem o dia %d.\n", dia);
                return 0;
            }
    }
    if (mes == 2 && dia > 28) {
        printf("Fevereiro n�o tem o dia %d.\n", dia);
        return 0;
    }
    printf ("A data informada �: %d/%d/%d, ela est� correta.\n", dia, mes, ano);
    system("pause");
}
