#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    bool a = true, b = false;
    if (a) {
        printf("\na é verdadeiro\n");
    }
    if (!b) {
        printf("\nb é falso\n");
    }

    system("pause");
}
