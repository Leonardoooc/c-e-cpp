#include<stdio.h>
#include<locale.h> /* Arquivo de cabe�alho que cont�m a declara��o da fun��o setlocale que nos permite mostrar na tela, os caracteres da l�ngua Portuguesa como por exemplo � , �, � */
int soma_num(int num)
{
   int resultado;
   if (num == 1)
    {
      return (1);
    }
   else
     {
        resultado = num + soma_num(num - 1);
      }
   return (resultado);
}

int main()
{
   int num_N;
   int somatorio;

   setlocale(LC_ALL,"portuguese");

   printf("\n\t Programa para calcular a somat�ria de todos os n�meros de 1 a N:\n");

   printf("\n Digite o n�mero N : ");
   scanf("%d", &num_N); /*o n�mero digitado vai ser guardado na mem�ria*/
   somatorio = soma_num(num_N); /*A vari�vel somat�rio est� chamando a fun��o soma_num*/
   printf("\n O somat�rio dos n�meros de 1 at� %d = %d \n", num_N, somatorio);

 return 0;
}
