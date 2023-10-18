#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int fatorial(int n);
int main() {
    int resultado;
    resultado = fatorial(10);
    printf ("O fatorial de 5 é %d\n", resultado);

    return 0;
}
