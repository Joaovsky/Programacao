#include <stdio.h>

int divisores_de_num(int n)
{
	int i,c=0;
	
	if(n==1)
		printf("1 tem apenas 1 divisor: 1");
	
	if (n!=1)
		{
		for (i=2;i<n;i++)
			{
			if(n % i ==0)
				{
					c++;//no min qq num int pos dif de 1 tem 2 div (n primos); senao e um n composto; 1 nao e primo nem composto;
				}
			}
    	}
    return c;
}

main()
{
	int c, n; 
	printf("Escreva um num inteiro positivo para achar os seus divisores\n");
	scanf("%d", &n);
	c = divisores_de_num(n);
	if(n!=1)
	printf("Num de divisores: %d", 2+c);
}
