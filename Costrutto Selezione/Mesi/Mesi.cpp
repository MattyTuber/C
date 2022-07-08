#include <stdio.h>

int main()

{
	
	int mese;
	
	printf("Inserire il numero di un mese: ");
	scanf("%d", &mese);
	
	switch(mese)
	{
	
	case 1:
		
		printf("Gennaio");
		
		printf("\n31 Giorni");
		
	break;	
		
	case 2:
			
		printf("Febbraio");
			
		printf("\n28 Giorni");
		
	break;	
		
	case 3:
			
		printf("Marzo");
			
		printf("\n31 Giorni");
		
	break;	
			
	case 4:
			
		printf("Aprile");
		
		printf("\n30 Giorni");
		
	break;	
			
	case 5:
			
		printf("Maggio");
			
		printf("\n31 Giorni");
		
	break;	
			
	case 6:
			
		printf("Giugno");
			
		printf("\n30 Giorni");
		
	break;
	
	case 7:
				
		printf("Luglio");
				
		printf("\n31 Giorni");
			
	break;
	
	case 8:
					
		printf("Agosto");
					
		printf("\n31 Giorni");
				
	break;
	
	case 9:
					
		printf("Settembre");
					
		printf("\n30 Giorni");
				
	break;
	
	case 10:
					
		printf("Ottobre");
					
		printf("\n31 Giorni");
			
	break;
	
	case 11:
					
		printf("Novembre");
					
		printf("\n30 Giorni");
				
	break;
		
	case 12:
					
		printf("Dicembre");
					
		printf("\n31 Giorni");
				
	break;
	
	default:
		
		printf("Mese non valido");
	
	}
	
	return 0;
	
}
