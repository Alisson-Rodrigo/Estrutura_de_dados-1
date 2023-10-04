#include <stdio.h>

int main() {
    
    int num[5];
    int i = 0;

    while (i < 5) { // Correção: Use parênteses em torno de i < 5
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        i++;
    }

    // Resto do seu código aqui...

    return 0;
}
