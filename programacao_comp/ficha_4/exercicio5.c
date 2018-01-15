
/*
Ler uma série de números positivos, terminada por zero, e calcular: a quantidade de números pares e de números ímpares, 
a média de valores pares e a média geral dos números lidos
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
 int numero, sequencia, media, i,soma=0;
 int par=0, impar=0;
 int mediatud, mediap,somap=0;

 printf("introduza a numeros  \n");
 scanf("%d",&sequencia);                // quantidade de numeros a ser introduzida 
 for (i = 0; i < sequencia; i++)
 {
   scanf("%d ", &numero);               // os numeros que foram introduzidos
   soma+=numero;
    if(numero%2==0){

	    par++;
	    somap=numero+par;
      }

    else 
        impar++; 
    }
mediatud=soma/sequencia;
    
mediap=somap/par;

printf("Há: %d pares e há: %d impares\n", par, impar);
printf("A media total é: %d\n", mediatud);
printf("A media dos pares é: %d\n", mediap);
}

/*

ACHAR A MEDIA DOS PARES:

1---> somar todos pares ----> somap

2---> calcular a quantida dos pares ----> par++

mediap=soma/par
-----------------------------------


ACHAR A MEDIA:

