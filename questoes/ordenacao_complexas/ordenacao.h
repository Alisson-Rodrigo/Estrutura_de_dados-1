typedef struct ordenacao Ordenacao;

void inicializa(Ordenacao *v, int tamanho);
void preencher_random(Ordenacao *v);
void imprimirArray(int arr[], int tamanho);
void quickSort(Ordenacao *dados, int low, int high);
void trocar(int *a, int *b);
int particionar(int arr[], int low, int high);
void calcularUsoMemoria(Ordenacao *dados);
void imprimirTempoETamanhoMemoria(Ordenacao *dados);