#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int x = 0, maior, menor, soma = 0, contador = 0;

	printf("informe um valor \n");
	scanf("%d", &x);
	
	//iniciar maior e menor  com valor de X
	if (x != -1){
		menor = maior = x;	
		contador++;
		soma += x;
	}

	while(x != -1){
		printf("informe um valor \n");
		scanf("%d", &x);
		//somatorio dos valores
		if (x != -1){
			soma += x;
			//incrementando o contador
			contador++;
			if (x > maior)
				maior = x;

			if (x < menor)
			menor = x;
		}
	}

	if (x != -1 || contador > 0){
		printf("Media%.2f \n", (float)soma / contador);
		printf("Soma %d Maior %d Menor %d ", soma, maior, menor);
	}

	return 0;
}

