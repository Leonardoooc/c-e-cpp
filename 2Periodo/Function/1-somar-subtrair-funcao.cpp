#include <stdio.h>
#include <conio.h>

int soma, subtracao;

void somar(int num1, int num2) {
    soma = num1 + num2;
    printf("A soma: %d\n", soma);


}

void subtrair(int num1, int num2) {
    subtracao = num1 - num2;
    printf("A subtracao: %d\n", subtracao);

}

int main() {
    int num1, num2;
    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);
    somar(num1,num2);
    subtrair(num1,num2);
}
