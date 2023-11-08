typedef struct  aluno
{
    char nome´[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;

}Aluno;

Aluno atribuir (char nome[50], int matricula, float nota1, float nota2, float nota3);
void imprimir (Aluno aluno);
float media (Aluno aluno);
