#include <stdio.h>

int inverteNumero(int num, int resultado) {
    if (num == 0) {
        return resultado;
    } else {
        int digito = num % 10; 
        resultado = resultado * 10 + digito;  
        return inverteNumero(num / 10, resultado);  
    }
}

int main() {
    int numero, resultado;
    
    scanf("%d", &numero);
    
    resultado = inverteNumero(numero, 0);
    printf ("%d", resultado);
        
    return 0;
}
