#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h> // Biblioteca de string
#include<time.h> // Biblioteca para pegar data e hora

int listar_vagas() {
    FILE *arquivo;
    if ((arquivo = fopen("controle.txt","a")) == NULL) { // Abre arquivo
        arquivo = fopen("controle.txt", "w");
        fclose(arquivo);
    }

    //variáveis de descarte de informações ou de checagem
    char placaregistrada[30];
    int descarte[3];
    char descartavel[30];
    char descartavel2[30];
    char checar[30];
    char checagemsaida[30];

    arquivo = fopen("controle.txt", "r");
    while((fscanf(arquivo,"VAGA:%d PLACA:%s TIPO:%d %s %s %s\n", &descarte[1], placaregistrada, &descarte[2], descartavel, descartavel2, checagemsaida)) != EOF) { // checador de vagas
        strcpy(checar,"ENTRADA");
        if (strcasecmp(checagemsaida,checar) == 0) { // compara se a vaga é entrada mesmo
            printf("Vaga ocupada: %d\n", descarte[1]);
        } else {
            printf("Vaga Que Já Foi Desocupada: %d\n", descarte[1]);
        }
    }
}


int controle(int opcao_controle) {
    FILE *arquivo;
    if ((arquivo = fopen("controle.txt","a")) == NULL) { // Abre arquivo
        arquivo = fopen("controle.txt", "w");
        fclose(arquivo);
    }

    // variáveis de scanf ou checagem
    char placa[30];
    int vaga;
    char data[30];
    char hora[30];
    int opcao;
    int tipo;
    char placaregistrada[30];
    bool checked = false;


    // struct para pegar tempo e hora
    time_t t;
    time(&t);
    struct tm * timeinfo;
    time( &t );
    timeinfo = localtime( &t );



    printf("Digite a Placa do Veículo: ");
    fscanf(stdin,"%s", placa);


    // variáveis de descarte e checagem
    int descarte[3];
    char descartavel[30];
    char descartavel2[30];
    char checar[30];
    char checagemsaida[30];
    int lixo[3];
    char placa3[30];
    char lixo2[30];
    char lixo3[30];
    char checagemsesaiu[30];
    int quantia_horas;


    if (opcao_controle == 2) {
        arquivo = fopen("controle.txt", "r");
        while((fscanf(arquivo,"VAGA:%d PLACA:%s TIPO:%d %s %s %s\n", &descarte[1], placaregistrada, &descarte[2], descartavel, descartavel2, checagemsaida)) != EOF) { // checagem de saída e cobrador
            if (strcasecmp(placa,placaregistrada) == 0) {
                fclose(arquivo);
                if (descarte[2] == 1) {
                    printf("Digite quantas horas o usuário ficou:\n");
                    scanf("%d", &quantia_horas);
                    printf("O cliente deverá pagar: %d reais.\n\n", 3*quantia_horas);
                }
                if (descarte[2] == 2) {
                    printf("O cliente deverá pagar: 72 reais.\n\n");
                }
                if (descarte[2] == 3) {
                    printf("O cliente deverá pagar: 90 reais.\n\n");
                }
                arquivo = fopen("controle.txt", "a");
                fprintf(arquivo,"VAGA:%d PLACA:%s TIPO:%d %02d:%02d:%02d %d/%d/%d SAIDA\n",descarte[1], placa, descarte[2], timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec, timeinfo->tm_mday, timeinfo->tm_mon+1, timeinfo->tm_year+1900); // registra a saída no arquivo
                fclose(arquivo);
                printf("Saída registrada com sucesso.\n\n");
                return 1;
            }
        }
    }

    printf("Digite o número da vaga:");
    scanf("%d", &vaga);
    arquivo = fopen("controle.txt","r");
    while((fscanf(arquivo,"VAGA:%d PLACA:%s TIPO:%d %s %s %s\n", &descarte[1], placaregistrada, &descarte[2], descartavel, descartavel2, checagemsaida)) != EOF) { // checa se a vaga está ocupada
        strcpy(checar,"ENTRADA");
        if (descarte[1] == vaga) {
            if (strcasecmp(checagemsaida,checar) == 0) {
                while((fscanf(arquivo,"VAGA:%d PLACA:%s TIPO:%d %s %s %s\n", &descarte[1], placaregistrada, &descarte[2], descartavel, descartavel2, checagemsaida)) != EOF) { // checa se a vaga já foi ocupada e desocupada alguma vez
                    strcpy(checar,"SAIDA");
                    if (strcasecmp(checagemsaida,checar) == 0) {
                        checked = true;
                        break;
                    }
                }
                if (checked == false) {
                    printf("Vaga ocupada.\n");
                    return controle(opcao_controle);
                }
            }
        }
    }

    fclose(arquivo);
    printf("Tipo de vaga:\n\n");
    printf("1- Horista\n");
    printf("2- Diarista\n");
    printf("3- Mensalista\n");
    scanf("%d", &tipo);
    arquivo = fopen("controle.txt", "a");
    if (opcao_controle == 1) {
        fprintf(arquivo,"VAGA:%d PLACA:%s TIPO:%d %02d:%02d:%02d %d/%d/%d ENTRADA\n",vaga, placa, tipo, timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec, timeinfo->tm_mday, timeinfo->tm_mon+1, timeinfo->tm_year+1900); // registra entrada
        printf("Entrada registrada com sucesso.\n\n");
    }
    fclose(arquivo);

}


