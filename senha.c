#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    int tentativas = 0, i;
    bool acertou = false;
    char senha[7] = {'1', '2', '3', '4', '5', '6', '\0'};
    char digitado[7];
    while (tentativas < 3 && tentativas >= 0) {
        printf("Digite a senha: \n");
        setbuf(stdin, 0);
        digitado[strlen(digitado)-1]='\0';
        fgets(digitado, 7, stdin);
        i = 0;
        if (acertou == false) {
            while (senha[i] == digitado[i] && senha[i] != '\0' && digitado[i] != '\0') {
                i++;
            }
            if (digitado[i] == '\0' && senha[i] == '\0') {
                acertou = true;
                tentativas = 4;
            }
        }
        tentativas++;
    }
    if (acertou) {
        printf("Você acertou a senha.\n");
    } else {
        printf("Você errou a senha nas 3 tentativas.\n");
    }
    system("pause");
}
