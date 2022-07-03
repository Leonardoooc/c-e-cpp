#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int contar = 0;

int contador(int n) {
    if (n != 0) {
        contar++;
        contador(n/10);
    }
    return contar;
}

int main() {
    int n, numeros;
    setlocale(LC_ALL,"");
    printf("Digite um valor: ");
    scanf("%d", &n);
    numeros = contador(n);
    printf("Quantia de números: %d", numeros);
    return 0;
}
