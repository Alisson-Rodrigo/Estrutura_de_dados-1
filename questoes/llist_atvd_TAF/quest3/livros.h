typedef struct  palavrachave Palavrachave;
typedef struct livros Livros;


Livros *atribuir ();
void imprimir (Livros *livros, int QtdLivros);
void adicionar_palavra_chave (Livros *livros, char *titulo, int Qtdlivros);
void buscar_palavras_chave (Livros *livros, char *palavra_chave, int QtdLivros);
void imprimir_livros_autor (Livros *livros, char *autor, int QtdLivros);
void remover_palavra_chave(Livros *livros, char *palavra_chave, int QtdLivros);
void liberar (Livros *livros);

