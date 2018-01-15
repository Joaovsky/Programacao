#include <stdio.h>
#include <math.h>

main()
{ 
float c1, c2, h, a;
printf("Indique o valor do cateto um\n");
scanf("%f", &c1);
printf("Indique o valor do cateto dois\n");
scanf("%f", &c2);
h = sqrt((c1)*(c1)+(c2)*(c2));
a = c1*c2/2;
printf("A area do triangulo e %f e a hipotenusa e %f", a,h);
}
