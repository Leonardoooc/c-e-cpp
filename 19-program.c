#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    char palavra[50], palavra2[50];
    char palavra3[] = "Profe ";
    char palavra4[] = "Belle";
    char senha1[] = "1234";
    char senha2[] = "123";
    int i, tamanho, resultado;
    printf("Digite um conjunto de caracteres: ");
    gets(palavra);
    for (i = 0; palavra[i] != NULL; i++) {
        putchar(palavra[i]);

    }
    printf("\nO número de caracteres é: %d\n", i);
    tamanho = strlen(palavra);
    printf("\nO número de caracteres strlen é: %d\n", tamanho);
    strcpy(palavra2, palavra);
    printf("\nA copia da palavra é: %s\n", palavra2);
    strcat(palavra3, palavra4);
    printf("\nAs palavras concatenadas são: %s\n", palavra3);
    resultado = strcasecmp(senha1, senha2);
    if (resultado != 0) {
        printf("Senha inválida\n");
    } else {
        printf("Senha correta.\n");
    }
    if (strcmp(senha1, senha2) != 0) {
        printf("\nSenha inválida");
    } else {
        printf("Senha correta\n");
    }

    system("pause");
}
