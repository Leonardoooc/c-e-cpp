#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    char texto[7];
    printf("Digite uma palavra: \n");
    setbuf(stdin, 0);
    texto[strlen(texto)-1]='\0';
    fgets(texto, 7, stdin);
    printf("%s\n", texto);
    system("pause");
}
