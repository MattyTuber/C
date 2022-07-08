#include <stdio.h>

int main()

{
	
	int n, i;
	
	printf ("Inserire un numero dispari: ");
	scanf("%d", &n);
	
	for (i=1; i<=n; i=i+2)
		
		printf("Il numero e': %d\n", i);
	
	return 0;		
	
}
