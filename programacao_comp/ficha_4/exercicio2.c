
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int quant,num=1,soma=0;


	printf("Indroduza a quantidade: \n");
	scanf("%d", &quant);

	while(num<=quant){
   
		soma = soma+num;
		num++;
	}

		printf("a soma é: %d\n", soma);
	
	


	return 0;
}



//Calcular a soma dos números inteiros entre 1 e N, com N dado pelo utilizador