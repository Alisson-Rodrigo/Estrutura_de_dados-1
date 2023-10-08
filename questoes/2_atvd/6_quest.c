#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* subtrai(char *p1, char *p2);

int main() {
    char *s1, *s2;
    char *palavra1, *palavra2, *resultado;

    s1 = (char *)malloc(100 * sizeof(char));  // Suponha um tamanho máximo para as strings
    s2 = (char *)malloc(100 * sizeof(char));  // Suponha um tamanho máximo para as strings

    if (s1 == NULL || s2 == NULL) {
        printf("Erro na alocação\n");
        return 1;
    }

    scanf("%s", s1);
    scanf("%s", s2);

    palavra1 = (char *)malloc((strlen(s1) + 1) * sizeof(char));  // +1 para o caractere nulo
    palavra2 = (char *)malloc((strlen(s2) + 1) * sizeof(char));  // +1 para o caractere nulo

    if (palavra1 == NULL || palavra2 == NULL) {
        printf("Erro na alocação\n");
        return 1;
    }

    strcpy(palavra1, s1);
    strcpy(palavra2, s2);

    resultado = subtrai(palavra1, palavra2);

    printf("%s\n", resultado);

    free(s1);
    free(s2);
    free(palavra1);
    free(palavra2);
    free(resultado);

    return 0;
}

char* subtrai(char *p1, char *p2) {
    int i, j, k = 0;
    char *resultado;

    resultado = (char *)malloc(strlen(p1) * sizeof(char));

    for (i = 0; i < strlen(p1); i++) {
        int encontrou = 0;
        for (j = 0; j < strlen(p2); j++) {
            if (p1[i] == p2[j]) {
                encontrou = 1;
                break;
            }
        }
        if (!encontrou) {
            resultado[k++] = p1[i];
        }
    }

    resultado[k] = '\0';  // Adiciona o caractere nulo no final da string resultante

    return resultado;
}
