#include <stdio.h>
#include <iostream>

int main()
{
   int i, j, lato;
   
   printf("Inserire il lato --> ");
   scanf("%d", &lato);
   
   char mat [lato] [lato];
   
   for (i = 0; i < lato; i++) { 
        for (j = 0; j < lato; j++) { 
  
            if (i == j || (i + j + 1) == lato) 
                mat [i] [j] = '*';
            else
            	mat [i] [j] = '-';
        }
    }
    
   
   for (i=0; i<lato; i++){
   		for (j=0; j<lato; j++){
   			printf ("%c", mat [i] [j]);
		}
		
		printf ("\n");
   }
   
   return 0;
}
