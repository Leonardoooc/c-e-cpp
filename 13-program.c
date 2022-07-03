#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int a = 1, b = 10;
    while (a <= 10) {
        printf("%d\n", a);
        a++;
    }
    while (b >= 1) {
        printf("%d\n", b);
        b--;
    }
    system("pause");
}
