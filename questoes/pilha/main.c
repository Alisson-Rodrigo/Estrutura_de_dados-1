#include <stdio.h>
#include <stdlib.h>

#include "pilha.c"

int main()
{
	int num;
	Pilha *pilha_inversa = pilha_cria();
	
	//verificar o tamanho do vetor
	printf("Quantos elementos voce deseja armazenar na pilha? \n");
	scanf("%d", &num);
	
	//alocar o vetor 
	float *vet = (float *) calloc(num, sizeof(float));
	
	//preencher os dados no vetor
	for (int i = 0; i < num; ++i)
		vet[i] = rand() % 100 + 1;
	
	// inserir elementos do vetor na pilha
	for (int i = 0; i < num; ++i)
		pilha_push(pilha_inversa, vet[i]);

	printf("mostrar os dados originais ");
	for (int i = 0; i < num; ++i)
		printf("%.0f ", vet[i]);
	
	//mostar os dados da pilha
	printf("\n mostrar os dados da pilha ");
	mostrar_pilha(pilha_inversa);

	//liberar memoria
	pilha_libera(pilha_inversa);

	return 0;
}