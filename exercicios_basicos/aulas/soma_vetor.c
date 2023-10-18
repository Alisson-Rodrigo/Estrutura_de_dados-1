#include <stdio.h>

int soma(int *a, int b) {
    if (b == 0) {
        return 0;
    }

    return a[b - 1] + soma(a, b - 1);
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int resultado = soma(vetor, 5);
    printf("Soma: %d\n", resultado);
    return 0;
}
