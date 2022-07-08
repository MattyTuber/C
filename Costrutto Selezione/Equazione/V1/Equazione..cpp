#include <stdio.h>

int main()

{
	
	float a, b, x;
	
	printf("Calcolo dell' equazione ax=b");
	
	printf("\nInserisci il valore di a: ");
	scanf("%f", &a);

	printf("Inserisci il valore di b: ");
	scanf("%f", &b);
	
	if (a == 0)
		
		if (b == 0)
			
		{
			
			printf("X vale 0");
			
			printf("\nL' equazione e' indeterminata");
			
		}
		
		else
			
			printf("\nL' equazione e' impossibile");
			
	else
	
	{
			
		x = b / a;
		
		printf("X vale: %f", x);	
	
	}	
	
	return 0;			
	
}
