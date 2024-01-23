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

Pilha* pilha_cria (void){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->prim = NULL;
	return p;
}

void pilha_push (Pilha* p, float v){
	No* n = (No*) malloc(sizeof(No));
	n->info = v;
	n->prox = p->prim;
	p->prim = n;
}


float pilha_pop (Pilha* p){
	No* t;
	float v;
	if (pilha_vazia(p)) { 
		printf("Pilha vazia.\n");
		exit(1);
	}
	t = p->prim;
	v = t->info;
	p->prim = t->prox;
	free(t);
	return v;
}


void pilha_libera(Pilha* p){
	No* q = p->prim;
	while (q!=NULL) {
		No* t = q->prox;
		free(q);
		q = t;
	}
	free(p);
}

int pilha_vazia (Pilha* p){
	if (p->prim == NULL)
		return 1;
	return 0;
}

void mostrar_pilha(Pilha *p){
	No* q = p->prim;
	while (q != NULL) {
		printf("%.0f ", q->info);
		q = q->prox;
	}
}
