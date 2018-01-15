#include <stdio.h>
#include <stdlib.h>

int main(){


int numero,i,j;


printf("insira o N\n");
scanf("%d", &numero);


for(i=1; i<=numero; i++){

	//printf("\n");

	for(j=1; j<=i; j++)

     putchar('*');

     putchar('\n');

    }

}


/*

Desenhar triângulos de dimensão N, com N dado pelo utilizador.
Exemplos:

N=1
*

N=5
*
**
***
****
*****

N=3
*
**
***

*/


/*

preciso:   

       ciclo para imprimir N linhas

       ciclo para imprimir N caracteres 

       */