#include "produtos.h"
#include <stdio.h>
#include<stdlib.h>


struct produtos {
    int id;
    char name[100];
    float valor;
};

Produtos *cadastrar(){

    Produtos *p = (Produtos*) malloc (sizeof(Produtos));

    if (p == NULL) {
        printf("Error");
        return NULL; 
    }

    scanf ("%d", &p->id);
    scanf ("%s", p->name,stdin);
    scanf ("%f", &p->valor);

    return p;
}
void printProdutos(Produtos *p) {
    printf ("%d\n", p->id);
    printf ("%s\n", p->name);
    printf ("%.2f\n", p->valor);
        
}

void alterar (Produtos *p) {

    scanf("%d", &p->id);
    scanf("%s", p->name,stdin);
    scanf("%f", &p->valor);

}



