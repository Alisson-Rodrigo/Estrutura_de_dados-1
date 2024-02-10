#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

struct ordenacao {
    int *num;
    int tamanho;
};

void inicializa(Ordenacao *v, int tamanho) {
    v->num = (int*)malloc(tamanho * sizeof(int));
    v->tamanho = tamanho;
}

void preencher_random(Ordenacao *v) {
    int i;
    srand(time(NULL));
    for (i = 0; i < v->tamanho; i++) {
        v->num[i] = rand() % 1000000;
    }
}

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar(int arr[], int low, int high) {
    int pivot = arr[high];
    int j;
    int i = (low - 1);
    for (j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            trocar(&arr[i], &arr[j]);
        }
    }
    trocar(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Fun��o Quick Sort recursiva
void quickSort(Ordenacao *dados, int low, int high) {
    if (low < high) {
        // Encontra o �ndice do piv�
        int pi = particionar(dados->num, low, high);

        // Ordena os elementos antes e depois do piv�
        quickSort(dados, low, pi - 1);
        quickSort(dados, pi + 1, high);
    }
}

// Fun��o para imprimir o array
void imprimirArray(int arr[], int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Função para fundir dois subarrays de arr[]
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Cria arrays temporários
    int L[n1], R[n2];

    // Copia os dados para os arrays temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge dos arrays temporários de volta em arr[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Função principal que implementa o Merge Sort
void mergeSort(Ordenacao *dados, int l, int r) {
    if (l < r) {
        // Encontra o ponto médio do array
        int m = l + (r - l) / 2;

        // Ordena a primeira metade
        mergeSort(dados, l, m);
        // Ordena a segunda metade
        mergeSort(dados, m + 1, r);

        // Merge das metades ordenadas
        merge(dados->num, l, m, r);
    }
}

void imprimirTempoETamanhoMemoriaMergeSort(Ordenacao *dados) {
    clock_t inicio = clock(); // Início da contagem de tempo

    // Cálculo da quantidade de memória utilizada antes da ordenação
    size_t memoria_antes = dados->tamanho * sizeof(int);

    // Chamada da função de ordenação Merge Sort
    mergeSort(dados, 0, dados->tamanho - 1);

    clock_t fim = clock(); // Fim da contagem de tempo

    // Cálculo do tempo de execução
    double tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    // Cálculo da quantidade de memória utilizada após a ordenação
    size_t memoria_depois = dados->tamanho * sizeof(int);

    // Cálculo da quantidade de memória utilizada durante a ordenação (diferença entre antes e depois)
    size_t memoria_utilizada = memoria_depois - memoria_antes;

    printf("Tempo de execucao: %.3f segundos\n", tempo_execucao);
    printf("Quantidade de memoria utilizada: %zu bytes\n", memoria_utilizada);
}



// Fun��o para imprimir o tempo de execu��o e a quantidade de mem�ria utilizada
void imprimirTempoETamanhoMemoria(Ordenacao *dados) {
    clock_t inicio = clock(); // In�cio da contagem de tempo

    // Ordena o array usando o algoritmo Quick Sort
    quickSort(dados, 0, dados->tamanho - 1);

    clock_t fim = clock(); // Fim da contagem de tempo
    double tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    size_t memoria_utilizada = dados->tamanho * sizeof(int);
    printf("Tempo de execucao: %.3f segundos\n", tempo_execucao);
    printf("Quantidade de memoria utilizada: %zu bytes\n", memoria_utilizada);
}
