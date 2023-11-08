#include "livros.h"
#include <stdio.h>
#include <stdlib.h>

struct  palavrachave
{
    char *palavra[100];

};


struct livros
{
    char autor[50];
    char titulo[50];
    int ano_publicacao;
    Palavrachave *chaves;
    int QtdChaves;
};


Livros *atribuir (int QtdLivros) {
    int i, qtdChaves, j;
    Livros *l = (Livros*) malloc (QtdLivros * sizeof(Livros));

    for (i=0;i<QtdLivros;i++)
    {
        printf ("Qual o titulo do livro: ");
        scanf ("%s", l[i].titulo);
        printf ("Digite o nome do autor: ");
        scanf ("%s", l[i].autor);
        printf ("O ano de publicacao: ");
        scanf ("%d", &l[i].ano_publicacao);
        printf ("Quantas palavras chaves deseja cadastrar? ");
        scanf ("%d", &qtdChaves);

        l[i].chaves = (Palavrachave*)malloc(qtdChaves * sizeof(Palavrachave));

        for (j=0;j<qtdChaves;j++) {
            printf ("Digite a palavra chave: ");
            scanf ("%s", l[i].chaves[j].palavra);
            }
        l[i].QtdChaves = j;
        printf ("\n");


    }
    return l;

}

void imprimir (Livros *livros, int QtdLivros) {
    int i,j;

    for (i=0;i<QtdLivros;i++) {
        printf ("O titulo do livro %s\n", livros[i].titulo);
        printf ("O nome do autor %s\n", livros[i].autor);
        printf ("Ano de publicacao %d\n", livros[i].ano_publicacao);
        printf ("Palavras chave:");
        for (j=0;j<livros[i].QtdChaves;j++) {
            printf ("[");
            printf ("%s", livros[i].chaves[j].palavra);
            printf ("]");
        }
        printf("\n");
    }

}

void adicionar_palavra_chave (Livros *livros, char *titulo, int Qtdlivros) {
    int i, j, QtdChaves;

    for (i=0;i<Qtdlivros;i++) {
        if (strcmp(titulo, livros[i].titulo) == 0) {
            printf ("Quantas palavras chaves deseja adicioar? ");
            scanf ("%d", &QtdChaves);
            livros[i].QtdChaves += QtdChaves;
            livros[i].chaves = (Palavrachave*) realloc (livros[i].chaves, QtdChaves * sizeof(Palavrachave));
            for (j=livros[i].QtdChaves - QtdChaves; j < livros[i].QtdChaves; j++) {
                printf ("Digite a palavra chave: ");
                scanf ("%s", livros[i].chaves[j].palavra);
            }
        }
    }
}

void buscar_palavras_chave (Livros *livros, char *palavra_chave, int QtdLivros){
    int i, j, flag = 0;
    for (i=0;i<QtdLivros;i++) {
        for (j=0;j<livros->QtdChaves;j++) {
            if ((strcmp(palavra_chave,livros[i].chaves[j].palavra) ) == 0) {
                printf ("A chave '%s' foi encontrada no livro '%s'", palavra_chave, livros[i].titulo);
                flag = 1;
                break;
            }
            }
    }

    if (flag == 0) { 
        printf ("Nada foi encontrado.");
    }
}

void imprimir_livros_autor (Livros *livros, char *autor, int QtdLivros) {
    int i, flag=0;
    for (i=0;i<QtdLivros;i++) {
        if ((strcmp(autor, livros[i].autor) == 0 )) {
            printf ("Livro: %s", livros[i].titulo);
            flag = 1;
        }
    }

    if (flag == 0) {
        printf ("Nada encontrado");
    }
}

void remover_palavra_chave(Livros *livros, char *palavra_chave, int QtdLivros) {
    int i, j;
    for (i=0;i<QtdLivros;i++) {
        for (j=0;j<livros->QtdChaves;j++) {

        }
    }
}

void liberar (Livros *livros) {
    free (livros);
}




