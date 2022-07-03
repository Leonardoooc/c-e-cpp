#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "");
    int valor;
    float temp, temp2;
    printf("Escolha o conversor: \n1. Celsius -> Farenheit\n2. Farenheit -> Celsius \n3. Celsius -> Kelvin \n4. Kelvin -> Celsius \n");
    scanf("%d", &valor);
    printf("Digite a temperatura para ser convertida: ");
    scanf("%f", &temp);
    switch(valor) {
        case 1:
            temp2 = (9*temp/5) + 32;
            printf("Convertido em Farenheit: %.2f°F\n", temp2);
            break;
        case 2:
            temp2 = 5*(temp-32)/9;
            printf("Convertido em Celsius: %.2f°C\n", temp2);
            break;
        case 3:
            temp2 = temp + 273.15;
            printf("Convertido em Kelvin: %.2fK\n", temp2);
            break;
        case 4:
            temp2 = temp - 273.15;
            printf("Convertido em Celsius: %.2f°C\n", temp2);
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }
    system("pause");
}
