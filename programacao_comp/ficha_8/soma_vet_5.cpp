#include <stdio.h>
#define MAX 10

void soma_vetores (int *a, int *b, int *c, int n)
{
	int i;
	for(i=0;i<n;i++)
		c[i]=a[i]+b[i];
}

main()
{
	int i, x[MAX], y[MAX], z[MAX];
	
	for(i=0;i<10;i++)
		{
			x[i]=i+1;
			y[i]=2*x[i];
		}
		
	soma_vetores(x, y, z, MAX);
	
	printf("Vetor 1\n");
	for(i=0;i<10;i++)
		{
		printf("%d\n", x[i]);
		}	
	puts("");
	printf("Vetor 2\n");	
	for(i=0;i<10;i++)
		{
		printf("%d\n", y[i]);
		}
	puts("");		
	printf("Vetor 1 + Vetor 2:\n");
	for(i=0;i<10;i++)
		{
		printf("%d\n", z[i]);
		}			
}
