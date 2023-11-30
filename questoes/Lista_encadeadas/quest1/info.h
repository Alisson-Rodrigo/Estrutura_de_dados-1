typedef struct lista Lista;

Lista *lst_insere(Lista *l, int i);
void imprimir(Lista *l);
int contar_lista(Lista *l);
Lista *insere_fim(Lista *l, int v);
void liberar(Lista *l);
Lista *remover_elemento(Lista *l, int elemento);
Lista *buscar_elemento(Lista *l, int elemento);
