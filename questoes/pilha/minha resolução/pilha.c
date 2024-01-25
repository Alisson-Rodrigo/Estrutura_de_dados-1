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
	No *novo = (No*) malloc (sizeof(novo));
	novo->info = v;
	novo->prox = p->prim;
	p->prim = novo;
}

void pilha_pop (Pilha* p){
	No* t;
	float v;
	if (pilha_vazia(p)) { 
		printf("Pilha vazia.\n");
		exit(1);
	}
	t = p->prim;
	p->prim = t->prox;
	free(t);
}

int pilha_vazia (Pilha* p){
	if (p->prim == NULL)
		return 1;
	return 0;
}

void mostrar_pilha(Pilha* p) {
	No *t;
	t = p->prim;
	while (t != NULL) {
		printf ("%.2f\n", t->info);
		t = t->prox;
	}
	
	
}