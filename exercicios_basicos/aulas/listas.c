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

Lista *inserir_final (Lista *l) {
    Lista *novo = (Lista*) malloc (sizeof(Lista));
}



int main () {
    Lista *l;
    int resultado;

    l = lst_zerar();
    l = lst_insere(l,10);
    l = lst_insere(l,20);
    imprimir(l);
    printf ("%d", contar_lista(l));
        
    return 0;
}




