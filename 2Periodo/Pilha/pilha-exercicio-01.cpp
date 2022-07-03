#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

typedef struct pilha Pilha;

Pilha* cria (void);
void push (Pilha* p, float v);
float pop (Pilha* p);
int vazia (Pilha* p);
void libera (Pilha* p);

typedef struct calc Calc;
/* funções exportadas */
Calc* cria_calc (char* f);
void operando (Calc* c, float v);
void operador (Calc* c, char op);
void libera_calc (Calc* c);



struct no {
    float info;
    struct no* prox;
};
typedef struct no No;

struct pilha {
    No* prim;
};

Pilha* cria (void){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

No* ins_ini (No* l, float v){
    No* p = (No*) malloc(sizeof(No));
    p->info = v;
    p->prox = l;
    return p;
}

/* função auxiliar: retira do início */
No* ret_ini (No* l){
No* p = l->prox;
free(l);
return p;
}

void push (Pilha* p, float v){
p->prim = ins_ini(p->prim,v);
}

float pop (Pilha* p){
    float v;
    if (vazia(p)) {
        printf("Pilha vazia.\n");
        exit(1); /* aborta programa */
    }
    v = p->prim->info;
    p->prim = ret_ini(p->prim);
    return v;
}

int vazia (Pilha* p){
    return (p->prim==NULL);
}

void libera (Pilha* p){
No* q = p->prim;
while (q!=NULL) {
No* t = q->prox;
free(q);
q = t;
}
free(p);
}

struct calc {
    char f[21]; /* formato para impressão */
    Pilha* p; /* pilha de operandos */
};

Calc* cria_calc (char* formato){
    Calc* c = (Calc*) malloc(sizeof(Calc));
    strcpy(c->f,formato);
    c->p = cria(); /* cria pilha vazia */
    return c;
}

void operando (Calc* c, float v){
/* empilha operando */
push(c->p,v);
/* imprime topo da pilha */
printf(c->f,v);
}

void operador (Calc* c, char op){
float v1, v2, v;
/* desempilha operandos */
if (vazia(c->p))
v2 = 0.0;
else
v2 = pop(c->p);
if (vazia(c->p))
v1 = 0.0;
else
v1 = pop(c->p);
/* faz operação */
switch (op) {
case '+': v = v1+v2; break;
case '-': v = v1-v2; break;
case '*': v = v1*v2; break;
case '/': v = v1/v2; break;
}
/* empilha resultado */
push(c->p,v);
/* imprime topo da pilha */
printf(c->f,v);
}

void libera_calc (Calc* c){
libera(c->p);
free(c);
}

int main (void){
    char c;
    float v;
    Calc* calc;


    calc = cria_calc("%.2f\n");
    do {
    scanf(" %c",&c);

    if (c=='+' || c=='-' || c=='*' || c=='/') {
        operador(calc,c);
    }else {
        ungetc(c,stdin);

    if (scanf("%f",&v) == 1)
    operando(calc,v);
    }
    }

    while (c!='q');
    libera_calc(calc);
    return 0;
}
