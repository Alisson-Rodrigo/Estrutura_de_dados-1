#include "aluno.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int QtdAluno;
    int matricula;



    printf("Quantos alunos deseja inserir? ");
    scanf("%d", &QtdAluno);

    Aluno *alunos = atribuir(QtdAluno);

    if (alunos == NULL) {
        printf("Erro na alocação de memoria\n");
        return 1;
    }

    imprimir(alunos, QtdAluno);

    printf("Digite a matrícula do aluno para calcular a media: ");
    scanf("%d", &matricula);

    float avg = media(alunos, matricula, QtdAluno);

    if (avg != -1.0) {
        printf("A média do aluno e: %.2f\n", avg);
        aprovacao(avg);
    } else {
        printf("Matricula nao encontrada\n");
    }

    liberar(alunos);

    return 0;
}
