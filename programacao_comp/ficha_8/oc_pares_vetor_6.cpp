#include <stdio.h>
#define DIM 10

int oc_pares_em_vetor(int *v)
{
	int i, c=0;
	
	for(i=0;i<DIM;i++)
		{
			printf("\nNum %d\n", i+1);
			scanf("%d", &v[i]);
			if(v[i] % 2 == 0)
				{
					c++;
				}
		}
	return c;
}

main()
{
	int v[DIM], oc;
	printf("Indique 10 num e o PC indicara quantos num pares escreveu");
	oc=oc_pares_em_vetor(v);
	printf("\nNum ocorrencias %d\n", oc);	
}
