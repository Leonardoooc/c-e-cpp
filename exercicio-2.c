#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int id;
    printf("Informe o código do produto: ");
    scanf("%d",&id);
    if (id == 1) {
        printf("Alimento não-perecível.\n");
    } else if (id >= 2 && id < 5){
        printf("Alimento perecível.\n");
    } else if (id >= 5 && id < 7) {
        printf("Vestuário.\n");
    } else if (id == 7) {
        printf("Higiene pessoal.\n");
    } else if (id >= 8 && id < 16) {
        printf("Limpeza e utensílios domésticos.\n");
    } else {
        printf("Código inválido.\n");
    }
    system("pause");
}
