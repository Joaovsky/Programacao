#include <stdio.h>
#include <stdlib.h>
#define DIM 10 //O DIM e um define q funciona como uma constante global, nao e definida como uma variavel
void soma_vetor(int v1[], int v2[], int v3[])
{	
	int i;
	for(i=0;i<DIM;i++)
	{
		v3[i]=v1[i]+v2[i];
	}
	for(i=0;i<DIM;i++)
	{
		printf("%d ", v3[i]);
	}						
}
main()
{
	int x, i, v1[DIM], v2[DIM], v3[DIM]; 
	puts("Primeiro Vetor\n");
	for(i=0;i<DIM;i++)
	{
		printf("Indique um num\n");
		scanf("%d", &v1[i]);
	}	
	printf("Vetor:\n");
	for(i=0;i<DIM;i++)
	{
		printf("%d ", v1[i]);
	}
	puts("\nSegundo Vetor\n");
	for(i=0;i<DIM;i++)
	{
		printf("Indique um num\n");
		scanf("%d", &v2[i]);
	}	
	printf("Vetor:\n");
	for(i=0;i<DIM;i++)
	{
		printf("%d ", v2[i]);
	}	
	puts("\nVetor 3 = Vetor 1 + Vetor 2:\n");
	soma_vetor(v1, v2, v3);
}

