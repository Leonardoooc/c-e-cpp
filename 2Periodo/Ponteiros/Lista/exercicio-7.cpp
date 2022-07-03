#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <locale.h>


int contador(int n) {
    if (n >= 1) {
        printf("%d\n", n);
        return contador(n-1);
    }
}

int main() {
    int n;
    printf("Valor: ");
    scanf("%d", &n);
    contador(n);

}
