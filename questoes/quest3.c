#include <stdio.h>

// Declaração da função para que o main() saiba sobre ela antes de usá-la.
int funcao(int valor1, int valor2);

int main() {
    int x, y, resultado;

    scanf("%d", &x);
    scanf("%d", &y);

    resultado = funcao(x, y);
    printf("%d", resultado);
}

int funcao(int valor1, int valor2) {
    if (valor2 == 0) {
        return 1;
    } else {
        return valor1 * funcao(valor1, valor2 - 1);
    }
}
