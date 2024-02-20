#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if (n > 1) {
        return n * fatorial(n-1);
    }
} 

int main() {
    int resultado;
    resultado = fatorial(5);
    printf ("%d", resultado);
}