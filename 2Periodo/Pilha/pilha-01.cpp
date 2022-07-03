#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct pilha Pilha;
/* funções exportadas */
Calc * cria_calc(char * f);
void operando(Calc * c, float v);
void operador(Calc * c, char op);
void libera_calc(Calc * c);

struct calc {
    char f[21]; /* formato para impressão */
    Pilha * p; /* pilha de operandos */
};

Calc * cria_calc(char * formato) {
    Calc * c = (Calc * ) malloc(sizeof(Calc));
    strcpy(c - > f, formato);
    c - > p = cria(); /* cria pilha vazia */
    return c;
}

void operando(Calc * c, float v) {
    /* empilha operando */
    push(c - > p, v);
    /* imprime topo da pilha */
    printf(c - > f, v);
}

void operador(Calc * c, char op) {
    float v1, v2, v;
    /* desempilha operandos */
    if (vazia(c - > p))
        v2 = 0.0;
    else
        v2 = pop(c - > p);
    if (vazia(c - > p))
        v1 = 0.0;
    else
        v1 = pop(c - > p);
    /* faz operação */
    switch (op) {
        case '+':
            v = v1 + v2;
            break;
        case '-':
            v = v1 - v2;
            break;
        case '*':
            v = v1 * v2;
            break;
        case '/':
            v = v1 / v2;
            break;
    }
    /* empilha resultado */
    push(c - > p, v);
    /* imprime topo da pilha */
    printf(c - > f, v);
}

void libera_calc(Calc * c) {
    libera(c - > p);
    free(c);
}

/* Programa para ler expressão e chamar funções da calculadora */
int main(void) {
    char c;
    float v;
    Calc * calc;
    /* cria calculadora com precisão de impressão de duas casas decimais
     */
    calc = cria_calc("%.2f\n");
    do {
        /* le proximo caractere nao branco */
        scanf(" %c", & c);
        /* verifica se e' operador valido */
        if (c == '+' || c == '-' || c == '*' || c == '/') {
            operador(calc, c);
        }
        /* devolve caractere lido e tenta ler número */
        else {
            ungetc(c, stdin);
            if (scanf("%f", & v) == 1)
                operando(calc, v);
        }
    } while (c != 'q');
    libera_calc(calc);
    return 0;
}
