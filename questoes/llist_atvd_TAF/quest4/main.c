#include "contatos.c"
#include <stdlib.h>
#include <stdio.h>

int main() {
    int QtdContatos, numero;

    printf("Digite a quantidade de contatos: ");
    scanf("%d", &QtdContatos);

    Contato *contatos = atribuir(QtdContatos);

    imprimir(contatos, QtdContatos);

    printf("Digite o numero do contato para adicionar etiquetas: ");
    scanf("%d", &numero);

    adicionar_etiqueta(contatos, QtdContatos, numero);

    imprimir(contatos, QtdContatos);


    return 0;
}
