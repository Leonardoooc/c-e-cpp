#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int metros, decimetros, milimetros, centimetros;
    printf("Informe um valor em metros: ");
    scanf("%d", &metros);
    decimetros = metros*10;
    printf("O valor em decimetros �: %d\n", decimetros);
    centimetros = metros*100;
    printf("O valor em centimetros �: %d\n", centimetros);
    milimetros = metros*1000;
    printf("O valor em milimetros �: %d\n", milimetros);
    system("pause");
}
