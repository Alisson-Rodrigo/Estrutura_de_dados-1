/*
 Crie uma função recursiva que calcule a exponenciação de um valor b por um expoente p sem usar o operador de exponenciação. 
 */


#include <stdio.h>

int exp (int b, int p) {
    if (b == 0){
        return 0;
    }
    if (p == 0){
        return 1;
    }

    return b * exp(b, p - 1 );

}

int exp(int b, int p);
int main () {

    int v1, v2, resultado;
    scanf ("%d", &v1);
    scanf ("%d", &v2);

    resultado = exp(v1, v2);
    printf ("%d", resultado);

    return 0;
}