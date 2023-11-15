#include "contatos.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

Contato *atribuir (Contato *c ,int numerosContatos,int QtdContatos) {
    int i,j,QtdEtiquetas;
    c = (Contato*) realloc (c, numerosContatos * sizeof(Contato));
    if (!c) {
        printf ("Erro na alocacao");
        exit(1);
    }

    for (i=QtdContatos;i<QtdContatos+numerosContatos;i++) {
        printf ("Digite o nome do contato: ");
        scanf ("%s", c[i].nome);
        printf ("Digite o numero do contato: ");
        scanf ("%d", &c[i].numero);
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
            contato[i].QtdEtiquetas += aux_etq;
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

int remover_contato(Contato *c, int num) {
    char nomeRemover[100];
    int i, j;
    printf("Informe o nome do contato a ser removido: ");
    scanf("%s", nomeRemover);

    for (i = 0; i < num; i++)
    {
        if (strncmp(c[i].nome, nomeRemover, sizeof(c[i].nome)) == 0)
        {
            free(c[i].etq);

            for (j = i; j < (num - 1); j++)
            {
                c[j] = c[j + 1];
            }

            memset(&c[num - 1], 0, sizeof(Contato));

            num--; 
            printf("Contato removido com sucesso.\n");
            break;
        }
    }

    return num;
}

void Listar_contatos (Contato *contato, int QtdContatos) {
    int i;

    printf ("----Contatos----\n");
    for (i=0;i<QtdContatos;i++) {
        printf ("Nome: %s\n", contato[i].nome);
    }
}

void atualizar_numero (Contato *contato, int QtdNumeros) {
    int i, numero, flag=0;
    printf ("Qual número deseja atualizar? ");
    scanf ("%d", &numero);

    for (i=0;i<QtdNumeros;i++) {
        if (numero == contato[i].numero) {
            printf ("Digite o novo numero: ");
            scanf ("%d", &contato[i].numero);
            printf ("Numero atualizado");
            flag = 1;
        }
    }

    if (flag == 0) {
        printf ("Numero nao encontrado");
    }
}

void liberar (Contato *contato) {
    free (contato);
}



