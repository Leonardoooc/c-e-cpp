#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int valor;
    printf("Digite o n�mero do setor: ");
    scanf("%d", &valor);
    switch(valor) {
        case 1:
            printf("Rolling Stones\nPre�o: 500\n");
            break;
        case 2:
            printf("Led Zeppelin\nPre�o: 550\n");
            break;
        case 3:
            printf("Greta Van Fleet\nPre�o: 450\n");
            break;
        default:
            printf("Setor inv�lido.\n");
            break;
    }
    system("pause");
}
