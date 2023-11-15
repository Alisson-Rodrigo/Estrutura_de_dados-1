#include "contatos.c"
#include <stdlib.h>
#include <stdio.h>

int main() {
    int opcao, QtdContatos = 0;
    Contato *contatos = NULL;

    do {
        printf("\n-------- Menu --------\n");
        printf("1. Adicionar Contato\n");
        printf("2. Listar Contatos\n");
        printf("3. Adicionar Etiqueta\n");
        printf("4. Buscar Contatos por Etiqueta\n");
        printf("5. Remover Contato\n");
        printf("6. Listar Nomes de Contatos\n");
        printf("7. Atualizar Número\n");
        printf("8. Sair\n");
        printf("----------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Quantos contatos deseja adicionar? ");
                int numContatos;
                scanf("%d", &numContatos);
                contatos = atribuir(contatos , numContatos, QtdContatos);
                QtdContatos += numContatos;
                break;
            case 2:
                imprimir(contatos, QtdContatos);
                break;
            case 3:
                printf("Digite o número do contato para adicionar etiquetas: ");
                int numeroContato;
                scanf("%d", &numeroContato);
                adicionar_etiqueta(contatos, QtdContatos, numeroContato);
                break;
            case 4:
                printf("Digite a etiqueta a ser buscada: ");
                char etiquetaBusca[100];
                scanf("%s", etiquetaBusca);
                buscar_contatos(contatos, etiquetaBusca, QtdContatos);
                break;
            case 5:
                QtdContatos = remover_contato(contatos, QtdContatos);
                break;
            case 6:
                Listar_contatos(contatos, QtdContatos);
                break;
            case 7:
                atualizar_numero(contatos, QtdContatos);
                break;
            case 8:
                liberar(contatos);
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 8);

    return 0;
}
