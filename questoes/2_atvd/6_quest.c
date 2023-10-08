#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char subtrai (char *p1,char *p2);
int main () {
    char s1,s2;
    char *palavra1,*palavra2,resultado;

    scanf ("%s",&s1);
    scanf ("%s",&s2);

    palavra1 = (char *) malloc(strlen(s1) * sizeof(char));
    palavra2 = (char *) malloc(strlen(s2) * sizeof(char));

    if (palavra1 == NULL || palavra2 == NULL) {
        printf ("Erro na alocação\n");
        return 1;
    }

    resultado = subtrai(palavra1,palavra2);

    printf ("%s\n",resultado);

}

char subtrai (char *p1,char *p2) {
    int i,j;
    char *resultado;

    resultado = (char *) malloc(strlen(p1) * sizeof(char));

    for (i=0;i<strlen(p1);i++) {
        for (j=0;j<strlen(p2);j++) {
            if (p1[i] == p2[j]) {
                resultado[i] = p1[i];
            }
        }
    }

    return resultado;

}