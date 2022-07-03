#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    char nome[50], nomec[4];
    printf("Digite um nome: ");
    setbuf(stdin, 0);
    nome[strlen(nome)-1]='\0';
    fgets(nome, 50, stdin);
    nomec[8] = '\0';
    strncpy(nomec, nome, 8);
    printf("4 primeiras letras: %s\n", nomec);
    system("pause");
}
