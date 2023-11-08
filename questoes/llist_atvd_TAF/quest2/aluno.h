typedef struct  aluno
{
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
    float nota3;

}Aluno;

Aluno atribuir ();
void imprimir (Aluno aluno);
float media (Aluno aluno, float nota1, float nota2, float nota3);
bool aprovação(float media);
void liberar (Aluno aluno);

