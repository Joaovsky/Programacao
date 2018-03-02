#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
//#include "graphics.h"

const int N=4;

// E E C C C   C B B B E    E C/E C E B

void f1(int a, int b){
  if( a<8 && !(a<b)|| b>8) printf("1");
  else { if(b>8 && a<3) printf("2");
  		 else if (a>b)printf("3"); else printf("4"); }
}

void f2(int val) {
    for(int x=-1; x<=10; x++) {
        if(x < 5 || val==1) continue;
        else break;
        printf("MIEEIC\n");
    }
}

int f3(int x) {  
  for(int i=1; i<5; i++)
     printf( "%.*d ", i, x); 
}

void f4(){
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];  j = a[1]++;  m = a[i++];
    printf("%d, %d, %d", i, j, m);
}

void f5(){
    int arr[]={2, 3, 4, 1, 6};
    printf("%u\n", arr);
    printf("%u, %u, %u\n", arr, &arr[0], &arr);
    printf("%d, %d, %d\n", *arr, arr[0], *(arr+1));
}

void f6(int N) {
  for(int i=1; i<=N; i++) {
     for(int j=1; j<=N; j++) {
     	printf("#"); 
		if (i<=j) printf("O"); 
 	 }
     printf("\n");
  }   
}

int f7() {
    FILE *fp;
    char ch; int i=1;
    fp = fopen("myfile.c", "r");
    while((ch=getc(fp))!=EOF) { if(ch == '\n') i++; }
    fclose(fp);
    return i;
}

void f8(int x, int y, int z) { 
	x++; z=++x; z+=x; y=--z;
	printf("%d %d %d\n",x,y,z);
}

int compara(void) {
  char s1[]="X111"; char s2[]="x111";
  char s3[]="X11"; char s4[]="X120";
  printf("%d %d %d\n", strcmp(s1,s2),
        strcmp(s1,s3), strcmp(s1,s4));
}

/* 16) Escreva uma função bool numero_forte(int n) C/C++ que verifique se um 
número é um "Número Forte" retornando true ou false. Um número forte tem a soma 
dos factoriais dos seus dígitos igual ao número original. 
Por exemplo 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145, é um número forte. 
Sugestão: Utilize uma função auxiliar que calcule o factorial de um número.*/
int fatorial(int n) { 
	if (n==1) return 1; 
	return n*fatorial(n-1);  //%2
}
bool numero_forte(int n)
{
	int num=n, soma=0;  
	while(num>0) {    //%1
		soma += fatorial(num%10);    //%2
		num = num/10;
	}
	return soma==n;  //%1
}

/* 17) Construa um programa para desenhar um diamante de dimensão n: int diam(int n). 
O programa deve retornar o número de asteriscos desenhados. Suponha que dispõe da 
seguinte função já implementada:
diam(1) 	diam(2)	diam(3) 	diam(4)
retorna 1	retorna 5	retorna 13	retorna 25
*	 * 	  *	       *
	***	 ***	  ***
	 *	*****	 *****
		 ***	*******
		  * 	 *****
			      ***
			       *  */
void nc(int n, char c) { 
	for(int i=0; i<n; i++) printf("%c", c); 
}

int diam(int n)
{
	int c=0;
	for(int i=1; i<=n; i++){    //%1 cic
		nc(n-i,' '); nc(i*2-1,'*');  printf("\n");  //%1 
		c+=i*2-1;
	}
	for(int i=n-1; i>=1; i--){  //%1 cic
		nc(n-i,' '); nc(i*2-1,'*'); printf("\n");  //%1 
		c+=i*2-1;
	}
	return c;  //%1 conta + instrucoes conta
}

/*18) Escreva uma função int analisa_fich(char nome[], int ocorr[10]) que dado 
o nome de um ficheiro de texto, calcule um vetor com a frequência de ocorrência 
de todos os algarismos nesse ficheiro. Suponha que o vetor se encontra 
inicializado com zeros quando é passado à função. A função deve retornar o 
número total de algarismos encontrados no ficheiro. */

int analisa_fich(char nome[], int ocorr[10]) 
{
	FILE *fich;
	int c=0;
	fich=fopen(nome,"r");
	if(fich==NULL) {printf("Imp Abrir Fich!"); return -1; }
	while (!feof(fich)){
		char ch=fgetc(fich);
		if (isdigit(ch)) { ocorr[ch-48]++; c++;}
	}
	return c;
}

/*19) Escreva uma função int troca_diag(int mat[N][N], int N), para, dada uma 
matriz de NxN caracteres, subtrair 10 a todos os números iguais ou superiores 
a 10 da matriz e trocar, horizontalmente, os elementos das duas diagonais 
principais da matriz. A função deve retornar o número de elementos que se 
mantêm com o mesmo valor após a sua aplicação. Exemplos:
Matriz1  Result1	   Matriz2	   Result2
 1 2 3   3 2 1	 1  2  3  4	   4  2  3  1
 4 5 6   4 5 6	 5  6  7  8	   5  7  6  8
 7 8 9   9 8 7	 9 10 11 12	   9  1  0  2
 Retorna 5	    13 14 15 16	   6  4  5  3
			    Retorna 5  */
