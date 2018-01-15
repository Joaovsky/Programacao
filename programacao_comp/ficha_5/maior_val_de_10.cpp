#include <stdio.h>

int maior_val(int n)
{
	int i, max;
	
	for(i=0;i<10;i++)
	{
		printf("Indique um num\n");
		scanf("%d", &n);
		if(i==0)
			max=n;
		
		if(i!=0)
		{
			if(n>max)
				max=n;	
		}
	}
	return max;
}

main()
{
	int n, max=0;
	printf("O programa retornara o maior de 10 valores indicados por si\n");
	max = maior_val(n);
	printf("O maior valor e: %d ", max);
}
