#include <stdio.h>
#include <stdlib.h>

int main (){

int num1, num2, num3;

printf("Insira o primeiro nr: \n");
scanf("%d", &num1);

printf("Insira o segundo nr: \n");
scanf("%d", &num2);

printf("Insira o terceiro nr: \n");
scanf("%d", &num3);


if (num1 >= num2 && num1 >= num3){

	printf("O maior nr: %d\n", num1);
    }

	else if(num2 > num1 && num2 > num3){

		printf("O maior nr: %d\n", num2);
	    }

		else{
			printf("O maior: %d\n", num3);
		}

}


/*

Calcular o valor do maior de três números

*/