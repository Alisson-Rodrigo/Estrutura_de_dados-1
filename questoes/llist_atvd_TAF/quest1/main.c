#include "jogador.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Jogador *jogadores = NULL;
    int QtdJogadores = 0, numJogadores, opcao, i;
    float mediaReferencia;

    do {
        printf("\n-------- Menu --------\n");
        printf("1. Adicionar Jogadores\n");
        printf("2. Imprimir Jogadores\n");
        printf("3. Calcular Soma de Estatísticas\n");
        printf("4. Verificar se é Bom Jogador\n");
        printf("5. Sair\n");
        printf("----------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Quantos jogadores deseja adicionar? ");
                scanf("%d", &numJogadores);
                jogadores = atribuir(jogadores, QtdJogadores, numJogadores);
                QtdJogadores += numJogadores;
                break;
            case 2:
                printf("\nImprimir todos os jogadores:\n");
                imprimir(jogadores, QtdJogadores);
                break;
            case 3:
                printf("\nCalcular soma de estatísticas de todos os jogadores:\n");
                printf("A soma é: %.2f\n", soma(jogadores, QtdJogadores));
                break;
            case 4:
                printf("\nVerificar se é um bom jogador:\n");
                printf("Informe a média de referência: ");
                scanf("%f", &mediaReferencia);
                for (i = 0; i < QtdJogadores; i++) {
                    if (EhBom(&jogadores[i], mediaReferencia)) {
                        printf("%s é um bom jogador!\n", jogadores[i].nome);
                    } else {
                        printf("%s não é um bom jogador.\n", jogadores[i].nome);
                    }
                }
                break;
            case 5:
                liberar(jogadores);
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}
