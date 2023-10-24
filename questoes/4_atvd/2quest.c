/* *
Escreva uma função recursiva que escreva na tela todos os números inteiros positivos desde um valor K informado pelo usuário até 0.

/*/

#include <stdio.h>

int contador (int k) {
    if (k < 0) {
        return 0;
    }
    printf ("%d \n", k);

    return contador (k - 1);
    
}

int contador(int k);
int main () {
    int v1, v2;

    printf ("Digite um numero: ");
    scanf ("%d", &v1);

    contador(v1);



    return 0;
}