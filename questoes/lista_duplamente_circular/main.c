#include <stdio.h>
#include <stdlib.h>
#include "book.c"

int main() {
    Book *listaLivros = zerar_lista();

    listaLivros = inserir_duplamente_circular(listaLivros, "Livro 1", "Autor 1", 2020, 3);
    listaLivros = inserir_duplamente_circular(listaLivros, "Livro 2", "Autor 2", 2015, 1);
    listaLivros = inserir_duplamente_circular(listaLivros, "Livro 3", "Autor 3", 2018, 4);
    listaLivros = inserir_duplamente_circular(listaLivros, "Livro 3", "Autor 3", 2018, 2);


    printf("Lista de Livros:\n");
    imprimir_lista(listaLivros);

    return 0;
}
