#include <stdio.h>
#include <stdlib.h>


void insert(int vetor[],int tam){
    int i, j, aux;
    for (i=1;i<tam;i++) {
        aux = vetor[i];
        j = i - 1;
        while (j >= 0 && aux < vetor[j]) {
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = aux;
    }
}

























void insert(int vetor[],int tam){
    int i, j, aux;
    for (i=1;i<tam;i++) {
    aux = vetor[i];
    j = i - 1;
    while (j >= 0 && aux < vetor[j])
    {
        vetor[j+!] = vetor[j];
        j--; 
    }
    vetor[j+1] = aux;
    }

}

int main () {
    int vetor_insert[5] = {2,3,4,1,5};
    insert(vetor_insert, 5);
}