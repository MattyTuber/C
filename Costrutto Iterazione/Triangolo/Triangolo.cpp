#include <stdio.h>

int main()
{
   int i, j, n, num=1;
   printf("Inserire un numero --> ");
   scanf("%d", &n);
   
   for (i=0; i<=n; i++) {
      
	  for (j=0; j<i; j++) {
         printf("%d ", num);
         num++;
      }
      
	  printf("\n");
   }
   
   return 0;
}
