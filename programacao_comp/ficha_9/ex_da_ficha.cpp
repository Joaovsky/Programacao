#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctype.h>
#define MAX 50
#define boolean int
#define true 1
#define false 0


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
		printf("(retirar espacos)\n");
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
	strcpy(nome_res, nova);
}

void converte(const char *nom_normal, char *nome_comp) 
{
	char nomes_prop[MAX], apelido[MAX], 
	nova[MAX] = "", nova2[MAX] = "";
	int pue; //posiçao do ultimo espaço
	int ta; //tamanho apelido
	int c=0, i=0;
	char pc;
	pue=strlen(nom_normal)-1;//menos o enter
	while(nom_normal[pue] != ' ')
	{
		pue--;
	}
	//Separar nome normal em nomes proprios e apelidos
	strncpy(nomes_prop, nom_normal, pue);
	strcpy(apelido, nom_normal+pue+1);	

	//Formatar output
	//formatar apelido
	char *nterm = ", ";
	//remover terminador '\0'
	strncpy(nova, apelido, strlen(apelido)-1);
	strcat(nova, nterm);
	
	//formatar nomes proprios	
	pc = nomes_prop[0];
	char *aterm = ". ";

	for(i=0; i<strlen(nomes_prop); i++)
	{
		if(nomes_prop[i]==' ')
		{
			nova2[c] = toupper(pc);
			strcat(nova2, aterm);
			
			pc = nomes_prop[i+1];			
			c=c+3;
		}
	}
	
	nova2[c] = toupper(pc);
	strcat(nova2, aterm);
	
	strcpy(nome_comp, nova);
	strcat(nome_comp, nova2);	
}

boolean existe_nome(const char *nome, char *nome_proc, int *pos, int *num_car){
			    	
		char *ptr=0;
			
		if(strlen(nome)>0)
		{
			ptr=strstr(nome, nome_proc);
			num_car=strlen(nome_proc);
			
			if(ptr!=NULL)
			{
				pos = (int) (ptr - nome);
				printf("\nNome encontrado! ");
				printf("\nPosicao: %d\n", pos);
				printf("Numero carateres: %d\n", num_car);
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

main()
{
	char dados[MAX], nome[MAX], nome_res[MAX]; //string q armazena o q o usuario indicara
	int idade;
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
	puts(nome);
	puts(nome_res);
	printf("-------------\n");
	existe_nome(str, "Pedro", posicao, num_caratere);
	
	return 0;
}


