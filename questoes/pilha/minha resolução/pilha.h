typedef struct pilha Pilha;
typedef struct no No;

Pilha* pilha_cria (void);
void pilha_push (Pilha* p, float v);
void pilha_pop (Pilha* p);
int pilha_vazia (Pilha* p);
void pilha_libera (Pilha* p);
void mostrar_pilha(Pilha *p);

