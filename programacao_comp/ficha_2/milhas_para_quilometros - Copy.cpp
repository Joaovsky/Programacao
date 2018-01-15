#include <stdio.h>

main()
{
	float m, q;
	printf("Indique uma distancia em milhas para converter a km\n");
	scanf("%f", &m);	
	if (m>=0)
	{
	q= m*1.609;
	printf("O numero de quilometros e %f", q);
	}
	else printf("a distancia nao pode ser negativa");
	
}
