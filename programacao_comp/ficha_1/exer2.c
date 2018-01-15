#include <stdio.h>

int main(){

	int prim, seg, terc, soma=0;


	printf("introduza o primeiro angulo: \n");
	scanf("%d", &prim);
	printf("introduza o segundo angulo: \n");
	scanf("%d", &seg);
	printf("introduza o teceiro angulo: \n");
	scanf("%d", &terc);


	soma = prim + seg + terc;

	if(soma == 180){

		printf("sao angulos internos\n");
	}

	else 
		printf("nao sao angulos internos\n");


	return 0;
}






/* sabendo as medidas dos angulos do triangulo, indique se podem consituir as medidas internas

a soma dos angulos internos é 180. */