#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int a;
    char b = 'y';
    printf("Digite uma op��o: ");
    scanf("%d", &a);
    if (a == 1) {
        printf("\nOp��o escolhida: 1\n");
    } else if (a == 2) {
        printf("\nOp��o escolhida: 2\n");
    } else if (a == 3) {
        printf("\nOp��o escolhida: 3\n");
    } else {
        printf("Op��o inv�lida\n");
    }

    switch(a) {
        case 1:
            printf("\nOp��o escolhida: 1\n");
            break;
        case 2:
            printf("\nOp��o escolhida: 2\n");
            break;
        case 3:
            printf("\nOp��o escolhida: 3\n");
            break;
        default:
            printf("\nOp��o inv�lida\n");
            break;
    }
    switch(b) {
        case 'y':
            printf("A letra � y. \n");
            break;
        default:
            printf("Op��o Inv�lida.\n");
            break;
    }

    system("pause");
}
