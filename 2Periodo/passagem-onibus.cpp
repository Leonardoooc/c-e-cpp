#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct Passagem {
    char nome[200];
    float valor;
    char horario[100];
    char destino[200];
    float nota;

} Passagem;

Passagem comprar_passagem;

void menudapassagem();
void inicializar();
void verpassagem();
void novapassagem();
void comprar();

int main() {
    setlocale(LC_ALL,"");
    menudapassagem();
}

void menudapassagem() {
    int opcao;
    do {
        printf("Digite uma opção:\n");
        printf("1. Reiniciar Sistema/Limpar Sistema\n");
        printf("2. Visualizar passagem\n");
        printf("3. Criar novo tipo de passagem\n");
        printf("4. Comprar passagem\n");
        printf("5. Para sair da compra\n\n");
        printf("Digite uma das opções: \n");
        scanf("%d%*c", &opcao);
        switch(opcao) {
            case 1:
                inicializar();
                break;
            case 2:
                verpassagem();
                break;
            case 3:
                novapassagem();
                break;
            case 4:
                comprar();
                break;
            case 5:
                break;
            default:
                 printf(" \n Opção não existente. ");
            break;
        }
    }
    while(opcao!=5);
}

void inicializar() {
    comprar_passagem.valor = 0.0;
    strcpy(comprar_passagem.destino, "NULL");
    strcpy(comprar_passagem.horario, "NULL");
    strcpy(comprar_passagem.nome, "NULL");
}

void novapassagem() {
    printf(" Digite o valor da passagem: ");
    scanf("%f", &comprar_passagem.valor);
    printf(" Digite o horario da passagem: ");
    scanf("%s", &comprar_passagem.horario);
    printf(" Destino Final: ");
    scanf("%s", &comprar_passagem.destino);
}

void verpassagem() {
    printf("O valor da passagem é: %.2f\n", comprar_passagem.valor);
    printf("O horário da passagem é: %s\n", comprar_passagem.horario);
    printf("O destino da passagem é: %s\n", comprar_passagem.destino);
    printf("\n\n");
}

void comprar() {
    printf("Digite seu nome:");
    scanf("%s", &comprar_passagem.nome);
    printf("\nComprado uma passagem no valor de %.2f reais, com o destino %s, no horário: %s\n\n", comprar_passagem.valor, comprar_passagem.destino, comprar_passagem.horario);
}
