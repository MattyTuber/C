/*Scrivere un programma che calcoli
il perimetro di un triangolo rettangolo*/
#include <stdio.h>

int main()

{
	
	int base;
	
	int altezza;
	
	int perimetro;
	
	printf("Questo programma sereve a calcolare il perimetro di un trianglo rettangolo");
	
	printf("\nInserisci il valore della base: ");
	scanf("%i", &base);
	
	printf("Inserisci il valore dell'altezza: ");
	scanf("%i", &altezza);
	
	perimetro = base * 2 + altezza * 2;
	
	printf("\nPerimetro: %i", perimetro);
	
	return 0;
	
}
