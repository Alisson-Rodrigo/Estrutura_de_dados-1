#include <stdio.h>
#include <time.h>

// Definição da estrutura 'Ordenacao'
struct Ordenacao {
    int tamanho;
    int *num;
    clock_t inicio, fim;
    int comparacoes, trocas;
};

// Protótipo da função bubble_sort
void bubble_sort(struct Ordenacao *ordenacao);

int main() {
    // Exemplo de uso da função bubble_sort

    // Criar e inicializar uma estrutura Ordenacao
    struct Ordenacao ordenacao;
    ordenacao.tamanho = 5;
    int numeros[5] = {5, 3, 2, 4, 1};
    ordenacao.num = numeros;
    ordenacao.comparacoes = 0;
    ordenacao.trocas = 0;

    // Chamar a função bubble_sort
    bubble_sort(&ordenacao);

    // Imprimir os elementos ordenados
    printf("Elementos ordenados:\n");
    for (int i = 0; i < ordenacao.tamanho; i++) {
        printf("%d ", ordenacao.num[i]);
    }
    printf("\n");

    // Imprimir estatísticas de desempenho
    printf("Comparacoes: %d\n", ordenacao.comparacoes);
    printf("Trocas: %d\n", ordenacao.trocas);
    printf("Tempo decorrido: %f segundos\n", (double)(ordenacao.fim - ordenacao.inicio) / CLOCKS_PER_SEC);

    return 0;
}

// Definição da função bubble_sort
void bubble_sort(struct Ordenacao *ordenacao) {
    int i, j;
    ordenacao->inicio = clock();

    // Exibir o vetor desordenado
    printf("Vetor Desordenado:\n");
    for (i = 0; i < ordenacao->tamanho; i++) {
        printf("%d ", ordenacao->num[i]);
    }
    printf("\n");

    // Algoritmo de ordenação bubble sort
    for (i = 0; i < ordenacao->tamanho; i++) {
        for (j = 0; j < ordenacao->tamanho; j++) {
            ordenacao->comparacoes++;
            if (ordenacao->num[j] > ordenacao->num[j + 1]) {
                // Trocar elementos se estiverem fora de ordem
                int temp = ordenacao->num[j];
                ordenacao->num[j] = ordenacao->num[j + 1];
                ordenacao->num[j + 1] = temp;
                ordenacao->trocas++;
            }
        }
    }

    // Exibir o vetor ordenado
    printf("Vetor Ordenado:\n");
    for (i = 0; i < ordenacao->tamanho; i++) {
        printf("%d ", ordenacao->num[i]);
    }
    printf("\n");

    // Registrar o tempo final da ordenação
    ordenacao->fim = clock();
}
