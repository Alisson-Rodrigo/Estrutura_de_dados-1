#include "livros.h"
#include <stdio.h>
#include <stdlib.h>

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

        l[i].chaves = (char*)malloc(qtdChaves * sizeof(char*));

        for (j=0;j<qtdChaves;j++) {
            printf ("Digite a palavra chave: ");
            scanf ("%s", l[i].chaves[j]);
            }

    return l;
    }
}

void imprimir (Livros *livros, int QtdLivros) {
    int i,j;

    for (i=0;i<QtdLivros;i++) {
        printf ("O titulo do livro %s", livros[i].titulo);
        printf ("O nome do autor %s", livros[i].autor);
        printf ("Ano de publicacao %d", livros[i].ano_publicacao);
        for (j=0;j<QtdLivros;j++) {
            printf ("Palavras chave:");
            printf ("%s", livros[i].chaves[j]);
        }
    }

}

