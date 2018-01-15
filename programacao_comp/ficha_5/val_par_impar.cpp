#include <stdio.h>

int par(int x)
{
	if(x % 2 == 0)
	{
			return 1;
	}
	else
	{
			return 0;
	}
}

main()
{
	int n, bool_n;
	printf("Num:");
	scanf("%d", &n);
	bool_n = par(n);
	{
	if(bool_n ==1)
	{
		printf("Par");
	}
	else
	{
		printf("Impar");
	}						//So aceita num inteiros
	}
}
