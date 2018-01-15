#include <stdio.h>

main()
{ 
float c, l, p, a;
printf("Indique o comprimento\n");
scanf("%f", &c);
printf("Indique a largura\n");
scanf("%f", &l);
p = 2*(c+l);
a = c*l;
printf("A area do retangulo e %f e o seu perimetro e %f", a, p);
}
