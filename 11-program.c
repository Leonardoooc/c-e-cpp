#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int a;
    char b = 'y';
    printf("Digite uma opção: ");
    scanf("%d", &a);
    if (a == 1) {
        printf("\nOpção escolhida: 1\n");
    } else if (a == 2) {
        printf("\nOpção escolhida: 2\n");
    } else if (a == 3) {
        printf("\nOpção escolhida: 3\n");
    } else {
        printf("Opção inválida\n");
    }

    switch(a) {
        case 1:
            printf("\nOpção escolhida: 1\n");
            break;
        case 2:
            printf("\nOpção escolhida: 2\n");
            break;
        case 3:
            printf("\nOpção escolhida: 3\n");
            break;
        default:
            printf("\nOpção inválida\n");
            break;
    }
    switch(b) {
        case 'y':
            printf("A letra é y. \n");
            break;
        default:
            printf("Opção Inválida.\n");
            break;
    }

    system("pause");
}
