#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int soma(int n) {
    int total;
    if ((n > 1) && !(n % 2)) {
        return n + soma(n-1);
    }

    if ((n > 1) && (n % 2)) {
        return soma(n - 1);
    }
    return 0;
}

int main() {
    int n, resultado;
    printf("Valor: ");
    scanf("%d", &n);
    resultado = soma(n);
    printf("Total dos pares: %d", resultado);
}
