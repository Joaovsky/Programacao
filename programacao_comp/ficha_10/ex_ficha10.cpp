#include <stdio.h>

void display (char *fich)
{
	FILE *f;
	char linha[100];
	f=fopen(fich, "rt");
	if(f==NULL)
	{
		printf("Erro ao abrir o ficheiro");
	}
	else
	{
	do
	{
		fgets(linha, 100, f);
		printf("%s", linha);
	}
	while (!feof(f));
	}
	fclose(f);
}
int conta_linhas (char *fich)
{
	FILE *f;
	char linha[100];
	int cont=1;
	f=fopen(fich, "rt");
	if(f==NULL)
	{
		printf("Erro ao abrir o ficheiro");
	}
	else
	{
		fgets(linha, 100, f);
		while (!feof(f))
			{
				cont++;
				fgets(linha, 100, f);
			}
	}
}

main()
{
	display("DADOS.txt");
	printf("\n %d linhas, n");
}
