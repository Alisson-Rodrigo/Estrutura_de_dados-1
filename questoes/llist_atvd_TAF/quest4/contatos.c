#include "contatos.h"
#include <stdlib.h>
#include <stdio.h>

struct etiquetas
{
    char palavra[100];
};


struct contato
{
    char nome[50];
    int numero;
    Etiqueta *etq;
    int QtdEtiquetas;
};

Contato *atribuir (int QtdContatos) {
    int i,j,QtdEtiquetas;
    Contato *c = (Contato*) malloc (QtdContatos * sizeof(Contato));
    if (!c) {
        printf ("Erro na alocacao");
        exit(1);
    }
    for (i=0;i<QtdContatos;i++) {
        printf ("Digite o nome do contato: ");
        scanf ("%s", c->nome);
        printf ("Digite o numero do contato: ");
        scanf ("%d", &c->numero);
        printf ("Quantas etiquetas deseja adicionar? ");
        scanf ("%d", &QtdEtiquetas);
        c[i].QtdEtiquetas = QtdEtiquetas;

        c[i].etq = (Etiqueta*) malloc (QtdEtiquetas * sizeof(Etiqueta));
        if (!c[i].etq) {
            printf ("Erro na alocacao");
            exit (1);
        }

        for (j=0;j<QtdEtiquetas;j++) {
            printf ("Digite a etiqueta: ");
            scanf ("%s", c[i].etq[j].palavra);  
        }
        printf ("\n");
    }

    return c;
}

void imprimir (Contato *contato, int QtdContatos) {
    int i, j, contador=1;

    printf ("------- Lista de contatos --------\n");
    for (i=0;i<QtdContatos;i++) {
        printf ("Contato %d -\n", contador);
        printf ("Nome: %s\n", contato[i].nome);
        printf ("Numero: %d\n", contato[i].numero);
        printf ("Etiquetas: ");
        for (j=0;j<contato[i].QtdEtiquetas;j++) {
            printf ("[");
            printf ("%s", contato[i].etq[j].palavra);
            printf ("]");
        }
        contador++;
        printf ("\n");
    }
}

void adicionar_etiqueta (Contato *contato, int QtdContatos, int numero) {
    int i,j,aux_etq;
    for (i=0;i<QtdContatos;i++) {
        if (numero == contato[i].numero) {
            printf ("Digite quantas etiquetas deseja cadastrar: ");
            scanf ("%d", &aux_etq);
            contato[i].etq = (Etiqueta*) realloc (contato[i].etq, aux_etq * sizeof(Etiqueta));
            if (!contato[i].etq) {
                printf ("Erro na alocacao");
                exit (1);
            }
            contato->QtdEtiquetas += aux_etq;
            for (j = contato[i].QtdEtiquetas - aux_etq;j<contato[i].QtdEtiquetas;j++) {
                printf ("Digite a etiqueta: ");
                scanf ("%s", contato[i].etq[j].palavra);
            }
        }
    }
}

void buscar_contatos (Contato *contato, char *etiqueta, int QtdContatos) {
    int i, j, flag=0;
    for (i=0;i<QtdContatos;i++) {
        for (j=0;j<contato[i].QtdEtiquetas;j++) {
            if (strcmp(etiqueta, contato[i].etq[j].palavra) == 0) {
                printf ("A etiqueta %s foi encontrada no contato %s!", etiqueta, contato[i].nome);
                flag = 1;
            }
        }
    }
    if (flag == 0) {
        printf ("Nada foi encontrado");
    }
}



