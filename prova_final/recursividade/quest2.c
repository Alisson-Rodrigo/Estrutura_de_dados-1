#include <stdio.h>
#include <stdlib.h>

int multiplicacao_num(int m, int n) {
    if (n == 0) {
        return n;
    }

    return m + multiplicacao_num(m, n-1);
} 

int main() {
    int resultado;
    resultado = multiplicacao_num(5,5);
    printf ("%d", resultado);
}