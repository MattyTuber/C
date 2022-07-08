/****************************************************/
/*  												*/
/*Broglio Matteo 3CIN                               */
/*Programma per la conversione da BCD a Binario     */
/*  												*/
/****************************************************/

#include <stdio.h>

int main()

{
	
	int i, a[32], num, z, bin, p;
	
	char risp;
	
	int n = 0;

	for (i=0; i <= n; i++)
	
	{
		
		printf("Inserire il codice BCD --> ");
		scanf("%d", &a[i]);
		
		printf("Vuoi inserire altri valori? S/N ");
		getchar();
		scanf("%c", &risp);
		
		if (risp == 'S')
		
			n++;
		
	}
	
	for (z=0; z <= n; z++)
	
	{
		
		num = a[z];
		
		int base = 1;
		
		int dec = 0;
		
		int mod = 0;
		
		while (num > 0)
	
	    {
	
	        mod = num % 10;
	
	        dec = dec + mod * base;
	
	        num = num / 10 ;
	
	        base = base * 2;
	
	    }

		printf("\n%d in binario e': ", dec);
	     
	    for (p = 3; p >= 0; p--)
	    {
	        
			bin = dec >> p;
	     
	    	if (bin & 1)
	          
				printf("1 ");
	        
			else
	          
				printf("0 ");
	      
		}

	}
		
}

