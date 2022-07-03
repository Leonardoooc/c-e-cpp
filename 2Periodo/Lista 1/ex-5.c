#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int i, peso[5], maiorv = 0, menorv = 0;
    for (i=0;i<5;i++) {
        printf("Informe o peso da %d° pessoa: ", i+1);
        scanf("%d", &peso[i]);
    }
    for(i=0;i<5;i++){
        if (i == 0){
            maiorv = peso[i];
            menorv = peso[i];
        }
        if(peso[i] > maiorv){
            maiorv=peso[i];
        } else if (peso[i] < menorv) {
            menorv = peso[i];
        }
    }

    printf("Maior peso: %d\n", maiorv);
    printf("Menor peso: %d\n", menorv);
    system("pause");
}
