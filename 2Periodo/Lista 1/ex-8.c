#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>

void main () {
    setlocale(LC_ALL, "");
    int vetora[5], vetorb[5], i, valor;
    for(i=0;i<5;i++) {
        printf("Digite o %d° número do vetorA: ", i);
        scanf("%d", &vetora[i]);
    }
    for(i=0;i<5;i++) {
        vetorb[i] = vetora[i]*2;
        printf("Vetor[%d] = %d\n", i, vetorb[i]);
    }
    system("pause");
}
