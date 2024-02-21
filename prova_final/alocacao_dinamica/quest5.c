#include <stdio.h>
#include <stdlib.h>

int alocar_matriz (int **matriz, int l, int c) {
    int i;
    matriz = (int**) malloc (l * sizeof(int*));
    if (matriz == NULL) {
        printf("Erro alocacao");
        return 1;
    }

    for (i=0;i<l;i++) {
        matriz[i] = (int*) malloc (c * sizeof(int*));
        if (matriz[i] == NULL) {
            printf ("Erro na alocacao");
            return 1;
        }
    }
    return 0;
}

int main() {
    int **matrix;
    int rows = 3;
    int columns = 4;

    // Allocate memory for the matrix
    alocar_matriz(matrix, rows, columns);
    printf ("Foi alocado certo");

    // Now you can use the 'matrix' variable initialized by the function

    return 0;
}


