#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int opcao, v1, v2;

    while(opcao < 1 || opcao > 4) {
        printf("-------------------------\n");
        printf("Escolha uma opção: \n");
        printf("[1] Soma.\n");
        printf("[2] Subtração.\n");
        printf("[3] Multiplicação.\n");
        printf("[4] Divisão.\n");
        printf("-------------------------\n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                printf("Digite o primeiro número: ");
                scanf("%d", &v1);
                printf("Digite o segundo número: ");
                scanf("%d", &v2);
                printf("%d + %d = %d\n", v1, v2, v1+v2);
                break;
            case 2:
                printf("Digite o primeiro número: ");
                scanf("%d", &v1);
                printf("Digite o segundo número: ");
                scanf("%d", &v2);
                printf("%d - %d = %d\n", v1, v2, v1-v2);
                break;
            case 3:
                printf("Digite o primeiro número: ");
                scanf("%d", &v1);
                printf("Digite o segundo número: ");
                scanf("%d", &v2);
                printf("%d x %d = %d\n", v1, v2, v1*v2);
                break;
            case 4:
                printf("Digite o primeiro número: ");
                scanf("%d", &v1);
                printf("Digite o segundo número: ");
                scanf("%d", &v2);
                printf("%d / %d = %d\n", v1, v2, v1/v2);
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    }
    system("pause");
}
