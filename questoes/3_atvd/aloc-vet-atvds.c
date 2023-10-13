#include <stdio.h>
#include <stdlib.h>

int main () {

    int *vet,n,soma=0,maior,menor;
    float *vet2;
    int x=0;
    int contador=0;
    int i;

    printf ("Digite o tamanho do vetor: ");
    scanf ("%d",&n);

    vet = (int *) malloc (n * sizeof(int));


	if (x != -1){
		menor = maior = x;	
		contador++;
		soma += x;
	}

    for (i=0;i<n;i++) {
        x = vet[i] = rand() % n;
        soma += vet[i];

		if (x > maior)
			maior = x;

		if (x < menor)
			menor = x;
		}
    

    for (i=0;i<n;i++) {
        printf ("%d\n", vet[i]);
    }

    printf ("Soma: %d\n",soma);
    printf ("Media: %.2f\n",(float)soma/n);
    printf ("Maior: %d\n",maior);
    printf ("Menor: %d\n",menor);

    vet2 = (float *) malloc (n * sizeof(float));

    for (i=0;i<n;i++) {
        vet2[i] = (float)(vet[i] - menor) / (maior - menor);
    }

    for (i=0;i<n;i++) {
        printf ("%d: = %.2f\n",vet[i],vet2[i]);
    }

}