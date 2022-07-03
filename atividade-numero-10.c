#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    float preco, infla;
    printf("Informe o preço em int: ");
    scanf("%f", &preco);
    if (preco >= 100.0) {
        infla = preco*1.2;
        printf("O preço depois da inflação de 20 porcento é de: %.1f\n", infla);
    }
    if (preco < 100.0) {
        infla = preco*1.1;
        printf("O preço depois da inflação de 10 porcento é de: %.1f\n", infla);
    }
    system("pause");
}
