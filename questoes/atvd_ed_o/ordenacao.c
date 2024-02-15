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
    int i, j, min_idx;
    ordenacao->inicio = clock();
    for(i = 0; i < ordenacao->tamanho-1; i++){
        min_idx = i;
        for(j = i+1; j < ordenacao->tamanho; j++){
            ordenacao->comparacoes++;
            if(ordenacao->num[j] < ordenacao->num[min_idx]){
                min_idx = j;
            }
        }
        int temp = ordenacao->num[min_idx];
        ordenacao->num[min_idx] = ordenacao->num[i];
        ordenacao->num[i] = temp;
        ordenacao->trocas++;
    }
    ordenacao->fim = clock();
}

void insertion_sort(Ordem *ordenacao){
    int i, key, j;
    ordenacao->inicio = clock();
    for(i = 1; i < ordenacao->tamanho; i++){
        key = ordenacao->num[i];
        j = i - 1;
        while(j >= 0 && ordenacao->num[j] > key){
            ordenacao->num[j+1] = ordenacao->num[j];
            j = j - 1;
            ordenacao->trocas++;
            ordenacao->comparacoes++; 
        }
        ordenacao->num[j+1] = key;
    }
    ordenacao->fim = clock();
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