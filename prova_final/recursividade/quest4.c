#include <stdio.h>
#include <stdlib.h>

int calcular_soma_Vetor(int *n, int tamanho) {
    if (n == NULL || tamanho == 0) {
        return 0;
    }
    return n[tamanho-1] + calcular_soma_Vetor(n, tamanho-1);


}

int main () {
    int *vetor, i, resultado;
    int tamanho;
    printf ("Qual o tamanho do vetor? ");
    scanf("%d", &tamanho);

    vetor = (int*) malloc (tamanho * sizeof(int));

   if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; // Saia do programa com código de erro
    }   

    for (i=0;i<tamanho;i++) {
        vetor[i] = i+1;
    }

    for (i=0;i<tamanho;i++) {
        printf ("%d", vetor[i]);
    }

    resultado = calcular_soma_Vetor(vetor, tamanho);
    printf ("\n%d", resultado);

}