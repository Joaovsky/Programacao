#include <stdio.h>

main()
{
	float c, f;
	printf("Indique uma temperatura em graus Celsius para passar a Fahrenheit\n");
	scanf("%f", &c);
	f= 1.8*c+32;
	printf("A temperatura em fahrenheit e %f", f);
	
}
