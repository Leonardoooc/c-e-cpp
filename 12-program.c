#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

void main () {
    setlocale(LC_ALL, "");
    srand((unsigned)time(NULL));
    int aleatorio = rand() % 3;
    printf("N�mero: %d\n", aleatorio);
    int aleatorioseg = (rand() % 5) + 1;
    printf("N�mero: %d\n", aleatorioseg);
    system("pause");
}
