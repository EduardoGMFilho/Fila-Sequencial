main.h

#include <stdio.h>
#ifndef FILA_H
#define FILA_H

#define MAX 5

typedef struct {
    int dados[MAX];
    int inicio;
    int fim;
    int total;
} Fila;

void inicializarFila(Fila *f);
int estaVazia(Fila *f);
int estaCheia(Fila *f);
int inserir(Fila *f, int valor);
int remover(Fila *f, int *removido);
int consultarInicio(Fila *f, int *valor);

#endif


#include "fila.h"

void inicializarFila(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->total = 0;
}

int estaVazia(Fila *f) {
    return f->total == 0;
}

int estaCheia(Fila *f) {
    return f->total == MAX;
}

int inserir(Fila *f, int valor) {
    if (estaCheia(f)) return 0;

    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % MAX;
    f->total++;
    return 1;
}

int remover(Fila *f, int *removido) {
    if (estaVazia(f)) return 0;

    *removido = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % MAX;
    f->total--;
    return 1;
}
int consultarInicio(Fila *f, int *valor) {
    if (estaVazia(f)) return 0;

    *valor = f->dados[f->inicio];
    return 1;
}




