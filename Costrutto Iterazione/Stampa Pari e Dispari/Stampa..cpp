#include <stdio.h>

int main()

{
	
	int i, n, n1;
	
	printf("Inserire un numero: ");
	scanf("%d", &n);
	
	n1 = n % 2;

	if (n1 == 0)
	
	{
		
		printf("Numeri Pari:\n");
		
		for (i=n; i>=1; i=i-2)
		
			printf("%d\t", i);
			
		printf("\nNumeri Dispari:\n");	
			
		for (i=n-1; i>=0; i=i-2)
		
			printf("%d\t", i);
		
	}
	
	else
	
	{
		
		printf("Numeri Pari:\n");
		
		for (i=n-1; i>=1; i=i-2)
		
			printf("%d\t", i);
			
		printf("\nNumeri Dispari:\n");	
			
		for (i=n; i>=0; i=i-2)
		
			printf("%d\t", i);	
		
	}
	
	return 0;				
	
}
