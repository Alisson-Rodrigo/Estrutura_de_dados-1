#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.c"

int main() {
    Ordem vetor;
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    iniciar(&vetor, tamanho);
    inserir_dados(&vetor);

    // Bubble Sort
    bubble_sort(&vetor);
    exibir_infos(&vetor, "Bubble Sort");

    // Reset vetor
    free(vetor.num);
    iniciar(&vetor, tamanho);
    inserir_dados(&vetor);

    // Selection Sort

    selection_sort(&vetor);
    exibir_infos(&vetor, "Selection Sort");

    // Reset vetor
    free(vetor.num);
    iniciar(&vetor, tamanho);
    inserir_dados(&vetor);

    // Insertion Sort
    insertion_sort(&vetor);
    exibir_infos(&vetor, "Insertion Sort");


    free(vetor.num);
    
    return 0;
}
