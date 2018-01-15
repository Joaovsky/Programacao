#include <stdio.h>

main()
{
	float a,b,c,m;
	printf("Indique um numero\n");
	scanf("%f", &a);
	printf("Indique um numero\n");
    scanf("%f", &b);
	printf("Indique um numero\n");
    scanf("%f", &c);
    m = (a+b+c)/3;
    printf("%f", m);
}
