#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int valor, multi, a = 1;
    printf("Digite a tabuada que quiser do 1 ao 9: ");
    scanf("%d", &valor);
    if (valor < 1 || valor > 9) {
        printf("Número inválido.");
        return 0;
    }
    while (a <= 10) {
        multi = a*valor;
        printf("%dx%d = %d\n", valor, a, multi);
        a++;
    }
    system("pause");
}
