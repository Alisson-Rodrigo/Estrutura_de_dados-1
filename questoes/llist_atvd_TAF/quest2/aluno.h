typedef struct 
{
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;

}Aluno;

Aluno atribuir (int QtdAluno);
void imprimir (Aluno *aluno);
float media (Aluno *aluno, int matricula, int QtdAluno);
void aprovação(float media);
void liberar (Aluno *aluno);

