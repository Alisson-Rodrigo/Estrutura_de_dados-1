#include <stdio.h>
#include <stdlib.h>

int main() {
    char *mensagem;
    int tamanho, i;

    printf("Digite o tamanho da mensagem: ");
    scanf("%d", &tamanho);

    // Limpa o buffer de entrada
    while (getchar() != '\n');

    mensagem = (char *)malloc((tamanho + 1) * sizeof(char)); // +1 para o caractere nulo

    if (mensagem == NULL) {
        printf("Erro na alocação\n");
        return 1;
    }

    printf("Digite a mensagem: ");
    fgets(mensagem, tamanho + 1, stdin); // Lê a mensagem, incluindo o caractere de nova linha

    printf("Você digitou: %s", mensagem); // Imprime a mensagem como uma string

    free(mensagem); // Libera a memória alocada

    return 0;
}
