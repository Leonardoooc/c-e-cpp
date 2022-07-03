#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>
#include <math.h>


float calculardistancia(float x1, float x2, float y1, float y2);

float calculardistancia(float x1, float x2, float y1, float y2) {
    float r1, r2, r3, r4;
    r1 = x2-x1;
    r2 = y2-y1;
    r3 = (r1*r1) + (r2*r2);
    r4 = sqrt(r3);
    return r4;
}

int main() {
    setlocale(LC_ALL,"");
    float x1, x2, y1, y2, resultado;
    printf("Informe as primeiras coordenadas (x,y): ");
    scanf("%f %f", &x1, &y1);

    printf("Informe as segundas coordenadas (x2,y2): ");
    scanf("%f %f", &x2, &y2);

    resultado = calculardistancia(x1,x2,y1,y2);

    printf("A distância é: %.2f", resultado);
    return 0;

}
