#include<stdio.h>
#include "fatorial.h"

int main() {
    long int n;
    long int resultado;
    printf("Digite um numero: ");
    scanf("%d", &n);
    resultado = fatorial(n);
    printf("O fatorial eh: %d", resultado);

}
