#include <stdio.h>

int main()

{
	
	int i, n, somma, n1, n2;
	
	printf("Inserire il numero di ripetizioni: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	
	{
		
		printf("Inserire un numero: ");
		scanf("%d", &n1);
		
		printf("Inserire il secondo numero: ");
		scanf("%d", &n2);
		
		somma = n1 + n2;
		
		printf("Somma: %d\n", somma);
			
	}
	
	return 0;
	
}
