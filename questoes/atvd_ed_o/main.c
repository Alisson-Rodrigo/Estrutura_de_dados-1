#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.c"

int main() {
    Ordem vetor;
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    inicializa(&vetor, tamanho);
    preencher_radom(&vetor);

    // Bubble Sort
    bubble_sort(&vetor);
    imprimir_estatisticas(&vetor, "Bubble Sort");

    // Reset vetor
    free(vetor.num);
    inicializa(&vetor, tamanho);
    preencher_radom(&vetor);

    // Selection Sort
    selection_sort(&vetor);
    imprimir_estatisticas(&vetor, "Selection Sort");

    // Reset vetor
    free(vetor.num);
    inicializa(&vetor, tamanho);
    preencher_radom(&vetor);

    // Insertion Sort
    insertion_sort(&vetor);
    imprimir_estatisticas(&vetor, "Insertion Sort");


    free(vetor.num);
    
    return 0;
}
