#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int select;

    while(select < 1 || select > 3) {
        printf("-------------------------\n");
        printf("Escolha uma opção: \n");
        printf("[1] Engenheria de Software.\n");
        printf("[2] Engenharia Elétrica.\n");
        printf("[3] Engenharia Civil.\n");
        printf("-------------------------\n");
        scanf("%d", &select);
        switch(select) {
            case 1:
                printf("Você escolheu Engenharia de Software!\n");
                break;
            case 2:
                printf("Você escolheu Engenharia Elétrica!\n");
                break;
            case 3:
                printf("Você escolheu Engenharia Civil!\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    }
    system("pause");
}
