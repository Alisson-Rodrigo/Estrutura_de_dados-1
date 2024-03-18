#include <stdio.h>
#include <stdlib.h>

void contar_n(int n) {
    if (n == 0) {
        printf ("%d", n);
        return; // Adicionando a condição de parada
    }
    contar_n(n-1);
    printf ("%d", n);

} 

int main() {
    contar_n(10);
    return 0; // Adicionando uma declaração de retorno para main
}
