#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nome;
    int matricula;
    int idade;
} Pessoa;

typedef struct {
    Pessoa pessoa;
    float salario;
} Funcionario;

typedef struct {
    Funcionario *funcionarios;
    int numFuncionarios;
} Departamento;

char* lerString() {
    char buffer[1000];
    scanf("%999[^\n]", buffer);
    getchar(); 
    return strdup(buffer); 
}

Departamento criarDepartamento(int numFuncionarios) {
    Departamento depto;
    depto.numFuncionarios = numFuncionarios;
    depto.funcionarios = (Funcionario*)malloc(numFuncionarios * sizeof(Funcionario));
    if (depto.funcionarios == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    return depto;
}

void preencherPessoa(Pessoa *pessoa) {
    printf("Digite o nome: ");
    pessoa->nome = lerString();
    printf("Digite a matrícula: ");
    scanf("%d", &pessoa->matricula);
    printf("Digite a idade: ");
    scanf("%d", &pessoa->idade);
}

void preencherFuncionario(Funcionario *funcionario) {
    preencherPessoa(&funcionario->pessoa);
    printf("Digite o salário: ");
    scanf("%f", &funcionario->salario);
}

void preencherDepartamento(Departamento *depto) {
    int i;
    printf("Quantos funcionários possui o departamento? ");
    scanf("%d", &depto->numFuncionarios);
    depto->funcionarios = (Funcionario*)malloc(depto->numFuncionarios * sizeof(Funcionario));
    if (depto->funcionarios == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    for (i = 0; i < depto->numFuncionarios; i++) {
        printf("Preenchendo informações do funcionário %d:\n", i + 1);
        preencherFuncionario(&depto->funcionarios[i]);
    }
}

void liberarDepartamento(Departamento *depto) {
    int i;
    for (i = 0; i < depto->numFuncionarios; i++) {
        free(depto->funcionarios[i].pessoa.nome);
    }
    free(depto->funcionarios);
}

int main() {
    int n, i;
    printf("Quantos departamentos deseja cadastrar? ");
    scanf("%d", &n);

    Departamento *departamentos = (Departamento*)malloc(n * sizeof(Departamento));
    if (departamentos == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nPreenchendo informações do departamento %d:\n", i + 1);
        preencherDepartamento(&departamentos[i]);
    }

    if (n >= 2 && departamentos[1].numFuncionarios >= 1) {
        printf("\nNome do primeiro funcionário do segundo departamento: %s\n", departamentos[1].funcionarios[0].pessoa.nome);
    }

    for (i = 0; i < n; i++) {
        liberarDepartamento(&departamentos[i]);
    }
    free(departamentos);

    return 0;
}
