#include <stdio.h>
#include <stdlib.h> //pra f rand()

int num_al_maior_idade(int v[100], int num)
{
	int i, cont=0;
	printf("Apenas contam idades entre os 0 e os 125");
	for(i=0;i<num;i++)
		{
			if(v[i]>=0&&v[i]<=125)
			{
				if(v[i]>=18)
					cont++;
			}
		}
	return cont;
}

main()
{
	int i, n, v[100], alunos_18mais;
	printf("Indique o numero de alunos de uma turma: \n");
	scanf("%d", &n);
	printf("\nDigite as idades dos mesmos: \n");
	for(i=0;i<n;i++)
		{
		//v[i]= 16+rand()%4;
		scanf("%d", &v[i]);
		}	
	alunos_18mais=num_al_maior_idade(v, n);	
	printf("\nO numero de alunos maiores de idade e: %d\n", alunos_18mais);
	return 0;
}
