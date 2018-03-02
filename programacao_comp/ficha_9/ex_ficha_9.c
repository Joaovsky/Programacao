#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100
#define boolean int
#define true 1
#define false 0

boolean existe_nome(const char *nome, char *nome_proc, int *pos, int *num_car);


void entra_string(char *str)
{
	int n;
	fgets(str, MAX, stdin);//da print ao q escrevo
	n=strlen(str)-1; //retira o enter
	str[n]='\0'; //devolve string sem enter dizendo q a ult pos e antes do enter
}

void separa(const char *str, char *nome, int *idade)
{
	int pos;
	char idade_str[5];
	pos=strlen(str)-1;
	while(str[pos] != ' ')
	{
		pos--;
	}
	strncpy(nome, str, pos);
	strcpy(idade_str, str+pos+1);
	*idade = atoi(idade_str); //converte string para um num
}

void nome_maiusculas(const char *nome, char *nome_res)
{	
	int	i=0;
	strcpy(nome_res, nome);
	while (nome_res[i]!='\0')
	{
		if (!isspace(nome_res[i])) 
		{	
			nome_res[i]=toupper(nome_res[i]);
		}	
		i++;	
	}
}

void nome_elimina_char(const char *nome, char ch, char *nome_res)
{
	int i=0, j=0;
	char nova[MAX];

	if(ch==' ') 
	{
		printf("\n(retirar espacos)\n");
	}

	while (nome[i]!='\0')
		{
			for(i=0;i<strlen(nome);i++)
			{	
				//Quando não elimina char
				if (nome[i]!=ch)
				{
					nova[j] = nome[i];
					//Só aumenta o index quando não for o char
					j++;
				}
			}
		}
	nova[j]='\0';
	strcpy(nome_res, nova);
}

void converte(const char *nom_normal, char *nome_comp) 
{
	char s1[MAX], s2[MAX], s3[MAX], s4[MAX];
	sscanf(nom_normal, "%s %s %s %s", s1, s2, s3, s4);
	printf("Formato compacto: ");
	printf("%s, %c. %c. %c.", s4, s1[0], s2[0], s3[0]);	
}

boolean existe_nome(const char *nome, char *nome_proc, int *pos, int *num_car){
			    	
		char *ptr=0;
			
		if(strlen(nome)>0)
		{
			ptr=strstr(nome, nome_proc);
			num_car= (int *) strlen(nome_proc);
			
			if(ptr!=NULL)
			{
				pos = (int *) (ptr - nome);
				printf("\nNome encontrado! ");
				printf("\nPosicao: %d \n", pos);
				printf("Numero carateres: %d \n", num_car);
				return 1;
			}
			else
			{	
				return 0;
			}
		}
		else
		{
			return 0;
		}
}

int compara_nome(const char *nome1, char *nome2)
{
	char s1[MAX], s2[MAX];
	printf("\nIndique um nome (nome1)\n");
	fflush(stdin);
	gets(s1);
	printf("\nIndique outro nome (nome2)\n");
	fflush(stdin);
	gets(s2);	
	return strcmp(s1, s2);
}

main()
{
	char dados[MAX], nome[MAX], nome_res[MAX], str[MAX], nome1[MAX], nome2[MAX]; //string q armazena o q o usuario indicara
	int idade=0, *posicao, *num_caratere, res;
	char eliminar;	
	printf("Dados: ");
	entra_string(dados); //passagem por ref da str
	printf("%s\n", dados);
	printf("-------------\n");
	
	printf("Separar Dados:\n");
	separa(dados, nome, &idade);
	printf("Nome: %s\n", nome);
	printf("Idade: %d\n", idade);
	printf("-------------\n");
	
	printf("Conversao para maiusculas:\n");
	nome_maiusculas(nome, nome_res);
	puts(nome_res);
	printf("-------------\n");
	
	printf("Nome sem carater, que carater eliminar?\n");
	eliminar= getchar();
	nome_elimina_char(nome, eliminar, nome_res);	
	puts(nome_res);
	printf("-------------\n");
	
	converte(nome, nome_res);
	printf("-------------\n");
	
	printf("\nAntes de retirar carater\n");
	puts(nome);
	printf("\nDepois de retirar carater\n");
	puts(nome_res);
	printf("-------------\n");
	
	strcpy(str, "Joao Pedro");
    existe_nome(str, "Pedro", posicao, num_caratere);
    printf("-------------\n");
    
	res=compara_nome(nome1, nome2);
	printf("\nNome 1 em relacao a nome 2: %d\n", res);
	return 0;
}


