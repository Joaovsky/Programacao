//uma funcao q recebe matriz[m][n] e retorna matriz normalizada, isto e , cada elemento da matriz fica com o quociente entre o elemento original e a norma relativa a linha em q se encontra.
// norma= sqrt(x1^2+x2^2+x3^3+x4^4+...+xn^2)
#include <stdio.h>
#include <math.h>
void normaliza_matriz(float mat[][50], int m, int n)
{
	int  i, j;
	float norma_sqr, norma, v[50];
	//obter norma
	for(i=0;i<m;i++)
	{
		norma_sqr=0;
		for(j=0;j<n;j++)
			{
				norma_sqr+=pow(mat[i][j], 2);
			}
			norma=sqrt(norma_sqr);
			v[i]=norma;
	}
	//matriz normalizada
	printf("Matriz normalizada\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			{
				mat[i][j]/=v[i];
				printf("%f ", mat[i][j]); 
			}
			printf("\n");
	}
}
main()
{
	float mat[50][50];
	int i, j, num=0, l, c;
	printf("Indique o numero linhas\n");
	scanf("%d", &l);
	printf("\nIndique o numero colunas\n");
	scanf("%d", &c);
	printf("Introduza numeros para preencher a matriz\n");
	//cria matriz
	for(i=0;i<l;i++)
		{
			for(j=0;j<c;j++)
				{
					scanf("%f", &mat[i][j]);
				}
				printf("\n");
		}
	
	printf("Matriz original\n");
	//escreve matriz	
	for(i=0;i<l;i++)
		{
			for(j=0;j<c;j++)
				{
					printf("%f ", mat[i][j]);
				}
				printf("\n");
		}	
	normaliza_matriz(mat, l, c);
}
