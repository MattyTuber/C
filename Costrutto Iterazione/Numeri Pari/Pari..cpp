#include <stdio.h>

int main()

{
	
	int n, i;
	
	printf ("Inserire un numero pari: ");
	scanf("%d", &n);
	
	for (i=0; i<=n; i=i+2)
		
		printf("Il numero e': %d\n", i);
	
	return 0;		
	
}
