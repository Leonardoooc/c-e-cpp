#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    char letra = 'i';
    if (letra == 'x') {
        printf("\nA letra � x\n");
    }
    printf("\nO codigo da letra = %d\n", letra);
    if (letra == 105) {
        printf("\nA letra � %c\n", letra);
    }
    system("pause");
}
