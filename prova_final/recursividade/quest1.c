#include <stdio.h>
#include <stdlib.h>

void contar_n(int n, int aux) {
    if (aux <= n) {
        printf ("%d", aux);
        aux++;
        return contar_n(n, aux);
    }
} 

int main() {
    contar_n(10,1);
}