#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.c"

int main() {
    Ordenacao dados;
    int tamanho = 1000000; // Tamanho do vetor
    int i;

    inicializa(&dados, tamanho);
    preencher_random(&dados);

    clock_t inicio = clock(); // Início da contagem de tempo

    // Ordena o vetor usando o algoritmo Quick Sort
    quickSort(&dados, 0, dados.tamanho - 1);

    clock_t fim = clock(); // Fim da contagem de tempo

    double tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    size_t memoria_utilizada = dados.tamanho * sizeof(int);

    printf("Tempo de execucao: %.6f segundos\n", tempo_execucao);
    printf("Quantidade de memoria utilizada: %zu bytes\n", memoria_utilizada);


    return 0;
}
