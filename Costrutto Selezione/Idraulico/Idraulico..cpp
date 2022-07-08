#include <stdio.h>

#define costo_h 40

int main()

{
	
	float ore, materiale, totale;
	
	printf("Inserire il costo del materiale: ");
	scanf("%f", &materiale);
	
	printf("Inserire il numero di ore: ");
	scanf("%f", &ore);
	
	totale = ore * costo_h + materiale;
	
	if (totale > 100)
	
		printf("Il totale e' di %.2f euro", totale);
		
	else
		printf("Il totale e' di 100 euro");
		
	return 0;		
	
}
