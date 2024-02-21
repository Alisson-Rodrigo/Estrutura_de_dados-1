#include <stdio.h>

int imprimirDigitos(int num) {
    if (num < 10) {
        return num;
    }

    return  num % 10 + imprimirDigitos(num/10);

}

int main() {
    int numero,resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Os digitos do numero sao:\n");
    resultado = imprimirDigitos(numero);
    printf ("%d", resultado);

    return 0;
}
