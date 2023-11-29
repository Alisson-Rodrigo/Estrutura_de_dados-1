#include <stdio.h>
#include <stdlib.h>
#include "info.h"


struct lista
{
    int info;
    struct lista *prox;

};

Lista *criarLista() {
    return NULL;
}

Lista *inserirElementoInicio(Lista *l, int v) {
    Lista *novo = (Lista*) malloc (sizeof(Lista));
    novo->info = v;
    novo->prox = l;

    return novo;    
}

void imprimirLista(Lista *l) {
    Lista *aux = l;
    
    while (aux != NULL) {
        printf ("%d", aux->info);
        aux = aux->prox;
    }
}

int qtdElementosLista(Lista *l) {
    Lista *aux = l;
    int cont = 1;
    
    while (aux != NULL) {
        cont++;
        aux = aux->prox;
    }
    return cont;
}

Lista *inserirFimLista(Lista *l, int v) {
    Lista *novo = (Lista*) malloc (sizeof(Lista));
    novo->info = v;
    novo->info = criarLista();

    
    
}



