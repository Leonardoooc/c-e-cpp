#include <stdio.h>
#include "torredehanoi.h"

void main() {

    int n;

    printf("Digite o numero de discos: ");
    scanf("%d", &n);
    hanoi(n, 1, 3, 2);
}
