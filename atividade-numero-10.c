#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    float preco, infla;
    printf("Informe o pre�o em int: ");
    scanf("%f", &preco);
    if (preco >= 100.0) {
        infla = preco*1.2;
        printf("O pre�o depois da infla��o de 20 porcento � de: %.1f\n", infla);
    }
    if (preco < 100.0) {
        infla = preco*1.1;
        printf("O pre�o depois da infla��o de 10 porcento � de: %.1f\n", infla);
    }
    system("pause");
}
