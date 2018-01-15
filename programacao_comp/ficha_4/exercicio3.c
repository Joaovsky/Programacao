#include<stdio.h>

int main()
{
   int i;
   for(i = 1; i <= 256; i++)
   {
      printf("%d -----> '%c'\n", i, i);
   }
   return 0;
}



/*

Imprimir no écran os 256 caracteres ASCII 

nota: Utilize printf(“%c “,i)

*/