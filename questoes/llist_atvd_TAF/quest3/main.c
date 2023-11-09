#include "livros.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int QtdLivros;
    char titulo[50];
    char palavra_chave[50];
    char autor[50];

    printf("Quantos livros deseja inserir? ");
    scanf("%d", &QtdLivros);

    Livros *livros = atribuir(QtdLivros);

    if (livros == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    imprimir(livros, QtdLivros);

    //printf("\nDigite o nome do livro que deseja adicionar palavra-chave: ");
    //scanf("%s", titulo);

    //adicionar_palavra_chave(livros, titulo, QtdLivros);

    //imprimir(livros, QtdLivros);

    //printf("Digite a palavra chave que deseja buscar: ");
    //scanf ("%s", palavra_chave);
    
    //buscar_palavras_chave(livros, palavra_chave, QtdLivros);

    //printf ("Digite o nome do autor: ");
    //scanf ("%s", autor);

    //imprimir_livros_autor(livros, autor, QtdLivros);

    printf ("Digite uma palavra chave");
    scanf ("%s", palavra_chave);

    remover_palavra_chave(livros, palavra_chave, QtdLivros);

    imprimir (livros, QtdLivros);

    return 0;
}
