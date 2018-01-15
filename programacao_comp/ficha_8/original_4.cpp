#include <stdio.h>
main()
{
   int n1;
   int n2;
   int n3;
   int med;
   int M;
   int m;

   printf("Enter No. 1: ");
   scanf("%d", &n1);
   printf("Enter No. 2: ");
   scanf("%d", &n2);         
   printf("Enter No. 3: ");
   scanf("%d", &n3);

   if (n1>n2) 
   {   
      med=n1;    
      m=n2;   
   } 
   else 
   {
      med=n2;  
      m=n1;  
   } 
   if (med>n3)
	{ 
      M=med;    
      if(m>n3)
	  {         
         med=m;                
         m=n3;
      }
	  else 
	  {
         med=n3;      
      }         
   }
   else M=n3; 

   printf("%d %d %d\n", m, med, M);
}
