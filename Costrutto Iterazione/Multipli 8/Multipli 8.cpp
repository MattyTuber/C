/*Scrivere in programma che richiesto un numero intero k calcoli la somma di tutti i multipli
di 8 minori di k.*/

#include <stdio.h>

int main()

{
	
	int k, i, somma;
	
	somma = 0;
	
	printf("Inserire un numero: ");
	scanf("%d", &k);
	
	for (i=0; i<=k; i++)
	
	{

		if (i%8==0)
		
			somma += i;
	
	}
	
	printf("La somma dei multipli di 8 e': %d", somma);
	
	return 0;
	
}
