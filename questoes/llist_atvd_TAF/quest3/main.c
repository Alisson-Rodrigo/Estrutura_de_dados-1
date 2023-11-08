#include "livros.c"
#include <stdio.h>
#include <stdlib.h>


int main() {
    int QtdLivros;
    printf("Quantos livros deseja inserir? ");
    scanf("%d", &QtdLivros);

    Livros *livros = atribuir(QtdLivros);

    if (livros == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    imprimir(livros, QtdLivros);
    

    adicionar_palavra_chave(livros, "alisson", QtdLivros);

    imprimir(livros, QtdLivros);


    return 0;
}