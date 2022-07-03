#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int calculo(int n) {
	if(n == 0) {
		return 0;
	}
	if(n == 1) {
		return 1;

	}
	return 2*calculo(n - 1) + calculo(n - 2);
}

int main() {
    int n, resultado;
    printf("Digite um numero: ");
    scanf("%d", &n);
    resultado = calculo(n);
    printf("n-esimo termo: %d", resultado);
}
