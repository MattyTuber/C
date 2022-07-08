#include <stdio.h>

int main()

{
	
	char scelta;

	printf("MEDU DI PROVA\n");
	
	printf("a. Immettere Dati\n");

	printf("b. Determinare il maggiore\n");

	printf("c. Determinare il minore\n");

	printf("d. Ordinare\n");

	printf("e. Visualizzare\n");

	printf("\n Scelta: ");
	scanf("%c", &scelta);
	
	if (scelta == 'a')
	
		printf("\nImmettere Dati");
		
		else if (scelta == 'b')
		
			printf("\nDeterminare il maggiore");
			
			else if (scelta == 'c')
			
				printf("\nDeterminare il minore");
				
				else if (scelta == 'd')
				
					printf("\nOrdinare");
					
					else if (scelta == 'e')
					
						printf("\nVisualizzare");
							
						else
					
							printf("\nOpzione inesistente");
						
	return 0;										
	
}





