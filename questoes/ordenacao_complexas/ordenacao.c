#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"
#include <malloc.h>


struct ordenacao {
    int *num;
    int tamanho;
    size_t memoria;

};

void inicializa(Ordenacao *v, int tamanho) {
    v->num = (int*)malloc(tamanho * sizeof(int));
    v->tamanho = tamanho;
}

void preencher_random(Ordenacao *v) {
    int i;
    srand(time(NULL));
    for (i = 0; i < v->tamanho; i++) {
        v->num[i] = rand() % 999999;
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
void merge(int arr[], int l, int m, int r, size_t *memoria) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = (int*) malloc(n1 * sizeof(int));
    int *R = (int*) malloc(n2 * sizeof(int));

    *memoria += (n1 + n2) * sizeof(int);

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

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

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

void mergeSort(Ordenacao *dados, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(dados, l, m);
        mergeSort(dados, m + 1, r);

        merge(dados->num, l, m, r, &dados->memoria);
    }
}

void imprimirTempoETamanhoMemoriaMergeSort(Ordenacao *dados) {
    clock_t inicio = clock();

    // Calcula o tempo de execução
    double tempo_execucao;
    dados->memoria = 0;

    // Chama a função de ordenação Merge Sort
    mergeSort(dados, 0, dados->tamanho - 1);

    clock_t fim = clock();

    tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    // Calcula a memória utilizada em megabytes
    double memoria_MB = (double)dados->memoria / (1024 * 1024);

    printf("Tempo de execução: %.3f segundos\n", tempo_execucao);
    printf("Memória utilizada: %.3f MB\n", memoria_MB);
}




// Fun��o para imprimir o tempo de execu��o e a quantidade de mem�ria utilizada
void imprimirTempoETamanhoMemoria(Ordenacao *dados) {
    clock_t inicio = clock(); // Início da contagem de tempo

    // Ordena o array usando o algoritmo Quick Sort
    quickSort(dados, 0, dados->tamanho - 1);

    clock_t fim = clock(); // Fim da contagem de tempo
    double tempo_execucao = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    size_t memoria_utilizada = dados->tamanho * sizeof(int);

    // Convertendo bytes para megabytes
    double memoria_utilizada_MB = (double)memoria_utilizada / (1024 * 1024);

    printf("Tempo de execucao: %.3f segundos\n", tempo_execucao);
    printf("Quantidade de memoria utilizada: %.3f MB\n", memoria_utilizada_MB);
}

