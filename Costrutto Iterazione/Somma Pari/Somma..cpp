#include <stdio.h>

int main()

{
	
	int n, i;
	
	int somma = 0;
	
	printf ("Inserire un numero pari: ");
	scanf("%d", &n);
	
	for (i=0; i<=n; i=i+2)
		
	{

		printf("Il numero e': %d\n", i);
		
		somma += i;	
		
	}
	
	printf("La somma dei numeri pari e': %d", somma);	
	
	return 0;		
	
}
