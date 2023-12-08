#include "book.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
    char titulo[50];
    char autor[50];
    int ano;
    int id;
    struct book *next;
};

Book *zerar_lista() {
    return NULL;
}

Book *inserir_ordenado_circular(Book *l, char *titulo, char *autor, int ano, int id) {
    Book *novo = (Book *)malloc(sizeof(Book));
    Book *aux = l;

    strcpy(novo->titulo, titulo);
    strcpy(novo->autor, autor);
    novo->ano = ano;
    novo->id = id;
    novo->next = NULL;

    if (l == NULL) {
        l = novo;
        l->next = l;
    }
    else {
        do {
            aux = aux->next;
        }while(aux->next != l);

        aux->next = novo;
        novo->next = l;
    }
    return l;
}

void imprimir_lista(Book *l) {
    Book *aux = l;
    do {
        printf("Titulo: %s\n", aux->titulo);
        printf("Autzor: %s\n", aux->autor);
        printf("Ano: %d\n", aux->ano);
        printf("ID: %d\n", aux->id);
        printf("\n");
        aux = aux->next;
    }while(aux != l);
}