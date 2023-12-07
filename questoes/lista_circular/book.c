#include <stdio.h>
#include <stdlib.h>
#include "book.h"

struct book {
    char autor[50];
    char titulo[50];
    int ano;
    int id;
    struct book *next;
}

Book *zerar_lista() {
    return NULL;
}

Book *inserir_ordenado_circular (Book *l, char *titulo, char *autor, int ano, int id) {
    Book *novo = (Book*) malloc (sizeof(Book)); 
    aux = l;
    if (l == NULL) {
        novo->next = novo;
    }else {

    }


    return novo;

}

