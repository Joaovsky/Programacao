#include <stdio.h>

int main(){

	int primeiro, segundo, terceiro, media=0;


	printf("introduza o primeiro: \n");
	scanf("%d", &primeiro);
	printf("introduza o segundo: \n");
	scanf("%d", &segundo);
	printf("introduza o terceiro: \n");
	scanf("%d", &terceiro);

	media = (primeiro + segundo + terceiro)/3;

	printf("a media : %d \n", media);

	return 0;
}