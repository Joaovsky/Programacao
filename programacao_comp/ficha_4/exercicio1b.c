#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int quant,num=1;


	printf("Indroduza quantos numeros quer imprimir: \n");
	scanf("%d", &quant);

	while(quant>num){

		printf("%d\n", num);

		num++;
	}
	


	return 0;
}

