#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    char pessoa;
    printf("Digite F para pessoa f�sica e J para pessoa jur�dica: ");
    scanf("%c", &pessoa);
    switch(pessoa) {
        case 'F':
            printf("Pessoa f�sica.\n");
            break;
        case 'f':
            printf("Pessoa f�sica.\n");
            break;
        case 'J':
            printf("Pessoa jur�dica.\n");
            break;
        case 'j':
            printf("Pessoa jur�dica.\n");
            break;
        default:
            printf("Pessoa inv�lida.\n");
    }
    system("pause");
}
