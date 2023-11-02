#include "produtos.c"
#include "stdio.h"
#include <stdlib.h>

int main () {
    
    Produtos *p = cadastrar();
    printProdutos(p);
    printf("\n");
    alterar(p);
    printProdutos(p);
}