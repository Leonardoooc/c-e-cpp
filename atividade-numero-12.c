#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int senha;
    printf("Digite a senha em números: ");
    scanf("%d", &senha);
    if (senha == 34567) {
        printf("Acesso autorizado.\n");
    } else {
        printf("Acesso negado.\n");
    }
    system("pause");
}
