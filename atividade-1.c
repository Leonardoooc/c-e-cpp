#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    float nota1, nota2, nota3, resultado;
    printf("\nDigite a nota 1: ");
    scanf("%f", &nota1);
    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);
    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);
    resultado = (nota1+nota2+nota3)/3;
    printf("\nMédia ponderada: %.1f\n", resultado);
    if (resultado >= 7.0) {
        printf("\nO aluno foi APROVADO\n\n");
    }
    if (resultado <= 6.9 && resultado > 5.0) {
        printf("\nO aluno ficou de EXAME\n\n");
    }
    if (resultado <= 5) {
        printf("\nO aluno foi REPROVADO\n\n");
    }
    system("pause");
}
