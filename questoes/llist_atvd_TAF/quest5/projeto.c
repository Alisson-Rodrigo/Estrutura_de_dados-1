#include <projeto.h>


struct projeto
{
    Equipe *nomes;
    Tarefas *tarefas;
    char nome[50];
    int data_inicio[8];
    int data_final[8];
};

struct  equipe
{
    char nome[100];
};

struct tarefas
{
    char tarefa[50];
};


Projeto *atribuir () {

}