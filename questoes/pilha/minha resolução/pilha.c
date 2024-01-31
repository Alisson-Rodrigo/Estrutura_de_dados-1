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
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->prim = NULL;
	return p;
}

void pilha_push (Pilha* p, float v) {
	No* novo = (No*) malloc (sizeof(No));
	novo->info = v;
	novo->prox = p->prim;
	p->prim = novo;
}

void pilha_pop (Pilha* p){
	No* t;
	if (p->prim == NULL) {
		printf ("A pilha está vazia");
		exit(1);
	}
	t = p->prim;
	p->prim = t->prox;
	free(t);
}

int pilha_vazia (Pilha* p){
	if (p->prim == NULL) {
		return 0;
	}
	return 1;

}

void mostrar_pilha(Pilha* p) {
	No *t;
	t = p->prim;
	while (t != NULL) {
		printf ("O valor: %.2f", t->info);
		t = t->prox;
	}

	

}