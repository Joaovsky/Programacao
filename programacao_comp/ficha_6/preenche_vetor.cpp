#include <stdio.h>
#include <stdlib.h>
#define DIM 10 // temos que definir a dim do vetor.
//void vetor(int v1[], int v2[], int v3[], int n)

main()
{
	int i;
	float v[DIM];

	for(i=0;i<DIM;i++)
	{
		printf("Indique um num\n");
		scanf("%f", &v[i]);
	}	
		printf("Vetor:\n");
		
	for(i=0;i<DIM;i++)
	{
	printf("%f ", v[i]);
	}
}


