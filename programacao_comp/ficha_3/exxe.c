#include <stdio.h>
#include <stdlib.h>

int main(){
	
int num;

	printf("Indique um numero: \n");
	scanf("%d", &num);

	if(num%2==0 && num>=0){

		printf("O numero %d é par e positivo!\n", num);  // par e positivo
    }
		else if(num%2==0 && num<0){
			printf("O numero %d é par e é negativo!\n", num);   // par e negativo
		}

		else if(num%2!=0 && num>=0){
			printf("O numero %d é impar e positivo!\n", num);   // impar e positivo
		}

		else{
			printf("O numero %d é impar e negativo!\n", num); // impar e negativo
		}
	}


/*

Ler um número inteiro e mostrar uma mensagem indicando se este número é par ou
ímpar, e se é positivo ou negativo.

*/