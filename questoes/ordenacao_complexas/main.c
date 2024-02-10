#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.c"

int main() {
    Ordenacao dados_quick, dados_merge;
    int tamanho = 1000000; // Tamanho do vetor

    inicializa(&dados_quick, tamanho);
    inicializa(&dados_merge, tamanho);

    preencher_random(&dados_quick);
    preencher_random(&dados_merge);

    printf("Tempo e memoria utilizada pelo Quick Sort:\n");
    imprimirTempoETamanhoMemoria(&dados_quick);

    printf("\nTempo e memoria utilizada pelo Merge Sort:\n");
    imprimirTempoETamanhoMemoriaMergeSort(&dados_merge);
 
    free(dados_quick.num);
    free(dados_merge.num);

    return 0;
}





