#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    char pessoa;
    printf("Digite F para pessoa física e J para pessoa jurídica: ");
    scanf("%c", &pessoa);
    switch(pessoa) {
        case 'F':
            printf("Pessoa física.\n");
            break;
        case 'f':
            printf("Pessoa física.\n");
            break;
        case 'J':
            printf("Pessoa jurídica.\n");
            break;
        case 'j':
            printf("Pessoa jurídica.\n");
            break;
        default:
            printf("Pessoa inválida.\n");
    }
    system("pause");
}
