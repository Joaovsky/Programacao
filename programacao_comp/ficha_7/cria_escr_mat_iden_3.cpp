#include <stdio.h>
#include <stdlib.h>
#define N 4 //macro

void criaMatrizIdentidade(int m[][N])
{
	int i, j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		{
			if(i==j)
			{
				m[i][j]= 1;
			}
			else 
			{ 
				m[i][j]= 0;
			}
		}
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

main()
{
	int mat[N][N];
	criaMatrizIdentidade(mat);
	escreveMatriz(mat);
}
