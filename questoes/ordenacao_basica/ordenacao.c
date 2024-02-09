#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "ordenacao.h"

struct ordem{
    int *num;
    int tamanho;
    unsigned long long int comparacoes;
    unsigned long long int trocas;
    clock_t inicio;
    clock_t fim;
};

void inicializa(Ordem *v,int tamanho){
    v->num = (int*)malloc(tamanho * sizeof(int));
    v->tamanho = tamanho;
    v->comparacoes = 0;
    v->trocas = 0;
}

void preencher_radom(Ordem *v){
    int i;
    srand(time(NULL));
    for (i = 0; i < v->tamanho; i++) {
        v->num[i] = rand() % 100000;
    }
}

void bubble_sort(Ordem *v){
    int i, j;
    v->inicio = clock();
    for(i = 0; i < v->tamanho-1; i++){
        for(j = 0; j < v->tamanho-i-1; j++){
            v->comparacoes++;
            if(v->num[j] > v->num[j+1]){
                int temp = v->num[j];
                v->num[j] = v->num[j+1];
                v->num[j+1] = temp;
                v->trocas++;
            }
        }
    }
    v->fim = clock();
}

void selection_sort(Ordem *v){
    int i, j, min_idx;
    v->inicio = clock();
    for(i = 0; i < v->tamanho-1; i++){
        min_idx = i;
        for(j = i+1; j < v->tamanho; j++){
            v->comparacoes++;
            if(v->num[j] < v->num[min_idx]){
                min_idx = j;
            }
        }
        int temp = v->num[min_idx];
        v->num[min_idx] = v->num[i];
        v->num[i] = temp;
        v->trocas++;
    }
    v->fim = clock();
}

void insertion_sort(Ordem *v){
    int i, key, j;
    v->inicio = clock();
    for(i = 1; i < v->tamanho; i++){
        key = v->num[i];
        j = i - 1;
        while(j >= 0 && v->num[j] > key){
            v->num[j+1] = v->num[j];
            j = j - 1;
            v->trocas++;
            v->comparacoes++; 
        }
        v->num[j+1] = key;
    }
    v->fim = clock();
}



void imprimir_estatisticas(Ordem *v, char* nome_algoritmo){
    double temp = ((double)(v->fim - v->inicio))/CLOCKS_PER_SEC;
    printf("%s:\n", nome_algoritmo);
    printf("Comparacoes: %llu\n", v->comparacoes); // Modificado para %llu
    printf("Trocas: %llu\n", v->trocas); // Modificado para %llu
    printf("Tempo: %f segundos\n\n", temp);
}
void imprimir_vetor(Ordem *v) {
	int i;
    printf("Vetor:\n");
    for (i = 0; i < v->tamanho; i++) {
        printf("%d ", v->num[i]);
    }
    printf("\n");
}