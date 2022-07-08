/****************************************************/
/*  												*/
/*Broglio Matteo 3CIN                               */
/*Programma per la conversione da Binario a Decimale*/
/*  												*/
/****************************************************/

#include <stdio.h>
#include <math.h>

int main()

{
	
	int i, bit, n, decimale, app;
	
	decimale = 0;
	
	printf("Inserire la lunghezza del numero: ");
	scanf("%d", &n);
	
	for (i=n-1; i>=0; i--)
	
	{
		
		printf("Inserire un bit: ");
		scanf("%d", &bit);
		
		app = bit * pow (2,i);
		
		decimale += app;
		
	}
	
	printf("Il numero convertito in decimale e': %d", decimale);
	
	return 0;
	
}
