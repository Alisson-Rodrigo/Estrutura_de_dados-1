#include<stdlib.h>
#include<stdio.h>
#include "arvore.h"

struct arvore {
    int value;
    struct ArB *left;
    struct ArB *right;
};


Arvore* abp_cria_vazia () {
    return NULL;
}

Arvore* abp_inserir (Arvore* arv, int num) {
    Arvore *new = NULL;
    Arvore **search = NULL;
    new = (Arvore*) malloc(sizeof(Arvore));
    new->value = num;
    new->left = NULL;
    new->right = NULL;
    if(arv) {
        search = &arv;
        while(*search) {
            if(num < (*search)->value)
                search = &((*search)->left);
            else if(num > (*search)->value)
                search = &((*search)->right);
        }
        *search = new;
    } else
        arv = new;
    return arv;
}


void abp_mostrar_tabulado(Arvore* arv, int level) {
    if (arv) {
        abp_mostrar_tabulado(arv->left, level + 1);
        printf("%d ", arv->value);
        abp_mostrar_tabulado(arv->right, level + 1);
    }
}

void abp_mostrar_em_ordem (Arvore* arv) {
    abp_mostrar_tabulado(arv, 0);
}

int abp_consultar (Arvore* arv, int num) {
    Arvore *search = NULL;
    if(arv) {
        search = arv;
        while(search && num != search->value) {
            if(num < search->value)
                search = search->left;
            else if(num > search->value)
                search = search->right;
        }
    }
    return search;
}

void abp_mostrar_pre_ordem (Arvore* arv) {
    if(arv) {
        printf("%d\n", arv->value);
        abp_mostrar_pre_ordem(arv->left);
        abp_mostrar_pre_ordem(arv->right);
    }
}

void abp_mostrar_pos_ordem (Arvore* arv) {
    if(arv) {
        abp_mostrar_pos_ordem(arv->left);
        abp_mostrar_pos_ordem(arv->right);
        printf("%d\n", arv->value);
    }
}

Arvore* abp_remover (Arvore* arv, int number) {
    Arvore **search = NULL;
    Arvore *remove = NULL;
    int temp;
    if(arv) {
        search = &arv;
        while(*search && number != (*search)->value) {
            if(number < (*search)->value)
                search = &((*search)->left);
            else if(number > (*search)->value)
                search = &((*search)->right);
        }
        if(*search) {
            if((*search)->left && (*search)->right) {
                remove = (*search)->left;
                while(remove->right)
                    remove = remove->right;
                temp = remove->value;
                remove->value = (*search)->value;
                (*search)->value = temp;
                (*search)->left = abp_remover((*search)->left, number);
                remove = NULL;
            } else if((*search)->left || (*search)->right) {
                remove = *search;
                if((*search)->left) *search = (*search)->left;
                else *search = (*search)->right;
            } else {
                remove = *search;
                *search = NULL;
            }
            free(remove);
        }
    }
    return arv;
}

Arvore* abp_desalocar (Arvore* arv) {
    if(arv) {
        abp_desalocar(arv->left);
        abp_desalocar(arv->right);
        free(arv);
    }
    return NULL;
}