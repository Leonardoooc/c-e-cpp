#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>

void main () {
    setlocale(LC_ALL, "");
    int i = 1, j = 1, k = 0, p, lista[255], checker, somat = 0, soma, totalcaixa = 0, total;
    while (i == 1) {
        while (j == 1) {
            printf("Digite o valor do %d° produto: ", k);
            scanf("%d", &checker);
            if (checker != 0) {
                lista[k] = checker;
                k++;
            } else {
                j = 0;
            }
        }
        if (k != 0) {
            for (p=0;p<k;p++) {
                soma = lista[p];
                somat = soma + somat;
            }
            total = somat;
            totalcaixa = total + totalcaixa;
            printf("Valor total da compra: %d\n", somat);
        }
        printf("Deseja finalizar o programa? (0) Sim // (1) Não: ");
        scanf("%d", &i);
        switch(i) {
            case 0:
                i = 0;
                printf("Total do caixa: %d\n", totalcaixa);
                break;
            case 1:
                j = 1;
                k = 0;
                somat = 0;
                total = 0;
                break;
            default:
                printf("Valor inválido.\n");
                i = 1;
                break;
        }
    }
    system("pause");
}
