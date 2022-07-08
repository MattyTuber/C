#include <stdio.h>

#define S10 0.1
#define S15 0.15
#define S25 0.25

int main()

{
	
	float costo, importo;
	
	char cond;
	
	printf("Inserire la propria condizione: ");
	scanf("%c", &cond);
	
	printf("Inserire il prezzo del biglietto: ");
	scanf("%f", &costo);
		
	if (cond == 'P')
	
	{
		
		importo = costo - costo * S10;
		
		printf("L'importo del biglietto e' di %.2f euro", importo);
		
	}
	
	else if (cond == 'S')
	
	{
		
		importo = costo - costo * S15;
		
		printf("L'importo del biglietto e' di %.2f euro", importo);
		
	}
	
	else if (cond == 'D')
	
	{
		
		importo = costo - costo * S25;
		
		printf("L'importo del biglietto e' di %.2f euro", importo);
		
	}
	
	else
	
		printf("Condizione non valida");
		
	return 0;	
		
} 
