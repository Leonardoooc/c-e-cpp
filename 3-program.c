#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int dd, mm, yy;
    printf("Digite o dia que voc� nasceu: ");
    scanf("%d", &dd);
    printf("\nDigite o mes que voc� nasceu: ");
    scanf("%d", &mm);
    printf("\nDigite o ano que voc� nasceu: ");
    scanf("%d", &yy);
    printf("\nA data que voc� nasceu �: %d/%d/%d", dd, mm, yy);
    printf("\n");
    system("pause");
}

