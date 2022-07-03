#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int i = 1;
    while(i <= 11) {
        printf("Hello World!\n");
        i++;
    }
    system("pause");
}
