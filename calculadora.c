#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int opcao, v1, v2;

    while(opcao < 1 || opcao > 4) {
        printf("-------------------------\n");
        printf("Escolha uma op��o: \n");
        printf("[1] Soma.\n");
        printf("[2] Subtra��o.\n");
        printf("[3] Multiplica��o.\n");
        printf("[4] Divis�o.\n");
        printf("-------------------------\n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                printf("Digite o primeiro n�mero: ");
                scanf("%d", &v1);
                printf("Digite o segundo n�mero: ");
                scanf("%d", &v2);
                printf("%d + %d = %d\n", v1, v2, v1+v2);
                break;
            case 2:
                printf("Digite o primeiro n�mero: ");
                scanf("%d", &v1);
                printf("Digite o segundo n�mero: ");
                scanf("%d", &v2);
                printf("%d - %d = %d\n", v1, v2, v1-v2);
                break;
            case 3:
                printf("Digite o primeiro n�mero: ");
                scanf("%d", &v1);
                printf("Digite o segundo n�mero: ");
                scanf("%d", &v2);
                printf("%d x %d = %d\n", v1, v2, v1*v2);
                break;
            case 4:
                printf("Digite o primeiro n�mero: ");
                scanf("%d", &v1);
                printf("Digite o segundo n�mero: ");
                scanf("%d", &v2);
                printf("%d / %d = %d\n", v1, v2, v1/v2);
                break;
            default:
                printf("Op��o inv�lida.\n");
                break;
        }
    }
    system("pause");
}