int criarvaga(){

    FILE *vagacarro;
    if ((vagacarro = fopen("vagas.txt","a")) == NULL) { // abre arquivo
        vagacarro = fopen("vagas.txt", "w");
        fclose(vagacarro);
    }

    // variaveis de checagem e input
    int numerovaga;
    int descricao;
    int dias;
    int vaga;
    int vagaocupada;
    char comparacao[30];

    printf("Digite o número da Vaga Desejada (1 a 30):");
    scanf("%d" , &numerovaga);

    if(numerovaga > 30 || numerovaga < 1){ // vagas livres para cadastro
        printf(" \nNumero de Vaga Inexistente, Tente Novamente!\n");
        printf("\n");
        return criarvaga();

    } else {
        vagacarro = fopen("vagas.txt", "r");
        while((fscanf(vagacarro,"VAGA:%d %s\n", &vagaocupada, comparacao)) != EOF) { // compara se a vaga já foi ocupada alguma vez
            if (vagaocupada == numerovaga) {
                printf("Vaga ocupada.\n");
                return criarvaga();
            }
        }
        fclose(vagacarro);
        printf("Escolha a descrição da Vaga: \n");
        printf("1- 24 horas \n");
        printf("2- 3 dias \n");
        printf("3- 1 mês \n");
        printf("4- Outros \n");
        scanf("%d" , &descricao);
        vagacarro = fopen("vagas.txt", "a");
        if (descricao == 4) {
            printf("Coloque o número de dias: ");
            scanf("%d", &dias);
            fprintf(vagacarro,"VAGA:%d DIAS:%d\n",numerovaga, dias);
        } else {
            fprintf(vagacarro,"VAGA:%d TIPO:%d\n",numerovaga, descricao);
        }
        printf("Vaga Cadastrada com Sucesso! \n");
    }
    fclose(vagacarro);

}

int veiculo () {
    FILE *arquivo;

    //variáveis de input e checagem, descarte de informaçoes desnecessárias
    char placa[30];
    char modelo[30];
    char marca[30];
    char cor[30];
    char tipo[30];
    char checagemplaca[30];
    char descarte[30];
    char descarte2[30];
    char descarte3[30];
    char descarte4[30];
    if ((arquivo = fopen("carro.txt","a")) == NULL) { // abre arquivo
        arquivo = fopen("carro.txt", "w");
        fclose(arquivo);
    }

    printf("Digite a Placa do Veículo: ");
    fscanf(stdin,"%s", placa);
    fclose(arquivo);
    arquivo = fopen("carro.txt","r");
    while((fscanf(arquivo,"%s %s %s %s %s\n", checagemplaca, descarte, descarte2, descarte3, descarte4)) != EOF) { // checagem se a placa já está cadastrada
        if (strcasecmp(placa,checagemplaca) == 0) {
            printf("Veículo já cadastrado.\n\n");
            return 1;
        }
    }
    fclose(arquivo);
    arquivo = fopen("carro.txt", "a");

    printf("Digite o Modelo do Veículo: ");
    fscanf(stdin,"%s", modelo);
    printf("Digite a Marca do Veículo: ");
    fscanf(stdin,"%s", marca);
    printf("Digite a Cor do Veículo: ");
    fscanf(stdin,"%s", cor);
    printf("Digite o Tipo de Vaga (Horista (H),Diarista (D),Mensalista (M):");
    fscanf(stdin,"%s", tipo);
    printf("Caracteristicas Salvas! \n");
    printf("\n");
    fprintf(arquivo,"%s %s %s %s %s\n",placa, modelo, marca, cor, tipo); // registra as infos no arquivo
    fclose(arquivo);

}

//arquivo principal, onde há todas informações
int main () {
    FILE *arquivocarro;
    FILE *vagacarro;
    setlocale(LC_ALL,"");
    int opcao;
    int opcao_controle;

    //repetidor até dar input 0
    do {
        printf("Opções de Estacionamento:\n\n");
        printf("0- Sair\n");
        printf("1- Cadastrar Veículo\n");
        printf("2- Cadastramento de Vaga\n");
        printf("3- Controle de Estacionamento\n");
        printf("4- Listar Preços\n");
        printf("5- Listar Vagas Ocupadas\n");
        printf(" \nEscolha a Opção desejada, e Pressione a tecla ENTER!");
        printf("\n");

        scanf("%d", &opcao);

        //switch de opções selecionadas
        switch(opcao) {
            case 0:
                return 0;
                break;
            case 1:
                veiculo();
                break;
            case 2:
                criarvaga();
                break;
            case 3:
                printf("Opções: \n");
                printf("1- Registrar Entrada de Veículo\n");
                printf("2- Registrar Saída de Veículo\n");
                scanf("%d", &opcao_controle);
                if (opcao_controle <= 0 || opcao_controle >= 3) { // checa se a opção é válida
                    printf("Opção inválida.\n");
                    break;
                }
                controle(opcao_controle);
                break;
            case 4:
                printf("Nossos preços:\n\n");
                printf("1- Cada 1 Hora = 3 reais\n");
                printf("2- Cada 1 Dia = 72 reais\n");
                printf("3- Cada Mes = 90 reais\n\n");
                break;
            case 5:
                listar_vagas();
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }
    } while(opcao != 0);

}
