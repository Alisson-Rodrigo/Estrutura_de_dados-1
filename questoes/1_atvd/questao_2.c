#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int m = 3, n = 3, x;
	int matriz[m][n];

	scanf("%d", &x);

	int ocorrencias[x];

	for (int i = 0; i < x; ++i)
		ocorrencias[i] = 0;

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			matriz[i][j] = rand() % x;

	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			ocorrencias[matriz[i][j]]++;

	for (int i = 0; i < m; ++i){
		for (int j = 0; j < n; ++j){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < x; ++i){
		if (ocorrencias[i] > 0)
			printf("Posicao: %d ocorrencias: %d ", i, ocorrencias[i]);
	}
	
	return 0;
}

