#include <stdio.h>

#define caduta 1989

int main()

{
	
	int nascita, anni;
	
	printf("Inerire l'anno di nascita: ");
	scanf("%d", &nascita);
	
	if (nascita == caduta)
	
		printf("L' utente e' nato lo stesso anno della caduta del Muro di Berlino");
		
	else if (nascita > caduta)
	
	{
			
		anni = nascita - caduta;
		
		printf("L' utente e' nato %d anni dopo la caduta del Muro di Berlino", anni);		
			
	}
		
	else
	
	{
			
		anni = caduta - nascita;
		
		printf("L' utente e' nato %d anni prima della caduta del Muro di Berlino", anni);		
			
	}
	
	return 0;	
		
}
