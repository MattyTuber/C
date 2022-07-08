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
	
			{
				
				int x, y;
				
				printf("Immettere un numero: ");
				scanf("%d", &x);
				
				printf("Immettere un numero: ");
				scanf("%d", &y);
					
			}
			
		break;
		
		case 'b':
		
			{
				
				int x, y;
				
				printf("Immettere un numero: ");
				scanf("%d", &x);
				
				printf("Immettere un numero: ");
				scanf("%d", &y);
				
				if (x > y)
		
					printf("Il numero maggiore e': %d", x);
	
				else
		
					printf("Il numero maggiore e': %d", y);
				
			}
			
		break;
		
		case 'c':
		
			{
				
				int x, y;
				
				printf("Immettere un numero: ");
				scanf("%d", &x);
				
				printf("Immettere un numero: ");
				scanf("%d", &y);
				
				if (x < y)
		
					printf("Il numero minore e': %d", x);
	
				else
		
					printf("Il numero minore e': %d", y);
				
			}
			
		break;
		
		case 'd':
		
			{
				
				int x, y;
				
				printf("Immettere un numero: ");
				scanf("%d", &x);
				
				printf("Immettere un numero: ");
				scanf("%d", &y);
				
				if (x > y)
		
				{
					
					printf("%d", x);
					
					printf("\t%d", y);	
					
				}	
	
				else
		
				{
					
					printf("%d", y);
					
					printf("\t%d", x);	
					
				}	
				
			}
			
		break;
		
		case 'e':
		
			{
				
				int x, y;
				
				printf("Immettere un numero: ");
				scanf("%d", &x);
				
				printf("Immettere un numero: ");
				scanf("%d", &y);
				
				printf("%d", x);
				
				printf("\t%d", y);
				
			}
			
		break;
		
		default:
		
			printf("\nOpzione inesistente");
			
		break;							
		
	}
						
	return 0;										
	
}





