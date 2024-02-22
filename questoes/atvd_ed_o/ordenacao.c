#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"
#include "time.h"


struct ordem{
    int *num;
    int tamanho;
    unsigned long long int comparacoes;
    unsigned long long int trocas;
    clock_t inicio;
    clock_t fim;
};


void bubble_sort(Ordem *ordenacao){
    int i, j;
    ordenacao->inicio = clock();
    for(i = 0; i < ordenacao->tamanho-1; i++){
        for(j = 0; j < ordenacao->tamanho-i-1; j++){
            ordenacao->comparacoes++;
            if(ordenacao->num[j] > ordenacao->num[j+1]){
                int temp = ordenacao->num[j];
                ordenacao->num[j] = ordenacao->num[j+1];
                ordenacao->num[j+1] = temp;
                ordenacao->trocas++;
            }
        }
    }
    ordenacao->fim = clock();
}

void selection_sort(Ordem *ordenacao){
    int i, j, min_idx,temp;

    for (i=0;i<ordenacao->tamanho;i++) {
        printf ("%d ", ordenacao->num[i]);
    }
    printf("\n");

    for (i=0;i<ordenacao->tamanho-1; i++) {
        min_idx = i;
        for (j=i+1;j<ordenacao->tamanho;j++) {
            if (ordenacao->num[j] < ordenacao->num[min_idx]) {
                min_idx = j;
            }
        }
        temp = ordenacao->num[i];
        ordenacao->num[i] = ordenacao->num[min_idx];
        ordenacao->num[j] = temp;
    }

    for (i=0;i<ordenacao->tamanho;i++) {
        printf ("%d ", ordenacao->num[i]);
    }
}


void insert(int vetor[],int tam){
    int i, j, aux;
    for (i=1;i<tam;i++) {
        aux = vetor[i];
        j = i - 1;
        while (j >= 0 && aux < vetor[j]) {
            vetor[aux] = vetor[j];
            j--;
        }
        vetor[j+1] = aux;
    }

    for (i=0;i<tam;i++) {
        printf ("%d ", vetor[i]);
    }
}


void exibir_infos(Ordem *ordenacao, char* metodo){
    double t = ((double)(ordenacao->fim - ordenacao->inicio))/CLOCKS_PER_SEC;
    printf("%s:\n", metodo);
    printf("Comparacoes: %llu\n", ordenacao->comparacoes); // Modificado para %llu
    printf("Trocas: %llu\n", ordenacao->trocas); // Modificado para %llu
    printf("Tempo: %.2f segundos\n\n", t);
}


void iniciar(Ordem *ordenacao,int tamanho){
    ordenacao->num = (int*)malloc(tamanho * sizeof(int));
    ordenacao->tamanho = tamanho;
    ordenacao->comparacoes = 0;
    ordenacao->trocas = 0;
}

void inserir_dados(Ordem *ordenacao){
    int i;
    srand(time(NULL));
    for (i = 0; i < ordenacao->tamanho; i++) {
        ordenacao->num[i] = rand() % 100000;
    }
}