#include <stdio.h>
#define DIM 10

int num_encontrado(int *v)
{
	int i, num;
	
	for(i=0;i<DIM;i++)
	{
		printf("\nNum %d\n", i+1);
		scanf("%d", &v[i]);
	}
	
	printf("Indique um num e o PC retornara verdadeiro caso exista ou falso caso contrario\n");
	scanf("%d", &num);
	
	for(i=0;i<DIM;i++)
	{
		if(v[i]==num)
		{
			return 1;
		} 
	}
}

main()
{
	int v[DIM], valor_log=0;
	valor_log=num_encontrado(v);
	if(valor_log ==1)
		printf("Verdadeiro");
	else
		printf("Falso");
}
