#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int calculo(int n) {
	if(n == 0 || n == 1) {
		return 0;
	}
	if(n == 2) {
		return 1;

	}
	return calculo(n - 1) + calculo(n - 2) + calculo(n - 3);
}

int main() {
    int n, resultado;
    printf("Digite um numero: ");
    scanf("%d", &n);
    resultado = calculo(n);
    printf("n-esimo termo: %d", resultado);
}
