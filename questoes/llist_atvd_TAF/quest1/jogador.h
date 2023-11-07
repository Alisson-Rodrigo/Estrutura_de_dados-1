typedef struct jogador
{
    char nome[50];
    int jogos;
    int gols;
    int assistencias;
}JogadorA;



void atribuir (JogadorA jogador, char nome[50], int jogos, int gols, int assistencias);
void imprimir (JogadorA jogador);
float soma (JogadorA jogador, int jogadorA, int jogadorB);
int EhBom (JogadorA jogador);
void libera (JogadorA jogador);






