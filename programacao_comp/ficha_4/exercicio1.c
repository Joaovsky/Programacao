#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int quantos=0, i;


	printf("Indroduza quantos numeros quer imprimir: \n");
	scanf("%d", &quantos);

	for(i=1; i<quantos; i++){

		printf("%d\n", i);
		
	}



	return 0;
}




//Imprimir os números inteiros entre 1 e N, com N dado pelo utilizador. 