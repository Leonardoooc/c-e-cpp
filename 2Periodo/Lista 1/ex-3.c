#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int valor;
    printf("Digite o número do setor: ");
    scanf("%d", &valor);
    switch(valor) {
        case 1:
            printf("Rolling Stones\nPreço: 500\n");
            break;
        case 2:
            printf("Led Zeppelin\nPreço: 550\n");
            break;
        case 3:
            printf("Greta Van Fleet\nPreço: 450\n");
            break;
        default:
            printf("Setor inválido.\n");
            break;
    }
    system("pause");
}
