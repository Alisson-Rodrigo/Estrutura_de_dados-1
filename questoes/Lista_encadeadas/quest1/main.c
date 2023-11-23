#include <stdio.h>
#include <stdlib.h>
#include "info.c"

int main () {
    Lista *l;

    l = lst_zerar();
    l = insere_ordenado(l, 10);
    l = insere_ordenado(l, 20);
    l = insere_ordenado(l, 5);
    imprimir(l);
    printf ("%d", contar_lista(l));
        
    return 0;
}
