#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");



    char nome[ ] = "Casa da esquina";
    // strtok, divide a string em partes
    printf("Original: %s\n", nome);
    printf("Depois do strtok: %s\n", strtok(nome, " "));
    printf("\n");

    // strset, seta a string inteira com aquele char
    char nome3[ ] = "Teste";
    printf("Original: %s\n", nome3);
    printf("Depois do strset: %s\n", strset(nome3,'1'));
    printf("\n");

    // strlwr, deixa a string toda minuscula
    char nome4[ ] = "ESSA STRING VAI FICAR TUDO MINUSCULO";
    printf("Original: %s\n", nome4);
    printf("Depois tudo minusculo com strlwr: %s\n", strlwr(nome4));
    printf("\n");

    // strrev, inverte a string inteira
    char nome5[ ] = "Essa string vai ficar invertida";
    printf("Original: %s\n", nome5);
    printf("String invertida com strrev: %s\n", strrev(nome5));
    printf("\n");

    system("pause");
}
