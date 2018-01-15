#include <stdio.h>
#define MAX 10 

int main()
{
   int m, n, c, d, primeira[MAX][MAX], segunda[MAX][MAX], soma[MAX][MAX], diferenca[MAX][MAX];
 
   printf("Num linhas e num colunas das matrizes um e dois\n");
   scanf("%d%d", &m, &n);
   printf("Elementos da primeira matriz\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &primeira[c][d]);
 
   printf("Elementos da segunda matriz\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
            scanf("%d", &segunda[c][d]);
 
   printf("Soma das matrizes do mesmo tipo:-\n");
 
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         soma[c][d] = primeira[c][d] + segunda[c][d];
         printf("%d\t", soma[c][d]);
      }
      printf("\n");
   }
   
   printf("Diferenca das matrizes do mesmo tipo:-\n");
   
	for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         diferenca[c][d] = primeira[c][d] - segunda[c][d];
         printf("%d\t", diferenca[c][d]);
      }
      printf("\n");
   }
   return 0;
}
