#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    // Leonardo Olanek Cavassim RA: 2021109601
    // Pedro Henrique Boiko RA: 2021109496


    setlocale(LC_ALL, "");
    int resp = 0, resp2 = 0, i = 0, j;
    while (i < 100000) {
        printf("Digite um número: ");
        scanf("%d", &resp);
        if (i > 0) {
            if (resp>resp2) {
                for (j = resp2; j<resp;j++) {
                    printf(" D ");
                }
            }
            else {
                for (j = resp2; j>resp;j--) {
                    printf(" B ");
                }
            }
        }
        if (i == 0) {
            if (resp>10) {
                printf("A ");
                for (j = 10; j<resp;j++) {
                    printf(" D ");
                }
            } else {
                printf("A ");
                    for (j = 10; j>resp;j--) {
                        printf(" B ");
                    }

            }
        }
        printf(" E\n");
        resp2 = resp;
        i++;
    }

}
