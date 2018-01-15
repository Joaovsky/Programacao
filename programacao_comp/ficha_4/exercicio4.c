#include <stdio.h>
#include <stdlib.h>

int main(){

	int num, vezes=0, res;

	printf("Introduza o numero: \n");
	scanf("%d", &num);

	while(vezes<10){

        res = num*vezes;

		printf("%d x %d = %d \n", num, vezes, res);

		vezes++;
	}
	

}

/*

Dado um numero N, escrever a tabuada dos N

+/



num*0
num*1
num*2
num*3
num*4        num ----> 10 vezes
num*5
num*6
num*7
num*8
num*9


*/