#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int valor;
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &valor);
    switch(valor) {
        case 1:
            printf("\nDomingo");
            break;
        case 2:
            printf("\nSegunda-feira");
            break;
        case 3:
            printf("\nTerça-feira");
            break;
        case 4:
            printf("\nQuarta-feira");
            break;
        case 5:
            printf("\nQuinta-feira");
            break;
        case 6:
            printf("\nSexta-feira");
            break;
        case 7:
            printf("\nSábado");
            break;
        default:
            printf("\nValor inválido.");
            break;
    }
    printf("\n");
    system("pause");

}
