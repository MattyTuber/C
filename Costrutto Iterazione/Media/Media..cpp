#include <stdio.h>

int main()

{
	
	int n, i;

	float media, num;
	
	float somma = 0;
	
	printf ("Inserire il numero di ripetizioni: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
	
	{
		
		printf("Inserire un numero: ");
		scanf("%f", &num);
		
		somma += num;
		
	}
	
	media = somma / n;

	printf("La media dei numeri e': %.2f", media);
	
	return 0;
	
}
