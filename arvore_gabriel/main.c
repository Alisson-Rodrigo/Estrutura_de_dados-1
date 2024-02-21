#include <stdio.h>
#include <stdlib.h>

struct arvno {
    int info;
    struct arvno *esquerda;
    struct arvno *direita;
};

struct arvore
{
    struct arvno *raiz;
};

typedef struct arvore Arvore;
typedef struct arvno Arvno;

Arvno* abp_inserir (Arvno *raiz, int num) {
    if (raiz == NULL) {
        Arvno *novo = (Arvno*) malloc (sizeof(Arvno));
        novo->info = num;
        novo->esquerda = novo->direita = NULL;
        return novo;
    }

    if (num < raiz->info) {
        raiz->esquerda = abp_inserir(raiz->esquerda, num);
    }

    if (num > raiz->info) {
        raiz->direita = abp_inserir(raiz->direita, num);
    }

}