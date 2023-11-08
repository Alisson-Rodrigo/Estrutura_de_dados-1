typedef struct  
{
    char autor[50];
    char titulo[50];
    int ano_publicacao;
    char *chaves;


}Livros;

Livros *atribuir ();
void imprimir (Livros *livros, int QtdLivros);
