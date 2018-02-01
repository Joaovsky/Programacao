#include <stdio.h>

main()
{
	int i, sum=0, med;
	int v[100];
	FILE *f1, *f2;
	f1=fopen("temperaturas.txt", "rt");
	if (f1==NULL)
		{
			printf("Erro");
		}
	else
	{
		for(i=0; i<=23; i++)
			{
				fscanf(f1, "%d ", &v[i]);
				sum+=v[i];
			}
			med=sum/i;
	}
	f2=fopen("desvios.txt", "wt");
	for(i=0; i<=23;i++)
		{
			fprintf(f2, "%d ", (v[i]-med));
		}
	printf("media = %d", med);	
	fclose(f1);
	fclose(f2);	
}
