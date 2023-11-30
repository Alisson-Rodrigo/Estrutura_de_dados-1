#include "info.h"
#include <stdlib.h>
#include <stdio.h>


struct lista
{
    int info;
    struct lista *prox;

};

Lista*lst_zerar () {
    return NULL;
}

Lista *lst_insere (Lista *l, int i) {
    Lista *novo = (Lista*) malloc (sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;

}

void imprimir (Lista *l) {
    Lista *aux = l;
    while (aux != NULL) {
        printf ("%d\n", aux->info);
        aux = aux->prox;
    }
}

int contar_lista (Lista *l) {
    int tamanho=0;
    Lista *aux=l;
    while (aux != NULL) {
        tamanho++;
        aux = aux->prox;
    }

    return tamanho;
}

Lista* insere_fim(Lista* l, int i) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = NULL;

    if (l == NULL) { 
        return novo;
    } 
    else { 
        Lista* p; 
        for (p = l; p->prox != NULL; p = p->prox);
        p->prox = novo; 
        return l;
    }

    return l;
}

Lista *insere_ordenado(Lista *l, int i) {
    Lista *novo = (Lista*)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = NULL;

    if (l == NULL || i < l->info) {
        novo->prox = l;
        return novo;
    }

    Lista *ant = NULL;
    Lista *atual = l;

    while (atual != NULL && i > atual->info) {
        ant = atual;
        atual = atual->prox;
    }

    ant->prox = novo;
    novo->prox = atual;

    return l;
}

void liberar(Lista *l) {
    free(l);
}


Lista *remover_elemento(Lista *l, int elemento) {
    Lista *ant = NULL;
    Lista *atual = l;

    while (atual != NULL && atual->info != elemento) {
        ant = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        return l;
    }

    if (ant == NULL) {
        l = atual->prox;
    } else {
        ant->prox = atual->prox;
    }

    free(atual);

    return l;
}

Lista *buscar_elemento(Lista *l, int elemento) {
    Lista *atual = l;

    while (atual != NULL && atual->info != elemento) {
        atual = atual->prox;
    }

    if (atual == NULL) {
        return NULL;
    }

    return atual;
}