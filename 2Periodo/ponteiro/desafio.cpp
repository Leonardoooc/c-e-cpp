#include<stdio.h>
#include<conio.h>

int registrar(char nome[30], float nota1, float nota2, float nota3) {
    FILE *arquivo;
    arquivo = fopen("notas.txt","a");
    fprintf(arquivo,"\nMedia de %s: %.2f",nome, (nota1+nota2+nota3)/3);
    fclose(arquivo);
}

int main() {
    FILE *arquivo;
    float nota1;
    float nota2;
    float nota3;
    int c = 0;
    char nome[30];
    if ((arquivo = fopen("notas.txt","r")) == NULL) {
        arquivo = fopen("notas.txt", "w");
    } else {
        while((fscanf(arquivo,"%s %f %f %f\n", nome, &nota1, &nota2, &nota3)) != EOF) {
            printf("%s teve media %.2f\n", nome, (nota1+nota2+nota3)/3);
            registrar(nome, nota1, nota2, nota3);
            c++;
            if (c == 3) {
                return 0;
            }
        }
        printf("Registrando no arquivo..");

        fclose(arquivo);
    }
}
