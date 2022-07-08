#include <stdio.h>

int main()

{
	
	int x;
	
	int precedente;
	
	int successivo;
	
	printf("Inserisci un valore:");
	scanf("%i", &x);
	
	precedente = x - 1;
	
	successivo = x + 1;
	
	printf("Precedente: %i", precedente);
	
	printf("\nSuccessivo: %i", successivo);
	
	return 0;
	
}
