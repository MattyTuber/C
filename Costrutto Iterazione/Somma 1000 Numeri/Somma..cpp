#include <stdio.h>

int main()

{
	
	int somma, n, i;
	
	somma = 0;
	
	for (i=1; i<=100; i=i+1)
	
	{
		
		printf("Inserire un numero: ");
		scanf("%d", &n);
		
		somma = somma + n;
		
		printf("La somma e': %d\n", somma);
		
	}
	
	return 0;
	
}
