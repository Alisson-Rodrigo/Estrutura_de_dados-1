typedef struct 
{
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;

}Aluno;

Aluno *atribuir (int QtdAluno);
void imprimir (Aluno *aluno, int QtdALunos);
float media (Aluno *aluno, int matricula, int QtdAluno);
void aprovacao(float media);
void liberar (Aluno *aluno);

