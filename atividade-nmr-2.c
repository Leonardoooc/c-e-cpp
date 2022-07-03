#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int i;
    for(i=2;i<=100;i=i+2) {
        printf("%d\n", i);
    }
    system("pause");
}
