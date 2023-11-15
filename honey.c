#include <stdio.h>
#include <stdlib.h>
//#include "Questao03L4.h"

typedef struct PalavraChave {
    char palavra[50];
}PalavraChave;

//--------------------------------------------
typedef struct Livro {
    char titulo[50];
    char autor[50];
    int ano;
    PalavraChave *palavrasChave;
    int qtdchave;
}Livro ;

Livro *atribuir(int qtd_livro, Livro *livros) {
    Livro *livro_aux;
    int qtdChave=0;
    livro_aux = (Livro*)realloc(livros, (qtd_livro + 1) * sizeof(Livro));

    printf("Informe o título do livro: \n");
    scanf("%s", livro_aux[qtd_livro].titulo);
    printf("Informe o autor do livro: \n");
    scanf("%s", livro_aux[qtd_livro].autor);
    printf("Informe o ano do livro: \n");
    scanf("%d", &livro_aux[qtd_livro].ano);

    printf("Informe a quantidade de palavras-chave:\n");
    scanf("%d", &qtdChave);

    livro_aux[qtd_livro].palavrasChave = (PalavraChave*)malloc(qtdChave * sizeof(PalavraChave));

    for (int i = 0; i < qtdChave; i++) {
        printf("Informe a palavra-chave %d: \n", i + 1);
        scanf("%s", livro_aux[qtd_livro].palavrasChave[i].palavra);
    }
    return livro_aux;
}

void imprimir(int qtd_livro, Livro *livros){
    for (int i = 0; i < qtd_livro; i++){
        printf("Livro {%d}: %s\n", i+1, livros->titulo);
        printf("Autor {%d}: %s\n", i+1, livros->autor);
        printf("Ano {%d}: %d\n", i+1, livros->ano);
        for (int i = 0; i < livros[i].qtdchave;i++){
            printf("Palavras-Chaves {%d}: %s\n", i+1, livros[i].palavrasChave[i].palavra);
        }
    }
}