/****************************************************/
/*  												*/
/*Broglio Matteo 3CIN                               */
/*Programma per la conversione da Decimale a Binario*/
/*  												*/
/****************************************************/

#include <stdio.h>
     
int main()
{
      
	int n, i, bin;
     
    printf("Inserire un numero decimale --> ");
    scanf("%d", &n);
	
	printf("%d in binario e':\n", n);
     
    for (i = 31; i >= 0; i--)
    {
        
		bin = n >> i; //Operatore di bitwise per shift a destra
     
    	if (bin & 1) //Operatore di bitwise per AND
          
			printf("1 ");
        
		else
          
			printf("0 ");
      
	}
      
	return 0;
    
}
