#include <stdio.h>

int main()

{
	
	int i, n, somma;
	
	while (somma<=1000) {
		
		printf("Inserire un numero: ");
		scanf("%d", &n);
		
		somma += n;
			
		i++;
		
	}		
	
	printf("Sono stati inseriti %d numeri", i);
	
	return 0;
	
}
