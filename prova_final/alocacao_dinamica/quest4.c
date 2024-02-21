#include <stdio.h>
#include <stdlib.h>
float *Alocar_vetor_real (int n) {
float *v; /* ponteiro para o vetor */
/* verifica parametros recebidos */
if (n < 1) {
printf ("** Erro: Parametro invalido **\n");
return (NULL);
}
/* aloca o vetor */
v = (float *)calloc (n, sizeof(float));
if (v == NULL) {
printf ("** Erro: Memoria Insuficiente **");
return (NULL);
}
/* retorna o ponteiro para o vetor */
return (v);
}  