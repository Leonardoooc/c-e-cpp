#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
    int n, resultado;
    printf("Digite o valor requerido: ");
    scanf("%d", &n);
    resultado = fib(n);
    printf("Total: %d", resultado);
}
