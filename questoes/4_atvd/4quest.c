/*
Escreva uma função recursiva que calcule a soma de todos os números compreendidos entre os valores A e B passados por parâmetro.
*/

#include <stdio.h>

int contador (int k, int p) {
    if (k < 0) {
        return 0;
    }

    if ( p > k ) {
        return 0;
    }

    if ( k > p ) {
        return k + contador(k - 1, p );
    }
}

int contador(int k, int p);
int main () {
    int v1, v2, resultado;

    printf ("Digite um numero: ");
    scanf ("%d", &v1);
    printf ("Digite um numero: ");
    scanf ("%d", &v2);

    resultado = contador(v1, v2);
    printf ("%d", resultado);
    return 0;
}