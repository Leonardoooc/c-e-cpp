#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int descobrirMaior(int v[], int n) {
    int m;
    if(n==1) {
        return v[0];
    } else {
        m = descobrirMaior(v, n-1);
        if (m > v[n-1]) {
            return m;
        } else {
            return v[n-1];
        }
    }
}

int main() {
    int resultado, i;
    int v[5];
    for(i=0;i<=4;i++) {
        printf ("Informe um valor: ");
        scanf("%d", &v[i]);
    }
    resultado = descobrirMaior(v,5);
    printf("O maior valor e: %d", resultado);
}
