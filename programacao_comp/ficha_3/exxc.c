#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1, num2, num3, maior, final;

printf("Insira o primeiro nr: \n");
scanf("%d", &num1);

printf("Insira o segundo nr: \n");
scanf("%d", &num2);

printf("Insira o terceiro nr: \n");
scanf("%d", &num3);


if (num1 >= num2 && num1 >= num3){

	maior = num1;
    }

	else if(num2 > num1 && num2 > num3){

		maior = num2;
	    }

		else{
			maior = num3;
		}

		final = (num1 + num2 + num3) - maior;

		printf(" soma de dois menores : %d\n", final);

	}



/*

Calcular, dados três números inteiros, a soma dos dois menores

*/