#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

bool checker;
int vetor[30];

int checador(int x, int y) {
    int i, j;
    for(i=0; i<30;i++) {
        if (vetor[i] == x) {
            for (j=0;j<30;j++) {
                if (vetor[j] == y) {

                    checker = true;
                }
            }
        }
    }
    return checker;
}


int main() {
    setlocale(LC_ALL, "");
    int x, y, i;
    for(i=0; i<30; i++) {
        printf("Digite o %d° numero do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o valor X: ");
    scanf("%d", &x);
    printf("Digite o valor Y: ");
    scanf("%d", &y);
    checador(x, y);
    if (checker) {
        printf("X e Y pertecem ao vetor.");
    } else {
        printf("X e Y não pertecem ao vetor.");
    }
    return 0;
}
