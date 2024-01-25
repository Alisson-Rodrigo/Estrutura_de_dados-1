#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"

int main() {
    Pilha* minhaPilha = pilha_cria(); // Cria uma nova pilha

    // Insere elementos na pilha
    pilha_push(minhaPilha, 10.5);
    pilha_push(minhaPilha, 20.3);
    pilha_push(minhaPilha, 5.8);

    // Mostra o conteúdo da pilha
    printf("Conteúdo da pilha:\n");
    mostrar_pilha(minhaPilha);

    // Remove um elemento da pilha
    pilha_pop(minhaPilha);
    pilha_pop(minhaPilha);

    // Mostra o conteúdo da pilha após a remoção
    printf("\nConteúdo da pilha após a remoção:\n");
    mostrar_pilha(minhaPilha);

    // Libera a memória alocada para a pilha
    free(minhaPilha);

    return 0;
}
