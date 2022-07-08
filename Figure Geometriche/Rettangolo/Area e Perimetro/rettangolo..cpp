#include <stdio.h>

int main()

{
	
	int base;
	
	int altezza;
	
	int area;
	
	int perimetro;
	
	printf("Questo programma sereve a calcolare il perimetro e l'area di un trianglo rettangolo");
	
	printf("\nInserisci il valore della base: ");
	scanf("%i", &base);
	
	printf("Inserisci il valore dell'altezza: ");
	scanf("%i", &altezza);
	
	area = base * altezza;
	
	perimetro = base * 2 + altezza * 2;
	
	printf("Area: %i", area);
	
	printf("\nPerimetro: %i", perimetro);
	
	return 0;
	
}
