#include <stdio.h>
#define DIM 3


main()
{
	int min, max, i, j, m[DIM][DIM];
	
	printf("Construa uma matriz 3x3 e o PC retornara o maior e o menor elemento desta\n");
	//Declarar sem inicializar as variaveis pode causar problemas ao executar o programa pq o valor da var corresponde ao q quer q esteja dentro do espaco de memoria ligado a esta
	for( i = 0 ; i < DIM ; i++ )
   {
      for( j = 0 ; j < DIM ; j++ )
      {
         scanf("%d",&m[i][j]);
      }
   }
	
	max=m[0][0];
	min=m[0][0];
	
	for(i=0;i<DIM;i++)
	{
		for(j=0;j<DIM;j++)
		{	
			if(m[i][j]>max)
				max=m[i][j];
			if(m[i][j]<min)
				min=m[i][j];	
		}
		puts("");
	}
	printf("Valor min e %d e o valor max e %d", min, max);
	
}

