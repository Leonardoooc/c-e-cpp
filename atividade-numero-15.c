#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    float nota1, nota2, nota3, res;
    printf("Informe a nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Informe a nota da segunda prova: ");
    scanf("%f", &nota2);
    printf("Informe a nota da terceira prova: ");
    scanf("%f", &nota3);
    res = ((2.0*nota1)+(3.0*nota2)+(5.0*nota3)) / (2.0+3.0+5.0);
    if (res > 6.0) {
        printf("Média = %.1f Aprovado.\n", res);
    }
    if (res >= 4.0 && res <= 5.9) {
        printf("Média = %.1f Ficou de RECUPERAÇÃO.\n", res);
    }
    if (res < 4.0) {
        printf("Média = %.1f Reprovado.\n", res);
    }
    system("pause");
}
