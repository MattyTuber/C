/****************************************************/
/*  												*/
/*Broglio Matteo 3CIN                               */
/*Programma per la validazione di un codice con solo*/
/*due bit a 1										*/
/*  												*/
/****************************************************/

#include <stdio.h>

int main()

{
	
	int cod, mod, i;
	
	int z = 9;
	
	int somma_cod = 0;

	for (i = 0; i < 9; i++, z--)
	
	{
		
		int somma = 0;
		
		printf("%d volte rimanenti\n", z);
		printf("\nInserire un codice --> ");
		
		scanf("%d", &cod);
	
		while (cod > 0)
	
		{
		
			mod = cod % 10;
			
			somma += mod;
			
			cod = cod / 10;
			
		}
		
		somma_cod += cod;
		
		if (somma == 2)
		
			printf("\nIl codice rispetta lo standard\n");
			
		else
		
			printf("\nIl codice non rispetta lo standard");
		
	}
	
	if (somma_cod == 44444)
			
		printf("\nTutti i valori inseriti sono diversi\n");
			
	else
		
		printf("\nDue o piu' valori inseriti sono uguali\n");	
	
}
