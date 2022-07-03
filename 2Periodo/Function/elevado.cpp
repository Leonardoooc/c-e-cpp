#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int resultado = 1;

int elevar(int x, int y) {
    for (y;y>0;y--) {
        resultado=resultado*x;
    }
    return resultado;
}

int main() {
    setlocale(LC_ALL, "");
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    elevar(x, y);
    printf("%d elevado a %d é: %d", x, y, resultado);
    return 0;
}
