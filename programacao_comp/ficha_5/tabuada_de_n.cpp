#include <stdio.h>

int tabuada (int n, int res)
{
	int i; 
	printf("Indique um num\n");
	scanf("%d", &n);
	for(i=1; i<=10; i++)
	{
	 	res=i*n;
	 	printf("%d*%d=%d\n", i, n, res);
	}
		 	return res;
}

main()
{
	int n, res;
	tabuada(n, res);
}
