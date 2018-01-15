#include <stdio.h>
#include <stdlib.h>
//A documentacao de C permite-nos saber q arquivo usar

void preenche_aleatorio(int v[], int n)
{
int i;

for (i=0;i<n;i++)
{
	v[i]= 1 + rand() % 100;
	// rand e uma funcao q gera num aleat entre 1 e 2^15-1 (tamanho int)
	// Deste modo, ao obter o resto em rand % 100 obtemos valores em 1-99
	//adicionamos 1 para obter num em 1-100
}
}

void mostra_vector(int v[], int n)
{
	int i;
	for (i=0;i<n;i++)
		printf("%d\n", v[i]);
}


main()
{
	int valores[10];
	srand(1200);
	preenche_aleatorio(valores, 10);
	mostra_vector(valores, 10);
}
