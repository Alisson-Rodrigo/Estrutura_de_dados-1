typedef struct matriz
{
    int linha;
    int coluna;
    float *v;
}Matriz;

Matriz*criar(int n,int m);
float acessar(Matriz*m, int i,int j);
void liberar(Matriz *m);
void atribuir(Matriz *m, int i, int j, float valor);
int linhas(Matriz*m);
int colunas(Matriz *m);
