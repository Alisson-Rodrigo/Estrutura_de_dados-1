#include "livros.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Livros *livros = NULL;
    int QtdLivros = 0, opcao, numlivros;
    char titulo[50], palavra_chave[100], autor[50];

    do {
        printf("1 - Adicionar livro\n");
        printf("2 - Adicionar palavra-chave\n");
        printf("3 - Buscar palavra-chave\n");
        printf("4 - Imprimir livros por autor\n");
        printf("5 - Remover palavra-chave\n");
        printf("6 - Imprimir todos os livros\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Quantos livros deseja adicionar: ");
                scanf("%d", &numlivros);
                livros = atribuir(livros, numlivros, QtdLivros);
                QtdLivros += numlivros;
                break;

            case 2:
                printf("\nAdicionar palavra-chave:\n");
                printf("Digite o titulo do livro: ");
                scanf("%s", titulo);
                adicionar_palavra_chave(livros, titulo, QtdLivros);
                break;

            case 3:
                printf("\nBuscar palavra-chave:\n");
                printf("Digite a palavra-chave: ");
                scanf("%s", palavra_chave);
                buscar_palavras_chave(livros, palavra_chave, QtdLivros);
                break;

            case 4:
                printf("\nImprimir livros por autor:\n");
                printf("Digite o nome do autor: ");
                scanf("%s", autor);
                imprimir_livros_autor(livros, autor, QtdLivros);
                break;

            case 5:
                printf("\nRemover palavra-chave:\n");
                printf("Digite a palavra-chave: ");
                scanf("%s", palavra_chave);
                remover_palavra_chave(livros, palavra_chave, QtdLivros);
                break;

            case 6:
                printf("\nImprimir todos os livros:\n");
                imprimir(livros, QtdLivros);
                break;

            case 0:
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    liberar(livros);

    return 0;
}
