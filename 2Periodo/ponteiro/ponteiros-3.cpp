#include<stdio.h>
#include<conio.h>

int main() {
    FILE *arquivo;
    char c;
    if ((arquivo = fopen("arquivo.txt", "w")) == NULL) {
        printf("Erro ao criar ou abrir o arquivo.\n");
    }
    printf("Digite um caractere qualquer ou 0 para terminar: ");
    c = getchar();
    fflush(stdin);
    while(c != '0') {
        fputc(c, arquivo);
        printf("Digite um caractere qualquer ou 0 para terminar: ");
        c = getchar();
        fflush(stdin);
    }
    fclose(arquivo);

    if ((arquivo = fopen("arquivo.txt", "r")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
    printf("Texto gravado: \n\n");
    c = fgetc(arquivo);
    while(c != EOF) {
        printf("%c", c);
        c = fgetc(arquivo);
    }
    fclose(arquivo);

    getch();
}
