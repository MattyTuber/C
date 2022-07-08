#include <stdio.h>

int main()

{
	
	int i, n, r;
	
	printf("Inserire un numero: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	
	{
		
		r = n % i;
		
		if (r == 0)
		
			printf("Divisore: %d\n", i);
		
	}
	
	return 0;
	
}
