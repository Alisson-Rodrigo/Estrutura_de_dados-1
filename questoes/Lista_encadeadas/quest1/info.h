typedef struct lista Lista;

Lista *lst_insere(Lista *l, int i);
void imprimir(Lista *l);
int contar_lista(Lista *l);
Lista *insere_fim(Lista *l, int v);
void liberar(Lista *l);

Lista* removerElemento(Lista* l, int v);
Lista* lst_busca (Lista* l, int v);
int lst_igual (Lista* l1, Lista* l2);