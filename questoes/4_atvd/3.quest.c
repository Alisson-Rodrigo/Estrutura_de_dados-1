/*
Escreva um algoritmo recursivo que escreva na tela a soma de todos os números inteiros positivos de K até 0.
*/

#include <stdio.h>

int contador (int k) {
    if (k < 0) {
        return 0;
    }

    return k + contador (k - 1);
    
}

int contador(int k);
int main () {
    int v1, resultado;

    printf ("Digite um numero: ");
    scanf ("%d", &v1);
    resultado = contador(v1);
    printf ("%d", resultado);
    return 0;
}