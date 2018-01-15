#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int ocorrencias (int v[], int o_num)
{
	int i, cont=0;
	for(i=0;i<DIM;i++)
	{
		if(v[i] == o_num)
		cont++;
	}
	return cont;
}

void cria_vetor(int v[])
{
	int i;
	puts("Crie um vetor:\n");
	for(i=0;i<DIM;i++)
	{
		printf("Indique um num\n");
		scanf("%d", &v[i]);
	}	
	printf("Vetor:\n");
	for(i=0;i<DIM;i++)
	{
		printf("%d ", v[i]);
	}
}


main()
{
	int oc, o_num, v[DIM];
	
	cria_vetor(v);
	printf("\nIndique o numero que pretende saber quantas vezes ocorre num vetor\n");
	scanf("%d", &o_num);
	
	oc = ocorrencias (v, o_num);
	printf("ocorrencas de %d = %d\n",o_num, oc);
}

