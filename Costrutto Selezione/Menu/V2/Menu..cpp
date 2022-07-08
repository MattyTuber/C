#include <stdio.h>

int main()

{
	
	char scelta;

	printf("MEDU DI PROVA\n");
	
	printf("a. Immettere Dati");

	printf("\nb. Determinare il maggiore");

	printf("\nc. Determinare il minore");

	printf("\nd. Ordinare");

	printf("\ne. Visualizzare");

	printf("\n Scelta: ");
	scanf("%c", &scelta);
	
	switch (scelta)
	
	{
		
		case 'a':
	
			printf("\nImmettere Dati");
			
		break;
		
		case 'b':
		
			printf("\nDeterminare il maggiore");
			
		break;
		
		case 'c':
		
			printf("\nDeterminare il minore");
			
		break;
		
		case 'd':
		
			printf("\nOrdinare");
			
		break;
		
		case 'e':
		
			printf("\nVisualizzare");
			
		break;
		
		default:
		
			printf("\nOpzione inesistente");
			
		break;							
		
	}
						
	return 0;										
	
}





