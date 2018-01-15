#include <stdio.h>
#define MAX 10

int main()
{
  int m, n, p, q, c, d, k, soma = 0;
  int primeira[MAX][MAX], segunda[MAX][MAX], produto[MAX][MAX];
 
  printf("Num de linhas e colunas da primeira matriz\n");
  scanf("%d%d", &m, &n);
  printf("Indique os elementos da primeira matriz\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &primeira[c][d]);
 
  printf("Num de linhas e colunas da segunda matriz\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("O num de colunas da primeira tem de coincidir com o num de linhas da segunda\n");
  else
  {
    printf("Indique os elementos da segunda matriz\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &segunda[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          soma = soma + primeira[c][k]*segunda[k][d];
        }
 
        produto[c][d] = soma;
        soma = 0;
      }
    }
 
    printf("Matriz resultante:-\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", produto[c][d]);
 
      printf("\n");
    }
  }
 
  return 0;
}
