#include "aluno.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    Aluno *alunos = NULL;
    int QtdAlunos = 0, numAlunos, opcao, matricula;
    float media_aluno;

    do {
        printf("\n-------- Menu --------\n");
        printf("1. Adicionar Aluno\n");
        printf("2. Imprimir Alunos\n");
        printf("3. Calcular Média de Aluno\n");
        printf("4. Verificar Aprovação\n");
        printf("5. Sair\n");
        printf("----------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Quantos alunos deseja adicionar? ");
                scanf("%d", &numAlunos);
                alunos = atribuir(alunos, numAlunos, QtdAlunos);
                QtdAlunos += numAlunos;
                break;
            case 2:
                printf("\nImprimir todos os alunos:\n");
                imprimir(alunos, QtdAlunos);
                break;
            case 3:
                printf("\nCalcular média de um aluno:\n");
                printf("Digite a matrícula do aluno: ");
                scanf("%d", &matricula);
                media_aluno = media(alunos, matricula, QtdAlunos);
                if (media_aluno != -1.0) {
                    printf("A média do aluno é: %.2f\n", media_aluno);
                } else {
                    printf("Aluno não encontrado.\n");
                }
                break;
            case 4:
                printf("\nVerificar aprovação de um aluno:\n");
                printf("Digite a matrícula do aluno: ");
                scanf("%d", &matricula);
                media_aluno = media(alunos, matricula, QtdAlunos);
                if (media_aluno != -1.0) {
                    aprovacao(media_aluno);
                } else {
                    printf("Aluno não encontrado.\n");
                }
                break;
            case 5:
                liberar(alunos);
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}
