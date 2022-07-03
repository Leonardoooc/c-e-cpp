#include <stdio.h>
#include<conio.h>

int main() {
    FILE *arquivo;
    char palavra[80];

    if ((arquivo = fopen("teste.txt","w")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
    printf("Exemplo do uso de fscanf e fprintf\n");
    printf("Digite uma frase: ");
    fscanf(stdin,"%s", palavra);
    fprintf(arquivo,"%s",palavra);
    fclose(arquivo);
    getch();

}
