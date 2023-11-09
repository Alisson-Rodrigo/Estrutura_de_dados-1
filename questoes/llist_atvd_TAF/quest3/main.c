#include "livros.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int QtdLivros, opcao;
    Livros *livros = NULL;

    printf("Quantos livros deseja cadastrar? ");
    scanf("%d", &QtdLivros);
    livros = atribuir(QtdLivros);

    do {
        printf("\nMenu de Acessos:\n");
        printf("1. Imprimir informações dos livros\n");
        printf("2. Adicionar palavras-chave a um livro\n");
        printf("3. Buscar livros por palavra-chave\n");
        printf("4. Imprimir livros de um autor\n");
        printf("5. Remover palavra-chave de um livro\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                imprimir(livros, QtdLivros);
                break;
            case 2:
                char titulo[50];
                printf("Digite o título do livro: ");
                scanf("%s", titulo);
                adicionar_palavra_chave(livros, titulo, QtdLivros);
                break;
            case 3:
                char palavra_chave[100];
                printf("Digite a palavra-chave que deseja buscar: ");
                scanf("%s", palavra_chave);
                buscar_palavras_chave(livros, palavra_chave, QtdLivros);
                break;
            case 4:
                char autor[50];
                printf("Digite o nome do autor: ");
                scanf("%s", autor);
                imprimir_livros_autor(livros, autor, QtdLivros);
                break;
            case 5:
                char palavra_chave_remover[100];
                printf("Digite a palavra-chave que deseja remover: ");
                scanf("%s", palavra_chave_remover);
                remover_palavra_chave(livros, palavra_chave_remover, QtdLivros);
                break;
            case 6:
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 6);

    liberar(livros);

    return 0;
}
