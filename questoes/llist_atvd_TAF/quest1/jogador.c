#include "jogador.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct jogador
{
    char nome[50];
    int jogos;
    int gols;
    int assistencias;
};

Jogador* atribuir (Jogador *j, int Qtdjogador, int numJogador) {
    int i;
    j =(Jogador*) realloc(j , numJogador * sizeof(Jogador));

    if (j == NULL) {
        return NULL;
    }

    for(i=Qtdjogador ; i < Qtdjogador + numJogador ; i++){
        printf("Informe o nome do jogador: ");
        scanf("%s",j[i].nome);    
        
        printf("Informe a quantidade de jogos do jogador: ");
        scanf("%d",&j[i].jogos);    

        printf("Informe a quantidade de gols do jogador: ");
        scanf("%d",&j[i].gols);    

        printf("Informe a quantidade de assistencias do jogador: ");
        scanf("%d",&j[i].assistencias);
        }

    return j;
}

void imprimir (Jogador *jogador, int Qtdjogador) {
    int i;
    for (i=0; i < Qtdjogador; i++) {
        printf("O nome do jogador: %s\n ",jogador[i].nome);
        printf("O numero de jogos: %d\n ",jogador[i].jogos);
        printf("O numero de gols: %d\n ",jogador[i].gols);
        printf("O numero de assistencias:: %d\n ",jogador[i].assistencias);   
        }
}

float soma (Jogador *jogador, int QtdJogador) {
    float soma;
    int i;

    for (i=0;i<QtdJogador;i++) {
        soma = jogador[i].assistencias + jogador[i].gols + jogador[i].jogos;
    }

    return soma;

}

int EhBom(Jogador *jogador, float mediaReferencia) {
    float mediaJogador = (float)(jogador->assistencias + jogador->gols + jogador->jogos);
    return mediaJogador >= mediaReferencia;
}



void liberar(Jogador *jogador) {
    free(jogador);
}