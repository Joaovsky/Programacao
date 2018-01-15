#include <stdio.h>

//Em C os arrays sao de base 0, isto é, comecam em 0 o indice.
main()
{
	int i, x[100];
	
	for(i=0; i<100;i++)
	{
		scanf("%d", &x[i]);
	}	
	for(i=99; i>=0;i--)
	{
		printf("%d\n", x[i]);
	}
}
