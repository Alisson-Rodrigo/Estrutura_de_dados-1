typedef struct ordem Ordem;

void inicializa(Ordem *v, int tamanho);
void preencher_radom(Ordem *v);
void bubble_sort(Ordem *v);
void selection_sort(Ordem *v);
void insertion_sort(Ordem *v);
void imprimir_estatisticas(Ordem *v, char* nome_algoritmo);
void imprimir_vetor(Ordem *v);
