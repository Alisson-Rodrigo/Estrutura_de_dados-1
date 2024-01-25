#include <stdio.h>
#include <stdlib.h>


#include "pilha.h"

struct no {
	float info;
	struct no* prox;
};

struct pilha {
	No* prim;
};

Pilha* pilha_cria (void) {
    Pilha *topo = (Pilha*) malloc (sizeof(Pilha));
    topo->prim = NULL;
    return topo;
}

void pilha_push (Pilha* p, float v) {
     No *no = (No*) malloc (sizeof(No));
     no->info = v;
     no->prox = p->prim;
     p->prim = no;
}

float pilha_pop (Pilha* p) {
    No *p;
    if (pilha_vazia(p)) {
        printf ("Pilha vazia");
    }
}

int pilha_vazia (Pilha* p); {

}