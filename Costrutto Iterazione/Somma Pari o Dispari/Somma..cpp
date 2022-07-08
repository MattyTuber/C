#include <stdio.h>

int main()

{
	
	int n, i, app;
	
	int somma = 0;
	
	printf("Inserire un numero: ");
	scanf("%d", &n);
	
	app = n % 2;
	
	if (app == 0)
	
	{
		
		for (i=n; i>=0; i=i-2)
		
			somma += i;
			
		printf("La somma e': %d\n", somma);
		
	}
	
	else
	
	{
		
		for (i=n-1; i>=0; i=i-2)
		
			somma += i;
			
		printf("La somma e': %d", somma);
		
	}
	
	return 0;
	
}
