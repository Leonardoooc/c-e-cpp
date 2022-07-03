#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>

int somatorio(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + somatorio(n-1);
    }
}

int main() {
    setlocale(LC_ALL,"");
    int n;
    int total;
    printf("Digite o valor: ");
    scanf("%d", &n);
    total = somatorio(n);
    printf("Somatorio = %d", total);
    return 0;
}
