#include <stdio.h>

void maior_menor_val(int *M, int *m)
{
	int i, n;
	
	for(i=0;i<10;i++)
	{
		printf("Indique um num\n");
		scanf("%d", &n);
		if(i==0)
		{
			*M=n;
			*m=n;
		}	
		
		if(i!=0)
		{
			if(n>*M)
				*M=n;
			if(n<*m)
				*m=n;		
		}
	}
	
}


main()
{
	int M, m;
	printf("O programa retornara o maior e o menor de 10 valores indicados por si\n");
	maior_menor_val(&M, &m);
	printf("O maior valor e %d e o menor valor e %d", M, m);
}
