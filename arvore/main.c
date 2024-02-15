#include <stdio.h>
#include "arvore.c"

int main() {
    Arvore *arvore = abp_cria_vazia();

    arvore = abp_inserir(arvore, 10);
    arvore = abp_inserir(arvore, 5);
    arvore = abp_inserir(arvore, 15);
    arvore = abp_inserir(arvore, 3);
    arvore = abp_inserir(arvore, 7);
    arvore = abp_inserir(arvore, 12);
    arvore = abp_inserir(arvore, 17);

    printf("Arvore em ordem:\n");
    abp_mostrar_em_ordem(arvore);
    printf("\n");

    int consulta = 12;
    if (abp_consultar(arvore, consulta)) {
        printf("%d esta na arvore.\n", consulta);
    } else {
        printf("%d nao esta na arvore.\n", consulta);
    }

    int remover = 5;
    printf("Removendo %d da arvore...\n", remover);
    arvore = abp_remover(arvore, remover);

    printf("\nArvore em ordem apos remocao de %d:\n", remover);
    abp_mostrar_em_ordem(arvore);
    printf("\n");

    arvore = abp_desalocar(arvore);

    return 0;
}
