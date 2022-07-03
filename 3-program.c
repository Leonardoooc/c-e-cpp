#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int dd, mm, yy;
    printf("Digite o dia que você nasceu: ");
    scanf("%d", &dd);
    printf("\nDigite o mes que você nasceu: ");
    scanf("%d", &mm);
    printf("\nDigite o ano que você nasceu: ");
    scanf("%d", &yy);
    printf("\nA data que você nasceu é: %d/%d/%d", dd, mm, yy);
    printf("\n");
    system("pause");
}

