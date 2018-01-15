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
}

void transposta(int m1[N][N], int m2[N][N])
{
	int i, j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			m2[i][j] = m1[j][i];
		}
	}
	
}

main()
{
 	srand(104);//escreve os elementos da matriz aleat. ao fazer srand(num) alteramos esses valores rand
	int mat[N][N], n, mat2[N][N]; //declarar o tipo da matriz;
	criaMatrizAleatoria(mat);
	printf("Matriz original: A\n");
	escreveMatriz(mat);
	transposta(mat, mat2);
	printf("Matriz transposta: A^t\n");
	escreveMatriz(mat2);
}
