#include <stdio.h>
#include <conio.h>

int soma, subtracao;

int somar(int num1, int num2) {
    soma = num1 + num2;
    printf("A soma: %d\n", soma);
    return soma;

}

int subtrair(int num1, int num2) {
    subtracao = num1 - num2;
    printf("A subtracao: %d\n", subtracao);
    return subtracao;
}

int main() {
    int num1, num2, res1, res2;
    printf("Informe o primeiro valor: ");
    scanf("%d", &num1);
    printf("Informe o segundo valor: ");
    scanf("%d", &num2);
    res1 = somar(num1,num2);
    res2 = subtrair(num1,num2);
    printf("A soma: %d\n", res1);
    printf("A subtracao: %d\n", res);
}
