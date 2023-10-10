#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
    char *nome;
    int idade;
    int matricula;
}Pessoa;

typedef struct func {
    Pessoa *pessoa;
    float salario;
}Funcionario;

typedef struct dep {
    Funcionario *funcionario;
}Departamento;


void cadastrarDep (Departamento *dep) {

}


int main () {

    Pessoa *pessoa = (Pessoa *)malloc(sizeof(Pessoa));
    if (pessoa == NULL) {
        printf("Erro na alocação\n");
        return 1;
    }

    Funcionario *funcionario = (Funcionario *)malloc(sizeof(Funcionario));
    if (funcionario == NULL) {
        printf("Erro na alocação\n");
        return 1;
    }

    Departamento *departamento = (Departamento *)malloc(sizeof(Departamento));
    if (departamento == NULL) {
        printf("Erro na alocação\n");
        return 1;
    }

    scanf ("%s", pessoa->nome);
    scanf ("%d", &pessoa->idade);
    scanf ("%d", &pessoa->matricula);

    scanf ("%f", &funcionario->salario);

    departamento->funcionario = funcionario;
    departamento->funcionario->pessoa = pessoa;


    return 0;
}