#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int select;

    while(select < 1 || select > 3) {
        printf("-------------------------\n");
        printf("Escolha uma op��o: \n");
        printf("[1] Engenheria de Software.\n");
        printf("[2] Engenharia El�trica.\n");
        printf("[3] Engenharia Civil.\n");
        printf("-------------------------\n");
        scanf("%d", &select);
        switch(select) {
            case 1:
                printf("Voc� escolheu Engenharia de Software!\n");
                break;
            case 2:
                printf("Voc� escolheu Engenharia El�trica!\n");
                break;
            case 3:
                printf("Voc� escolheu Engenharia Civil!\n");
                break;
            default:
                printf("Op��o inv�lida.\n");
                break;
        }
    }
    system("pause");
}
