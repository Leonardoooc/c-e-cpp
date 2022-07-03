#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int a = 1;
    while (a <= 10) {
        printf("%d\n", a);
        a++;
    }
    a = 1;
    do {
        printf("%d\n", a);
        a++;
    } while (a <= 10);
    system("pause");
}
