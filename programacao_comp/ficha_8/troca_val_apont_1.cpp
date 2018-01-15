#include <stdio.h>

void trocar(int *a, int *b)
{
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
}

main()
{
	int a, b, aux = 0;
	
	printf("A:\n");
	scanf("%d", &a);
	printf("\nB:\n");
	scanf("%d", &b);
	
	trocar(&a, &b);
	printf("\nA=%d B=%d\n",a,b);
}