int troca_diag(int mat[N][N], int N)
{
	int aux, c=N*N;
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++){  //%2 ciclos
			aux=mat[i][j];
			if (i==j) {    //%1 cond troca
				mat[i][j] = mat[i][N-j-1]; mat[i][N-j-1]= aux;   //%1 troca
				if (mat[i][N-j-1]>=10) { mat[i][N-j-1]-=10; c--;}  
			}
			if (mat[i][j]>=10) mat[i][j]-=10;  //%1 -10
			if (aux!=mat[i][j]) c--;
		}
	return c; //%1 contagem de elementos sem alteração
}

//20) Suponha a seguinte estrutura:
struct forma {
 char tipo[10]; //elipse, rectangulo, losangulo,
 int corb, cori; //cor do rebordo e do interior
 int x, y, dx, dy; // (x,y) centro da forma, (dx,dy) altura e largura da forma
};
/*Construa uma função void desenha(forma f[], int n) que recebe um vetor f 
de formas e qual o número total de formas (n) e as desenhe com a forma 
correta, nos locais corretos e com as cores corretas, no écran.*/

void desenha(forma f[], int n)
{ //%1 usar estrutura corr
	for(int i=0; i<n; i++){  //%1  cic
		setcolor(f[i].corb); setfillstyle(1,f[i].cori);  //%1  
		if (strcmp(f[i].tipo,"elipse")==0) 
			fillellipse(f[i].x,f[i].y,f[i].dx/2,f[i].dy/2);  //%1
		if (strcmp(f[i].tipo,"rectan")==0) {
			bar(f[i].x-f[i].dx/2,f[i].y-f[i].dy/2,f[i].x+f[i].dx/2,f[i].x+f[i].dy/2);  //%1
			rectangle(f[i].x-f[i].dx/2,f[i].y-f[i].dy/2,f[i].x+f[i].dx/2,f[i].x+f[i].dy/2); 
		}
		if (strcmp(f[i].tipo,"losang")==0) {  //%1
			line(f[i].x-f[i].dx/2,f[i].y,f[i].x,f[i].y-f[i].dy/2); 
			line(f[i].x,f[i].y-f[i].dy/2,f[i].x+f[i].dx/2,f[i].y);
			line(f[i].x+f[i].dx/2,f[i].y,f[i].x,f[i].y+f[i].dy/2); 
			line(f[i].x,f[i].y+f[i].dy/2,f[i].x-f[i].dx/2,f[i].y);
			floodfill(f[i].x,f[i].y,f[i].corb);
		}
	} 
}

void resp_mult()
{
	printf("\nEx1: ");	f1(7,8); 
	printf("\nEx2: ");	f1(8,8); 
	printf("\nEx3: ");	f2(0); 	
	printf("\nEx4: ");	f2(1);  
	printf("\nEx5: ");	f3(10); 
	printf("\nEx6: ");	f4();
	printf("\nEx78: ");	f5();
	printf("\nEx10:\n"); f6(2); 
	printf("\nEx11:\n"); f6(3);
	printf("\nEx12: ");	//f7(); 
	printf("\nEx13: "); f8(1,1,1); 
	printf("\nEx14: "); compara(); 
	printf("\n");
}
 
int mostra(int mat[N][N]) { //função auxiliar
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++)	   
			printf("%2d ", mat[i][j]); 
		printf("\n");
	}	
}

/*21) Construa um programa principal que lhe permita testar devidamente 
todos os exercícios anteriores (16-20). */
int main()
{
	//resp_mult(); system("pause"); return 0;
	int nf; printf("Entre um Num?"); scanf("%d",&nf);
	if (numero_forte(nf)) printf("%d e' numero forte!\n",nf); 
	else printf("Nao e' NForte'!\n");   //%1
	
	int na=diam(1); printf("Num*=%d\n",na);  //%1
	na=diam(2); printf("Num*=%d\n",na);
	na=diam(3); printf("Num*=%d\n",na);
	na=diam(4); printf("Num*=%d\n\n",na);
	
	int oc[10]={};
	int car=analisa_fich("ex.txt", oc);    //%1
  	for(int i=0; i<10; i++) printf("%d ",oc[i]);
	printf(" Car = %d\n\n",car);

	int mat[N][N]={1,2,3,4, 5,6,7,8, 9,10,11,12, 13,14,15,16};
	mostra(mat);
	int id=troca_diag(mat,N);	   //%1
	mostra(mat);
	printf("\nMantem-se: %d\n",id);

	initwindow(508,511);
	forma fo[3]= {"elipse",1,2,200,200,150,100,
	             "rectan",15,4,300,300,150,100, 
	             "losang",14,8,400,400,150,100}; 
    desenha(fo, 3);
	
	system("pause"); return 0;
}

