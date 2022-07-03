#include "Trabalho.h"
#include <stdio.h>

int main() {
    int n;
    printf("Digite o numero de pinos: ");
    scanf("%d", &n);
    hanoi(n, 1, 3, 2);
}
