#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int i;
    for(i=1;i<=50;i++) {
        printf("%d\n", i);
    }
    system("pause");
}
