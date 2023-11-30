#include "info.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Lista *lista = lst_zerar();
    int opcao, elemento;

    do {
        printf("\n1. Inserir no início");
        printf("\n2. Inserir no final");
        printf("\n3. Inserir ordenado");
        printf("\n4. Remover elemento");
        printf("\n5. Buscar elemento");
        printf("\n6. Imprimir lista");
        printf("\n0. Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o elemento a ser inserido no início: ");
                scanf("%d", &elemento);
                lista = lst_insere(lista, elemento);
                break;
            case 2:
                printf("Digite o elemento a ser inserido no final: ");
                scanf("%d", &elemento);
                lista = insere_fim(lista, elemento);
                break;
            case 3:
                printf("Digite o elemento a ser inserido ordenado: ");
                scanf("%d", &elemento);
                lista = insere_ordenado(lista, elemento);
                break;
            case 4:
                printf("Digite o elemento a ser removido: ");
                scanf("%d", &elemento);
                lista = remover_elemento(lista, elemento);
                break;
            case 5:
                printf("Digite o elemento a ser buscado: ");
                scanf("%d", &elemento);
                Lista *resultado = buscar_elemento(lista, elemento);
                if (resultado != NULL) {
                    printf("Elemento encontrado: %d\n", resultado->info);
                } else {
                    printf("Elemento não encontrado na lista.\n");
                }
                break;
            case 6:
                imprimir(lista);
                break;
            case 0:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

    } while (opcao != 0);

    liberar(lista);







    

    return 0;
}
