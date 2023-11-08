#include "jogador.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int QtdJogadores;
    int i;
    printf("Informe o número de jogadores: ");
    scanf("%d", &QtdJogadores);

    Jogador *jogadores = atribuir(QtdJogadores);

    if (jogadores == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    imprimir(jogadores, QtdJogadores);

    float mediaReferencia;
    printf("Informe a média de referência para ser considerado 'bom' jogador: ");
    scanf("%f", &mediaReferencia);

    for (i = 0; i < QtdJogadores; i++) {
        if (EhBom(&jogadores[i], mediaReferencia)) {
            printf("O jogador %s é bom!\n", jogadores[i].nome);
        } else {
            printf("O jogador %s não é considerado bom.\n", jogadores[i].nome);
        }
    }

    float mediaTotal = soma(jogadores, QtdJogadores);
    mediaTotal /= QtdJogadores;

    printf("Média das estatísticas dos jogadores: %.2f\n", mediaTotal);

    liberar(jogadores);

    return 0;
}
