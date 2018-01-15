#include <stdio.h>

int fatorial(int n)
{	
	int i, fat=1;
	
	for(i=1; i<=n; i++)
	{
		fat = fat*i;
	}
	return fat;
}

main()
{
	int n, fat=1;
	printf("Indique um num inteiro nao negativo pra saber o seu fatorial\n");
	scanf("%d", &n);
	fat=fatorial(n);
	printf("O seu fatorial e %d", fat);	
}
