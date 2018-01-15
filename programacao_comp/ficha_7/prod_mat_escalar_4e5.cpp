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

void multiplicaMatriz(int m[][N], int n, int m2[][N])
{
	int i, j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			//m[i][j] = n*m[i][j];
			m2[i][j] =  n*m[i][j];
		}
	}
	
}

main()
{
 //escreve os elementos da matriz aleat. ao fazer srand(num) alteramos esses valores rand
	int mat[N][N], n, mat2[N][N]; //declarar o tipo da matriz;
	criaMatrizAleatoria(mat);
	printf("Matriz original: A\n");
	escreveMatriz(mat);
	printf("Indique um escalar que multiplicara a matriz: x\n");
	scanf("%d", &n); //o scanf nao pode ter /n
	multiplicaMatriz(mat, n, mat2);
	printf("Matriz resultante: B = Ax\n");
	escreveMatriz(mat2);
}
