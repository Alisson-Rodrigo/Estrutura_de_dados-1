/*  
Escreva uma função recursiva que calcule os juros compostos de um valor. Para isso o programa deverá ler um valor inicial, o número de meses e a taxa de juros ao mês, e passar estes valores à função como parâmetros. 
*/
#include <stdio.h>
int juros_compostos (double v, int m, double taxa) {
    if (m == 0) {
        return v;
    }
    double calculo = v * (taxa / 100.0);
    v += calculo;
    return juros_compostos (v, m -1, taxa); 
}
int main () {
    double valor, taxa, resultado;
    int meses;

    printf ("Digite o valor: ");
    scanf ("%lf", &valor);
    printf ("Digite os meses: ");
    scanf ("%d", &meses);
    printf("Digite a taxa: ");
    scanf ("%lf", &taxa);
    resultado = juros_compostos(valor,meses,taxa);
    printf ("%.2lf", resultado);
    return 0;
}