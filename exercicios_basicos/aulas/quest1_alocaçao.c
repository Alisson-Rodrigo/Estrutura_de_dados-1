#include <stdio.h>
#include <stdlib.h>

int main() {
    char *mensagem;
    int tamanho, i;

    printf("Digite o tamanho da mensagem: ");
    scanf("%d", &tamanho);

    while (getchar() != '\n');

    mensagem = (char *)malloc((tamanho + 1) * sizeof(char)); 

    if (mensagem == NULL) {
        printf("Erro na alocação\n");
        return 1;
    }

    printf("Digite a mensagem: ");
    fgets(mensagem, tamanho + 1, stdin); 

    printf("Você digitou: %s", mensagem); 

    free(mensagem); 

    return 0;
}
