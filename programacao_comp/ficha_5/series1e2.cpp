#include <stdio.h>

float soma_serieI(int n)
{
	float i; //o i tem de ser float pq a div com pelo menos um float retorna um valor float: obtenho assim a parte fracionaria
	float s1=0;
	printf("Indique um valor e retornarei a soma de uma serie confinada a esse valor\n");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		s1+=1/i;
	}
	return s1;
}

float soma_serieII(int n)
{
	float i; //o i tem de ser float pq a div com pelo menos um float retorna um valor float: obtenho assim a parte fracionaria
	float s2=0;
	printf("Indique um valor e retornarei a soma de uma serie confinada a esse valor\n");
	scanf("%d", &n);
	
	float fat=1;
	
	for(i=1;i<=n;i++)
	{
		fat = fat*i;
		s2+=1/fat;
	}
	return s2;
}

main()
{
	int n;
	float s1, s2;
	s1 = soma_serieI(n);
	s2 = soma_serieII(n);
	printf("Soma da serie I (S= 1+1/2+...+1/n): %f\n", s1);
	printf("Soma da serie II (S= 1!+1/(2!)+...+1/(n!)): %f\n", s2);
}
