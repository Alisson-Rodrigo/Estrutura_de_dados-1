#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* subtrai(const char* s1, const char* s2) {
    int tamanhoS1 = strlen(s1);
    int tamanhoS2 = strlen(s2);
    int i,k;

    char* resultado = (char*)malloc((tamanhoS1 + 1) * sizeof(char));
    if (resultado == NULL) {
        perror("Falha na alocação de memória");
        exit(1);
    }

    int j = 0; 

    for (i = 0; i < tamanhoS1; i++) {
        int encontrado = 0;

        for (k = 0; k < tamanhoS2; k++) {
            if (s1[i] == s2[k]) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            resultado[j] = s1[i];
            j++;
        }
    }

    resultado[j] = '\0'; 
    return resultado;
}

int main() {
    const char* s1 = "abacadef";
    const char* s2 = "ae";

    char* resultado = subtrai(s1, s2);

    printf("Resultado: %s\n", resultado);

    free(resultado);
 
    return 0;
}
