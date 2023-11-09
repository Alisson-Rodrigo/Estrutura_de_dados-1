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