#include <stdio.h>
#include <stdlib.h>
#define N 4

void criaMatrizAleatoria(int m[][N])
{
	int i, j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			m[i][j]= 1+rand() % 100;
}
main()
{
	int mat[N][N];
	criaMatrizAleatoria(mat);
}
