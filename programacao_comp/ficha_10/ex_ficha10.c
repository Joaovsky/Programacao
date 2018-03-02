#include <stdio.h>
#include <string.h>

void display(char *fich)
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
	FILE *f1;
	char linha[100];
	int cont=1;
	f1=fopen(fich, "rt");
	if(f1==NULL)
	{
		printf("Erro ao abrir o ficheiro");
	}
	else
	{
		fgets(linha, 100, f1);
		while (!feof(f1))
			{
				cont++;
				fgets(linha, 100, f1);
			}
	}
	return cont;
	fclose(f1);
}

void grava_numeros(void)
{
	FILE *f2;
	int i,x;
	f2=fopen("numeros.txt", "wt");
	if(f2==NULL)
		{
			printf("Erro ao abrir o ficheiro");
		}
	else
	{
	printf("introduza numeros. Quando introduzir -1 o programa chega ao fim\n");
	for(;x!=-1;)
	{
		scanf("%d", &x);
		fprintf(f2, "%d\n", x);
	}
	}	
	fclose(f2);
}

int leitura_numero(void)
{
	FILE *f3;
	int i=0, max=0, v[50];
	f3= fopen("numeros.txt", "rt");
	if (f3==NULL)
		{
			printf("Erro ao abrir o ficheiro");
		}
	else
	{
	fscanf(f3, "%d", &v[0]); 			//precisa de & pq v[0] e um endereco
	max=v[0];
		while(!feof(f3))
		{
			fscanf(f3, "%d", &v[i]);
			
			if(v[i]>max)
				{
					max=v[i];
				}
			i++;	
		}	
	}
fclose(f3);
return max;
}

void conta_string(char *fich, char *str)
{
	FILE *f1;
	int cont=0, cmp;
	char linha[50], *ret;
	f1=fopen(fich, "r");
	if (f1==NULL)
	{
		printf("Erro");
	}
	else
	{
		fgets(linha, 50, f1);
		while (!feof(f1))
			{
				ret= strstr(fgets(linha, 50, f1), str);
				if(!ret)
					{
						cont++;
					}
				//printf("%d", cmp);
			}
	}
	printf("\n\n%d linhas iguais a: ola\n", cont);
	fclose(f1);
}

void converte(void)
{
	FILE *f1, *f2;
	char string_fich[50], str_obt[50]="", s1[50], s2[50], s3[50], s4[50], ch;
	
	f1=fopen("nomes.txt", "r");
	if (f1==NULL)
	{
		printf("Erro");
	}
	else
	{
		while(!feof(f1))
			{
				fgets(string_fich, 50, f1);
				//printf("ola!");
				strcat(str_obt, string_fich);
			}
	}
	printf("%s\n\n", str_obt);
	sscanf(str_obt, "%s  %s  %s  %s", s1, s2, s3, s4);
	f2=fopen("nomes_comp.txt", "w");
	fprintf(f2,"%s, %c. %c. %c.", s4, s1[0], s2[0], s3[0]);

	printf("%s, %c. %c. %c.", s4, s1[0], s2[0], s3[0]);
	fclose(f1);
	fclose(f2);
}	

main()
{
	int n=0, maior=0, num_str=0;
	char str;
	display("dados.txt");
	printf("\n\n------------\n\n");
	n=conta_linhas("dados.txt");
	printf("%d linhas", n);
	printf("\n\n------------\n\n");
	grava_numeros();
	printf("\n\n------------\n\n");
	maior=leitura_numero();
	printf("O maior valor e %d", maior);
	printf("\n\n------------\n\n");
	converte();
	printf("\n\n------------\n\n");
	conta_string("dados.txt", "ola");
}


