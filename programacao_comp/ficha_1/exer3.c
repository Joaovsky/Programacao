#include <stdio.h>

int main (){

	int quantos, preco, total, troco, dinheiro;




	printf("introduza o artigo: \n"); 
	scanf("%d", &preco);

	printf("introduza a quantidade: \n");
	scanf("%d", &quantos);

	total = preco*quantos;

	printf(" quanto dinheiro foi pago: \n");
	scanf("%d", &dinheiro);

	if(dinheiro < total){

      printf( "falta dinheiro ");}

    else if( dinheiro == total){

    	printf( " nao ha troco");}

    	else{

    		troco = dinheiro - total;
    	    printf("o troco e %d\n", troco);}

}




/*    Calcular o troco de uma transação comercial. Sabendo o preço unitário de um artigo, a quantidade de artigo comprada, e a quantia em dinheiro
 entregue pelo cliente, apurar o preço total da compra, e quanto é que o cliente recebe de troco. 

 Se a quantia recebida for 
igual  ao  preço  total  da  compra,  informar  que  não  há troco  a  devolver


se  for  inferior, informar que falta o cliente entregar mais dinheiro
, e quanto; se for superior, informar o troco a devolver. */