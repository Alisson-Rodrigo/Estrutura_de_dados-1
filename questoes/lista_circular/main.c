#include "book.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para exibir o menu
void exibir_menu() {
    printf("\nMenu:\n");
    printf("1. Inserir livro\n");
    printf("2. Imprimir lista de livros\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    Book *lista = zerar_lista();
    int opcao;
    char titulo[50], autor[50];
    int ano, id;

    do {
        exibir_menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Informe o título do livro: ");
                scanf("%s", titulo);
                printf("Informe o autor do livro: ");
                scanf("%s", autor);
                printf("Informe o ano do livro: ");
                scanf("%d", &ano);
                printf("Informe o ID do livro: ");
                scanf("%d", &id);
                lista = inserir_ordenado_circular(lista, titulo, autor, ano, id);
                break;

            case 2:
                imprimir_lista(lista);
                break;

            case 3:
                printf("Saindo do programa. Obrigado!\n");
                break;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}
