#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int info;
    struct lista *prox;

}Lista;

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

int main () {
    Lista *l;

    l = lst_zerar();
    l = insere_fim(l,10);
    l = insere_fim(l,20);
    imprimir(l);
    printf ("%d", contar_lista(l));
        
    return 0;
}




