#include "contatos.c"
#include <stdlib.h>
#include <stdio.h>

int main() {
    int QtdContatos;

    printf("Digite a quantidade de contatos: ");
    scanf("%d", &QtdContatos);

    Contato *listaContatos = atribuir(QtdContatos);
    imprimir(listaContatos, QtdContatos);

    return 0;
}
