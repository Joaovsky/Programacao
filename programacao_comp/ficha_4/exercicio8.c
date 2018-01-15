#include <stdio.h>

int main(){

int num1,num2,soma=0;
char c='s';

do{
	
	printf("introduza os numeros a somar: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    soma=num1+num2;

	printf("a soma é: %d \n", soma);
    printf("deseja continuar? s ou n?\n");
    scanf(" %c", &c);
    }

   while(c=='s');

	return 0;
}

/*

Recorrendo ao tipo de estrutura cíclica que lhe parecer mais adequado, elabore um programa para calcular a soma de dois números, mas 
que após apresentar o resultado, permita ao utilizador repetir a operação.

*/