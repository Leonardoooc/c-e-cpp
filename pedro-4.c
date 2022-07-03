//biblioteca padrão
#include <stdio.h>
#include <stdlib.h>
//biblioteca caracter especial
#include <locale.h>
//biblioteca booleana
#include <stdbool.h>

void main () {
    setlocale (LC_ALL, "");
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
   if(valor >= 5 && valor <= 20, valor) {
    printf ("\n%d está entre 5 e 20. \n", valor);
   }




 system ("pause");
}
