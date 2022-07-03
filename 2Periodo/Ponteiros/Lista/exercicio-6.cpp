#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int soma(int n) {
    if (n != 0) {
        return n + soma(n-1);
    }
}

int main() {
    int n, resultado;
    printf("Digite um numero: ");
    scanf("%d", &n);
    resultado = soma(n);
    printf("Somatorio = %d", resultado);
}
