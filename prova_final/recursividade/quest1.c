#include <stdio.h>
#include <stdlib.h>

void contar_n(int n) {
    if (n == 0) {
        printf ("%d", n);
    }
    contar_n(n-1);
    printf ("%d", n);


} 

int main() {
    contar_n(10);
}