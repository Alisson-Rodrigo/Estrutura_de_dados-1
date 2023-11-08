#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>

Aluno atribuir () {
    Aluno *aln = (Aluno*) malloc (sizeof(Aluno));

    if (aln == NULL) {
        return NULL;
    }

    printf ("Digite o nome do aluno: ");
    scanf ("%s", &aln->nome);





}
