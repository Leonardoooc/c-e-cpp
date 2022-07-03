#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int cont=0;
struct
{
      int tel,flag;
      char end[50],cidade[50],nome[50];
}agenda[10];

void inicializa()
{
     int i;
     for(i=0;i<10;i++)
     {
                      agenda[i].flag=0;
     }
}

void cadastro()
{
     int op,i;
     for(i=0;i<10;i++)
     {
                      if(agenda[i].flag==0)
                      {
                      printf("\nInforme um nome:");
                      scanf("%s",&agenda[i].nome);
                      printf("\nDigite o endereco: Rua");
                      scanf("%s",&agenda[i].end);
                      printf("\nDigite a cidade:");
                      scanf("%s",&agenda[i].cidade);
                      printf("\nDigite o numero do telefone:");
                      scanf("%d",&agenda[i].tel);
                      printf("\n\nCadastro realizado com Sucesso!!!\n");
                      agenda[i].flag=1;
                      cont++;
                      printf("\nDeseja Continuar? 1-Sim 2-Nao");
                      printf("\n\nOpcao: ");
                      scanf("%d",&op);
                      if(op!=1)
                      break;
                      }
     }
}

void listar()
{
     int i;
     for(i=0;i<cont;i++)
     {
                      if(agenda[i].flag==1)
                      {
                                           printf("\nNome %s Endereco %s Cidade %s Telefone %d",agenda[i].nome,agenda[i].end,agenda[i].cidade,agenda[i].tel);

                      }
     }
}

void consultar()
{
     int i;
     char name[50];
     printf("Digite o nome para consultar:");
     scanf("%s",&name);
     for(i=0;i<cont;i++)
     {
                      if(agenda[i].flag==1)
                      {
                                           if(strcmp(name,agenda[i].nome)==0)
                                           {
                                                                             printf("Telefone %d",agenda[i].tel);
                                           }
                                           else
                                           {
                                               printf("Nao Cadastrado!");
                                           }
                      }

     }
}


void excluir()
{
     int i;
     char name[50];
     printf("Digite o nome que deseja excluir:");
     scanf("%s",&name);
     for(i=0;i<cont;i++)
     {
                      if(agenda[i].flag==1)
                      {
                                           if(strcmp(name,agenda[i].nome)==0)
                                           {
                                                     agenda[i].flag=0;
                                                     printf("Excluido com Sucesso!");
                                           }
                                           else
                                           {
                                               printf("Nao Cadastrado!");
                                           }
                      }
     }
}

main()
{
      int op,a;
      inicializa();
      do
      {

      printf("\n\nEscolha:\n1-Cadastrar\n2-Listar\n3-Consultar\n4-Excluir\n5-Sair\n");
      printf("\nOpcao: ");
      scanf("%d",&op);

      a=(int) op;
      if((a<0) || (a>10))
      break;

      switch(op)
      {
                case 1:
                     cadastro();
                     break;
                case 2:
                     listar();
                     break;
                case 3:
                     consultar();
                     break;
                case 4:
                     excluir();
                     break;
                case 5:
                     break;
                default:
                        printf("\n\nOpcao Invalida!");
                        break;
      }

      }while(op!=5);
      getch();
}
