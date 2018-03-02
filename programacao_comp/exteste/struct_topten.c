#include <stdio.h>
typedef struct top_ten{
	char nome;
	int pontos;
}top_ten;
int funcao_retorna_val(top_ten *top10, int pts)
{
	int i;
	for(i=9;i>=0;i--)
		{
			if(pts <= top10[i].pontos)
				continue;
			else if (pts > top10[0].pontos)
				{
					return (9-i);
				}		
		}	
	return -1;	
}
main()
{
	int i,j, ret_value, pontuacao;
	top_ten topten[10], aux;
	//preenche vetor
	printf("Melhores dez posicoes\n");
	for(i=0;i<10;i++)
		{
			printf("\nIndique a pontuacao\n");
			scanf("%d", &topten[i].pontos);
		}
	//ordena as pontuacoes: da mais baixa pra mais alta
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
			{
				if(topten[j].pontos<topten[i].pontos)
					{
						aux=topten[i];
						topten[i]=topten[j];
						topten[j]=aux;
					}
			}
		printf("%d ", topten[i].pontos);
	}
	//pts do novo jogador
	printf("\nIndique a sua pontuacao\n");
	scanf("%d", &pontuacao);
	ret_value=funcao_retorna_val(topten, pontuacao);
	printf("\n%d \n", ret_value);
	return 0;
}
