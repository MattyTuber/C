#include <stdio.h>
#include <math.h>

int main()

{
	
	int i, n, p;
	
	do {
		
	printf("Inserire un numero: ");
	scanf("%d", &n);	
		
	} while ((n<2)||(n>14));
	
	for (i=n; i>0; i--)
		
	{
			
		p = pow (2, i);
			
		printf("Potenza: %d\n", p);
			
	}
		
	return 0;
	
}

