#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    float nota[4], media;
    int i;
    for (i=0;i<4;i++) {
        printf("Digite a nota [%d] do jogador: ", i);
        scanf("%f", &nota[i]);
        if (nota[i] < 0.0 || nota[i] > 10.0) {
            i--;
            printf("Nota inválida, valores aceitos de 0 a 10.\n");
        }
    }
    media = (1*nota[0] + 2*nota[1] + 3*nota[2] + 4*nota[3])/10;
    printf("Média ponderada: %.1f\n", media);
    if (media >= 6.0) {
        printf("Classificado.\n");
    } else {
        printf("Eliminado.\n");
    }
    system("pause");
}
