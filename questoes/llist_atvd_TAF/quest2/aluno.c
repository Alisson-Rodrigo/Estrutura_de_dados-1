#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;

};

Aluno *atribuir (int QtdAluno) {
    Aluno *aln = (Aluno*) malloc ( QtdAluno * sizeof(Aluno));
    int i;

    for (i=0;i<QtdAluno;i++) {
        printf ("Digite o nome do aluno: ");
        scanf ("%s", aln[i].nome);
        printf ("Qual a sua matricula");
        scanf ("%d", &aln[i].matricula);
        printf("Digite a sua primeira nota");
        scanf ("%f", &aln[i].nota1);
        printf ("Digite sua segunda nota");
        scanf ("%f", &aln[i].nota2);
        printf ("Digite sua terceira nota");
        scanf ("%f", &aln[i].nota3);
    }

    return aln;
}

void imprimir(Aluno *aluno, int QtdAluno) {
    int i;
    for (i = 0; i < QtdAluno; i++) {
        printf("Nome do aluno: %s\n", aluno[i].nome);
        printf("A matrícula do aluno é: %d\n", aluno[i].matricula);
        printf("A primeira nota do aluno é: %f\n", aluno[i].nota1);
        printf("A segunda nota do aluno é: %f\n", aluno[i].nota2);
        printf("A terceira nota do aluno é: %f\n", aluno[i].nota3);
    }
}


float media(Aluno *aluno, int matricula, int QtdAluno) {
    int i;

    for (i = 0; i < QtdAluno; i++) {
        if (matricula == aluno[i].matricula) {
            return (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3.0;
        }
    }

    return -1.0;
}


void aprovacao (float media) {
    if (media <= 6) {
        printf ("O aluno foi reprovado");
    }
    else {
        printf ("Ele foi aprovado");
    }

}

void liberar (Aluno *aluno) {
    free (aluno);
}