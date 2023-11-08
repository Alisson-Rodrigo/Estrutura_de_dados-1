typedef struct aluno Aluno;

Aluno *atribuir (int QtdAluno);
void imprimir (Aluno *aluno, int QtdALunos);
float media (Aluno *aluno, int matricula, int QtdAluno);
void aprovacao(float media);
void liberar (Aluno *aluno);

