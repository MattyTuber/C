#include <stdio.h>

#define S5 0.05
#define S10 0.1

int main()

{
	
	float spesa, sconto, totale;
	
	printf("Inserisci la spesa: ");
	scanf("%f", &spesa);
	
	if (spesa >= 100)
	
		if (spesa >= 300)
		
		{
			
			sconto = spesa * S10;
			
			totale = spesa - sconto;
			
			printf("Il totale e' di %.2f euro", totale);
			
		}
		
		else
		
		{
			
			sconto = spesa * S5;
			
			totale = spesa - sconto;
			
			printf("Il totale e' di %.2f euro", totale);
			
		}
		
	else
	
		printf("Il totale e' di %.2f euro", spesa);
		
	return 0;				
		
}
