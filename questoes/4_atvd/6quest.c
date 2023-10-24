/*
Escreva uma função que faça a procura sequencial de um valor passado por parâmetro num vetor também passado por parâmetro.
*/

#include <stdio.h>
#include <stdlib.h>

int buscador (int *k, int p, int c) {
    
    if (k = NULL || p == 0 || c == 0) {
        return 0;
    }

    if (k[c] == p) {
        return c;
    }
    
    return buscador (k, p, c - 1);
}

int main () {

    int *k,i,busca,cont=0;
    int resultado;
    k = (int *) malloc(10*sizeof(int));

    if (k == NULL) {
        printf ("Falha na alocaçao");
        exit(0);
    }

    for (i=0;i<5;i++) {
        printf ("Digite um numero: ");
        scanf("%d", &k[i]);
        cont+=1;
    }

    printf ("Digite um valor para buscar no vetor: ");
    scanf ("%d", &busca);

    resultado = buscador(k,busca,cont);
    printf ("O valor %d foi encontrado na posicao %d do vetor.", busca, resultado);
    


    return 0;
}