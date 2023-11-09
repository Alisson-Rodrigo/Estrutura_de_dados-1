#include "contatos.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Contato *contatos = NULL;
    int QtdContatos = 0;
    int opcao;

    do {
        printf("\n----------- Menu -----------\n");
        printf("1. Atribuir contatos\n");
        printf("2. Imprimir contatos\n");
        printf("3. Adicionar etiqueta\n");
        printf("4. Buscar contatos por etiqueta\n");
        printf("5. Remover contato\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a quantidade de contatos: ");
                scanf("%d", &QtdContatos);
                contatos = atribuir(QtdContatos);
                break;

            case 2:
                imprimir(contatos, QtdContatos);
                break;

            case 3:
                if (QtdContatos > 0) {
                    int numero;
                    printf("Digite o numero do contato: ");
                    scanf("%d", &numero);
                    adicionar_etiqueta(contatos, QtdContatos, numero);
                } else {
                    printf("Nenhum contato atribuido. Atribua contatos primeiro.\n");
                }
                break;

            case 4:
                if (QtdContatos > 0) {
                    char etiqueta[100];
                    printf("Digite a etiqueta a ser buscada: ");
                    scanf("%s", etiqueta);
                    buscar_contatos(contatos, etiqueta, QtdContatos);
                } else {
                    printf("Nenhum contato atribuido. Atribua contatos primeiro.\n");
                }
                break;

            case 5:
                if (QtdContatos > 0) {
                    char nome[50];
                    printf("Digite o nome do contato a ser removido: ");
                    scanf("%s", nome);
                    remover_contato(contatos, &QtdContatos, nome);

                } else {
                    printf("Nenhum contato atribuido. Atribua contatos primeiro.\n");
                }
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
