#include <stdio.h>

int main()

{
	
	int i, n;
	
	int opp = 0;
	
	float n1, n2, somma;
	
	printf("Inserire il numero di ripetizioni: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	
	{
		
		printf("Inserire un numero: ");
		scanf("%f", &n1);
		
		printf("Inserire il secondo numero: ");
		scanf("%f", &n2);
		
		somma = n1 + n2;
		
		if (somma == 0)
		
			opp += 1;
				
	}
	
	printf ("Sono state inserite %d coppie opposte", opp);
	
	return 0;
	
}
