#include <stdio.h>
#include <stdlib.h>

int main(){

	float prim, seg, ter, med;

printf("Insira o valor do primeiro teste: \n");
scanf("%f", &prim);

printf("Insira o valor do segundo teste: \n");
scanf("%f", &seg);

printf("Insira o valor do terceiro teste: \n");
scanf("%f", &ter);

med = (prim + seg + ter)/3;

if(med >= 9.5){
	printf("A media do aluno : %f O aluno foi aprovado\n", med);
}
else{

    printf("A media do aluno : %f O aluno foi reprovado\n", med);
}

}

/*

Calcular a média aritmética das três notas de um aluno e mostrar, além do valor da
média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 9.5, ou a
mensagem "Reprovado", caso contrário.

*/