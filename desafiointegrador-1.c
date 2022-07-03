#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    // Leonardo Olanek Cavassim RA: 2021109601
    // Pedro Henrique Boiko RA: 2021109496


    setlocale(LC_ALL, "");
    int VAR = 0, i = 0;
    char resp;
    while (i < 100000) {
        printf("Digite uma letra (A B C D E): ");
        scanf("%s", &resp);
        switch(resp) {
            case 'A':
                VAR = 10;
                break;
            case 'B':
                VAR--;
                break;
            case 'C':
                VAR = VAR-2;
                break;
            case 'D':
                VAR++;
                break;
            case 'E':
                printf("%d\n", VAR);
                break;
            case 'a':
                VAR = 10;
                break;
            case 'b':
                VAR--;
                break;
            case 'c':
                VAR = VAR-2;
                break;
            case 'd':
                VAR++;
                break;
            case 'e':
                printf("%d\n", VAR);
                break;
            default:
                printf("Letra inválida.\n");
                break;
        }
    }
    system("pause");
}
