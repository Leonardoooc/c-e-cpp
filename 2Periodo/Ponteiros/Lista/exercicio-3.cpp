#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>


int divisorcomum(int numero, int numero2) {
    int divisor = 0;

    if (numero2 != 0) {
        return divisorcomum(numero2, numero%numero2);
    } else {
        return numero;
    }
    return divisor;
}

int main() {
    setlocale(LC_ALL,"");
    int numero, maximo, numero2;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);
    maximo = divisorcomum(numero, numero2);
    printf("O m�ximo divisor comum entre %d e %d �: %d", numero, numero2, maximo);
}
