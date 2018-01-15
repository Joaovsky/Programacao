#include <stdio.h>

int positivo(int x)
{
	int a=0;
	if(x!=0)
	{
		a=x>0;
	}
	return a;
}

main()
{
	int n, bool_n;
	printf("Num:");
	scanf("%d", &n);
	bool_n= positivo(n);
	if(n!=0)
	{
	if(bool_n==1)
	{
		printf("Positivo");
	}
	else if(bool_n==0)
	{
		printf("Negativo");
	}
	}	
	else
	printf("O valor e 0, nulo"); //So aceita num inteiros
}
