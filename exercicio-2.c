#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int id;
    printf("Informe o c�digo do produto: ");
    scanf("%d",&id);
    if (id == 1) {
        printf("Alimento n�o-perec�vel.\n");
    } else if (id >= 2 && id < 5){
        printf("Alimento perec�vel.\n");
    } else if (id >= 5 && id < 7) {
        printf("Vestu�rio.\n");
    } else if (id == 7) {
        printf("Higiene pessoal.\n");
    } else if (id >= 8 && id < 16) {
        printf("Limpeza e utens�lios dom�sticos.\n");
    } else {
        printf("C�digo inv�lido.\n");
    }
    system("pause");
}
