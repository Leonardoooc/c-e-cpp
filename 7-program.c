#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int a = 2, b = 10, c = 15;
    char d = 'x';

    if (a > 2) {
        printf("\n%d é maior que 2\n", a);
    }
    if (c >= b) {
        printf("\n%d é maior ou igual que %d\n", c, b);
    }
    if (a < 10) {
        printf("\n%d é menor que 10\n", a);
    }
    if (a <= 10) {
        printf("\n%d é menor ou igual que 10\n", a);
    }
    if (d != 10) {
        printf("\n%d não é 10\n", c);
    }
    if (d != 'a') {
        printf("\n%c não é a\n", d);
    }
    system("pause");
}
