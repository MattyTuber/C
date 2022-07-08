#include <stdio.h>

int main()

{
	
	int i, n, n1, somma;
	
	printf("Inserire un numero: ");
	scanf("%d", &n);
	
	if (n < 1000)
	{
		
		while (somma<=1000)
		
		{
		
			printf("Inserire un numero: ");
			scanf("%d", &n1);
		
			n += n1;
		
			somma = n;
			
			i++;
		
		}
		
		i += 1;
		
	}
	
	else
	{
	 	
		i = 1;	
	 	
	}
	
	printf("Sono stati inseriti %d numeri", i);
	
	return 0;
	
}
