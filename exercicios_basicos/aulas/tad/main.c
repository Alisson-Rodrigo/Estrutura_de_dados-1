#include <stdio.h>
#include "calculator.h"

int main () {

    printf ("%d\n", soma(1,2));
    printf ("%d\n", subtracao(2,1));
    printf ("%d\n", mult(2,2));
    printf ("%.2f\n", divisao(2,2));
    printf ("%d\n", pow(2,2));

    return 0;
}