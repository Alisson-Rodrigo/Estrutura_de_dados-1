#include <stdio.h>
#include <stdlib.h>

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main () {
    char *n;
    int tam;

    printf ("Qual o tamanho da string que deseja cadastrar? ");
    scanf ("%d", &tam);

    // Limpar o buffer de entrada
    limparBufferEntrada();

    n = (char*) malloc ((tam + 1) * sizeof(char)); // Adicione 1 para o caractere nulo terminador
    
    if (n == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf ("Digite uma frase: ");
    fgets(n, tam + 1, stdin);

    printf ("%s", n);

    free(n); // Liberar a memória alocada

    return 0;
}
