#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>
int i;

int Fatorial(int valor) {
    for (i = 1; valor > 1; valor--) {
        i = i * valor;
    }
    return i;

}

int main() {
    setlocale(LC_ALL, "");
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    Fatorial(valor);
    printf("Fatorial de %d é: %d\n", valor, i);
    return 0;
}
