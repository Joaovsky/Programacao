#include <stdio.h>
#include <string.h>
#define N 1

typedef struct INFO_ALUNO {
 int numero;
 char nome[50];
 char curso[10];
 int ano;
}
info_aluno; 

void listar(info_aluno*al, int n) //n eh do enunciado
{
	int i;
	for(i=0;i<n;i++)	
	{
		printf("%d, %s, %s, %d\n",al[i].numero, al[i].nome, al[i].curso, al[i].ano);
	}
}

void ordenar(info_aluno *al, int n)
{
	//ordenacao vetores: bubble sort
	info_aluno aux;
	int i,j;
	for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
				{
					if(al[j].numero<al[i].numero) //se o num a seguir for maior q o num im. anterior troca
						{
							aux=al[i];
							al[i]=al[j];
							al[j]=aux;
						}
				}
		}
	
}

int pesquisar(info_aluno *al, int n, char *nome)
{
	int i=0, enc=0;
	while (i<n && !enc)
	{
			if (!stricmp(al[i].nome, nome))
				{
					enc=1; 		//compara as strings e nao facas sistincao entre maiusculas e minusculas stricmp, se quiseres q faca dif usa strcmp
				}
			else
				{
					i++;	
				}
	}
	if(enc)
		{
			return al[i].numero;
		}
	else
		{
			return -1;
		}	
}

main()
{                                                                             

info_aluno aluno[N];
int i, num;

for(i=0;i<N;i++)
{
	printf("Numero:");
	scanf("%d", &aluno[i].numero);
	fflush(stdin);
	printf("Nome:");
	gets(aluno[i].nome);
	printf("Curso:");
	gets(aluno[i].curso);
	printf("Ano:");
	scanf("%d", &aluno[i].ano);
	fflush(stdin);
}
num=pesquisar(aluno, N,"ANA");
if(num==-1)
	printf("Nao existe\n");
else
	printf("Aluno numero %d\n", num);

ordenar(aluno, N);
listar(aluno, N);
}
