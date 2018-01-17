#include <stdio.h>
#include <stdlib.h>
#define N 4 //macro

void criaMatrizAleatoria(int m[][N])
{
	int i, j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			m[i][j]= 1+rand() % 100;
}

void escreveMatriz(int m[][N])
{
	int i,j;
	for(i=0;i<N;i++)
{
		for(j=0;j<N;j++)
			{
				printf("\t%d", m[i][j]);
			}
			printf("\n");
}
	printf("\n%d\n", &m[0][0]);
	printf("\n%d\n", &m);
}

main()
{
	srand(110); //escreve os elementos da matriz aleat. ao fazer srand(num) alteramos esses valores rand
	int mat[N][N];
	criaMatrizAleatoria(mat);
	escreveMatriz(mat);
}
