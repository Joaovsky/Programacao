#include <stdio.h>

int main(){

	int numer, fator=1;

	printf("Indtroduza o nr: \n");
	scanf("%d", &numer);

	while(numer>1){

		fator=fator*numer;

		numer--;

	}

	printf("o fatorial é: %d\n", fator);



	return 0;
}



/*
Recorrendo a um ciclo do tipo 
while, desenvolva um programa para calcular o factorial de um número n, onde n é dado pelo utilizador. 


fatorial ---> numero*(numero-1)*prximo..... 


enquanto numero for maior que 0 

tem que calcular

*/