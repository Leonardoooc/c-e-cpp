#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int comparar(int a, int b); //Prot�tipo da fun��o

int main() {
    setlocale(LC_ALL,"");
    int n1, n2, resultado;
    printf("Informe os dois valores: (separados por espa�o)");
    scanf("%d %d", &n1, &n2);
    resultado = comparar(n1, n2);
    printf("Menor n�mero �: %d", resultado);
    return 0;
}

int comparar(int a, int b) {
    if (a > b) return b;
    else return a;


}
