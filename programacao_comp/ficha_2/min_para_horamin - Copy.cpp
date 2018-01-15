#include <stdio.h>

main()
{
	int hora, min;
	printf("Indique os minutos decorridos desde o inicio do dia\n");
	scanf("%d", &min);
	hora = min/60; 
    min = min %60;
    printf("Decorreram %d horas e %d minutos", hora, min);
}
