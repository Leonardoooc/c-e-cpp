#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool primo;


int primos(int num) {
    if (num <= 1 || (num != 2 && num % 2 == 0)) {
        primo = false;
    } else {
        primo = true;
    }
    return primo;
}


int main() {
    int num, res;
    printf("Digite um valor: ");
    scanf("%d", &num);
    primos(num);
    if (primo) {
        printf("Numero primo.\n");

    } else {
        printf("Numero nao primo.\n");

    }
}
