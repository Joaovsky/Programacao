#include <stdio.h>

void hora_min_seg(int *time_s, int *h, int *m, int *s)
{	
	*h = *time_s / (60 * 60);
	*m = (*time_s % 3600) / 60;
	*s = *time_s % 60;	
}

main()
{
	int h, m=0, s, time_s;
	printf("Indique em segundos o tempo de fabrico do pneu\n\n");
	scanf("%d", &time_s);
	hora_min_seg(&time_s, &h, &m, &s);
	printf("Tempo: %d hora(s), %d minuto(s), %d segundo(s)", h, m, s);
}
