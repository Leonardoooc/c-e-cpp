#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    char nome[50];
    printf("Digite um nome: ");
    setbuf(stdin, 0);
    nome[strlen(nome)-1]='\0';
    fgets(nome, 50, stdin);
    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("Nome: %s\n", nome);
    }
    system("pause");
}
