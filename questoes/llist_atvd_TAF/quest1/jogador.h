typedef struct jogador
{
    char nome[50];
    int jogos;
    int gols;
    int assistencias;
}Jogador;



Jogador* atribuir (int Qtdjogador);
void imprimir (Jogador *jogador, int QtdJogador);
float soma (Jogador *jogador, int QtdJogador);
int EhBom (Jogador *jogador, float media_ok);
void liberar (Jogador *jogador);






