#include<stdio.h>
#include<conio.h>

int main() {
    FILE *arquivo;
    char string[12][13];
    if ((arquivo = fopen("terreno.txt","r")) == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    }
    fscanf(arquivo,"%s",string[0]);
    fscanf(arquivo,"%s",string[1]);
    fscanf(arquivo,"%s",string[2]);
    fscanf(arquivo,"%s",string[3]);
    fscanf(arquivo,"%s",string[4]);
    fscanf(arquivo,"%s",string[5]);
    printf("%s\n",string[0]);
    printf("%s\n",string[1]);
    printf("%s\n",string[2]);
    printf("%s\n",string[3]);
    printf("%s\n",string[4]);
    printf("%s\n",string[5]);

    fclose(arquivo);
    getch();

}
