#include <stdio.h>

int main()

{
	
	int n, i;
	
	int prodotto = 1;
	
	printf ("Inserire un numero dispari: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i=i+2)

	{
		
		printf("Il numero e': %d\n", i);
		
		prodotto = prodotto * i;
		
	}
		
	printf("Il prodotto dei numeri dispari e': %d", prodotto);	
	
	return 0;		
	
}
