/****************************************************/
/*  												*/
/*Broglio Matteo 3CIN                               */
/*Programma per la conversione da BCD a Decimale	*/
/*  												*/
/****************************************************/

#include <stdio.h>

int main()

{
	
	int i, a[32], num, z;
	
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
	
		printf("%d\t", dec);

	}
		
}

