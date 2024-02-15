typedef struct arvore Arvore;

void menu();
void menuImprimir();
Arvore* abp_cria_vazia ();
Arvore* abp_inserir (Arvore* arv, int num);
int abp_consultar (Arvore* arv, int num);
void abp_mostrar_em_ordem (Arvore* arv);
void abp_mostrar_pre_ordem (Arvore* arv);
void abp_mostrar_pos_ordem (Arvore* arv);
Arvore* abp_remover (Arvore* arv, int num);
Arvore* abp_desalocar (Arvore* arv);