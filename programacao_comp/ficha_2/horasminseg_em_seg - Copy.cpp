#include <stdio.h>

main()
{
	int hora, min, seg, res;
	printf("Indique as horas\n");
	scanf("%d", &hora);
	printf("Indique os minutos\n");
	scanf("%d", &min);
	printf("Indique os segundos\n");
	scanf("%d", &seg);
    res = hora*60*60 + min*60 +seg;
    printf("Decorreram %d segundos", res);
}
