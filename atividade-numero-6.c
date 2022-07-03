#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    float valor, resultado;
    int valori, resultadoi;
    printf("Digite uma temperatura em fahrenheit em double: ");
    scanf("%f", &valor);
    resultado = (valor-32.0)*(5.0/9.0);
    printf("A temperatura em celcius é: %.1f°C\n", resultado);

    printf("Digite uma temperatura em fahrenheit em int: ");
    scanf("%d", &valori);
    resultadoi = (valori-32.0)*(5.0/9.0);
    printf("A temperatura em celcius é: %d\n", resultadoi);
    system("pause");
}
